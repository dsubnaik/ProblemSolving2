#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct person   // person type is declared here
{
 	string first_name;
 	string last_name;
 	int ID;
 	string phoneNum;
};
  
int main ()
{
	int i;
	person prs[100];  // person type array with 100 elements

	ifstream infile;

	infile.open("library_database.txt");

	if (!infile)
		cout <<"Unable to open files."<<endl;
    else
	    for (i=0; i<100; i++)
	    {
    	    infile	>>prs[i].first_name
				    >>prs[i].last_name
           		    >>prs[i].ID
           		    >>prs[i].phoneNum;
	    }
	    

	for (i=0; i<100; i++)  // Display name and last name
	{
    	cout<<"Person-"<<i<<"\t: "<<prs[i].first_name<< " "<<prs[i].last_name<<endl;
	}
	
	infile.close(); //Close file
	
	return 0;
}
