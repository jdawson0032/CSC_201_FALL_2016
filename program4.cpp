//Write a program that reads a list of double-precision grades from the keyboard into an array named grade.  
//The grades are to be counted as they're entered and entry should be terminated when a negative value has been entered.  
//After all grades have been input, the program should display the sum and average of the grades. 
//(Optional feature: The grades should be listed with an asterisk (*) placed in front of each grade that is below the average.)

/* Jeremy Dawson
   CSC 110
   Prof. Davis
   Program #4
   19APR20168 */
   


#include <iostream>
#include <cstdlib>


#include <math.h>


using namespace std;



int main()
{   //declare all variables and arrays
	int numberofGrades = 0;
    const int SCORE = 100;

    int i;

    double grade[SCORE], sum = 0;

    double average;

    //prompt user to input a score and terminate if the value is negative

    for ( i = 0; i < SCORE; i++)
    {

        cout << "Enter a score: ";
    
		cin >> grade[i];
		
		if(grade[i] < 0 )
			break;
		
		numberofGrades ++;
	
    }
     	cin.ignore(2);

 
	//print out the sum
    cout << "\nThe sum is";

 
	// calculate the average of grades
    for ( i= 0; i <= numberofGrades; i++)

    {
    	double variable = grade[i];
    

        if ( grade[i] > 0)

        	cout << "  " << variable;

        	sum = sum + grade[i];

        if ( grade[i] < 0)

        	break;

 

    }

 

    average = sum / numberofGrades;

    cout << " is " << sum << endl;

    cout << "The average of the scores is " << sum / numberofGrades+1 << endl;

     

    cout << "\n The grades are as follows:";

     

    for ( i = 0; i <= numberofGrades; i++)

    {

        if ( grade[i] < average)

            cout << "\n *" << grade[i];

        else

            cout << "\n" << grade[i];
    }

 

    cin.ignore(2);
    
    return 0;

}


