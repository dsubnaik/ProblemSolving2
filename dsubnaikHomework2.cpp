//********************************************************************
// Name:Derrick Subnaik
// Class: COSC 1436 Spring2023
// Instructor: Habib Senol
// Homework 2
// Date: 2-15-2023
// Program description: Game
//********************************************************************
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void showBoard(int[][4]);              // showboard functiom
void initializeBoard(int[][4], int[]); // initialize board function
void shuffle(int[]);                   // shuffle function for numbers 1-16
int searchfor16(int[]);                // function to search for index 16
int searchForM(int[], int);            // search for integer variable m
void swap(int[], int, int);            // swaps 16 and m
bool arrayCheck(int[]);                // checks if the array is in order
// main funtion
int main() {
  char choice;
  int m;
  while (choice == 'y' ||
         choice == 'Y') // after the user beats the game if they enter y this
                        // will allow them to play again
    srand(time(NULL));
  int Boardnumbers[4][4];
  int positionOf16, positionOfM, x;
  int array[] = {1,  2,  3,  4,  5,  6,  7, 8, 9,
                 10, 11, 12, 13, 14, 15, 16}; // this array will be randomized
  shuffle(array);                             // this will randomize the array
  initializeBoard(Boardnumbers, array);
  // Explains to the user the concept and ow to beat the game
  cout << "You have to arrange the numbers in order from 1-15\n";
  cout << "You can only move the numbers that border the blank space\n";
  do {
    initializeBoard(Boardnumbers, array);
    showBoard(Boardnumbers);
    cout << "\n\n\tEnter the number you want to move : ";
    cin >> m;
    // when the user enters a number that is not between 1-15
    if (m < 0 || m > 15) {
      cout << "        You have to enter a number between 1-15" << endl;
    }
    // when the user does enter a valid number
    else {
      positionOf16 =
          searchfor16(array); // locates the position of 16(blank space)
      positionOfM = searchForM(
          array,
          m); // locates the position of the m(the number the user entered)
      swap(array, positionOf16,
           positionOfM); // swaps the two numbers if the entered a write move
      x = arrayCheck(array); // to checl if the user beat the game
      if (x != false)
        cout << "You Won!" << endl;
    }
  } while (x == false);
  // asks the user if they want to pla again
  cout << "Enter Y if you would like to play again" << endl;
  cin >> choice;
  return 0;
}

// a function that generates 4x4 matrix having random numbers
// in 1-16. Let us assume 16 represents empty cell.
void initializeBoard(int nmbs[][4], int array[]) {
  // Generate random numbers that are different from each other !!!
  // You should review this part in your solution.
  int k = 0;
  for (int r = 0; r < 4; r++) {

    for (int c = 0; c < 4; c++) {
      nmbs[r][c] = array[k++];
    }
  }
}

// a function that draws a board on the screen
void showBoard(int nums[][4]) {
  cout << "\n\t";
  cout << (char)201 << (char)205 << (char)205;
  for (int i = 0; i < 3; i++)
    cout << (char)203 << (char)205 << (char)205;
  cout << (char)187;
  for (int r = 0; r < 4; r++) {
    cout << "\n\t";
    for (int c = 0; c < 4; c++)
      cout << (char)186 << (nums[r][c] < 10 ? " " : "")
           << (nums[r][c] != 16 ? to_string(nums[r][c]) : "  ");
    cout << (char)186;

    cout << "\n\t" << (r < 3 ? (char)204 : (char)200) << (char)205 << (char)205;
    for (int i = 0; i < 3; i++)
      cout << (r < 3 ? (char)206 : (char)202) << (char)205 << (char)205;
    cout << (r < 3 ? (char)185 : (char)188);
  }
}

// this function shuffles the array and gives it in a random order each time
void shuffle(int array[]) {
  int temp;
  int randomIndex;

  for (int i = 0; i < 16; i++) {
    randomIndex = rand() % 15;
    temp = array[i];
    array[i] = array[randomIndex];
    array[randomIndex] = temp;
  }
}

// this function is used to find the 16 index of the array
// have to find 16 because it is the index which is blank that the user switches
// with
int searchfor16(int array[]) {
  int index = 0;
  int position = -1;
  bool found = false;
  while (index < 16 && !found) {
    if (array[index] == 16) {
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}

// this function is used to find the index of which the variable the user
// entered is that the index is then returned back to main
int searchForM(int array[], int m) {
  int index = 0;
  int position = -1;
  bool found = false;
  while (index < 16 && !found) {
    if (array[index] == m) {
      found = true;
      position = index;
    }
    index++;
  }
  return position;
}

// this function is used to swap the variable the user entered m with the blank
// space/16
void swap(int array[], int x, int m) {
  // m==(x-1) is for if the number is to the left of the blank spot
  // m==(x+1) is for if the number is to the right of the blank spot
  // m==(x-4) is for if the number is below the blank spot
  // m==(x+4) is for if the number is above the blank spot
  if (m == (x - 1) || m == (x + 1) || m == (x - 4) || m == (x + 4)) {
    int temp;
    temp = array[x];
    array[x] = array[m];
    array[m] = temp;
  }
  // when the user enters a number that is not above, below or beside theblank
  // spot
  else {
    cout << "         You cannot do that move" << endl;
  }
}

// this function is used to check after each move/swap if the user has gotten
// the game in correct order
bool arrayCheck(int array[]) {
  int x;
  int arrayTwo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  for (int i = 0; i < 16; i++) {
    if (array[i] != arrayTwo[i])
      x = false;
    ;
  }
  return x;
}
