#include<iostream>
using namespace std;
#ifndef Converter_h
#define Converter_h

class Converter
{
    private:
    int input;
    string below20[20]={"zero", "one","two","three","four","five",
                        "six","seven","eight","nine","ten",
                        "eleven","twelve","thirteen","fourteen", 
                        "fifteen","sixteen","seventeen","eighteen",
                        "nineteen",};
    string tens[9]={"ten","twenty","thirty","forty","fifty",
                    "sixty","seventy","eighty","ninety"};
    string hundreds="hundred";
    string thousands="thousand";

    public:
    
    Converter(int);//constructor
    void display();//display information
};
#endif