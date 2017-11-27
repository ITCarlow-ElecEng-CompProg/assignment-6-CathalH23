/** Decimal / Binary Numbering Systems Conversion
 *  c00184521
 *  Cathal Hogan
 *  18/10/2017
 */


//preprocessor directives
#include <iostream>
#include <math.h>

using namespace std;

//Function Prototypes
int bin_2_dec(long int);
int dec_2_bin(long int);


int main()
{
    int n;

     // Title
    cout << "Decimal / Binary Numbering Systems Conversion" << endl;

    //Variable  Declaration
    char Input;

    do
    {           //Conditions
        cout<<  "\n\nChoose from the following:"<<
                "\n'b' binary number to its decimal value"<<
                "\n'd' decimal number to its unsigned binary value"<<
                "\n'q' to quit program";
        cin>>Input;

        //Follows which operation is required
        switch(Input)  
		{
            case 'b':
                        cout<<"Enter binary value"<<endl;
                        cin>>n;
                        int bin_2_dec(long int n);
                        // bin_2_dec function result will display below
                        cout<<" \nThe binary number "<< n <<" is "<< bin_2_dec(n) <<" in decimal ";
                        break;

            case 'd':
                        cout<<"Enter decimal value"<<endl;
                        cin>>n;
                        int dec_2_bin(long int n);
                        //Display dec_2_bin function result below
                        cout<<" \nThe decimal number "<< n <<" is "<< dec_2_bin(n) <<" in binary ";
                        break;

            case 'q':
                        cout<<"quitting"<<endl;
                        break;

            default:
                        cout<<"Please try again"<<endl;
                        break;
        }
    }

    while (Input!='q');

    return 0;
}



//bin_2_dec function
int bin_2_dec(long int n)
{
    int Decimal=0, i=0, remainder;//variable declaration

    while (n!=0)

    {
        remainder =n%10;//performing calculation
        n=n/10;
        Decimal=Decimal + remainder*pow(2,i);
        i++;
    }
    return Decimal;
}



//dec_2_bin Function
int dec_2_bin (long int n)
{
    long long Binary=0;
    int remainder, i=1;

    //while loop
    while (n!=0)
    {
        remainder=n%2;
        n=n/2;
        Binary =Binary + remainder*i;
        i =i * 10;
    }
    return Binary;
}
