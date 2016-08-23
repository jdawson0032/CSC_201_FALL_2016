/* this program will allow a user to input grades untill a -1 is entered. Then the program will sum and average the grades. 
Once it is summed and averaged it outputs the grades and places an astrisk next to any
value that is less than the average.

Jeremy Dawson
CSC 110
Prof. Davis
Program #4 */


#include <iostream>
#include  <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

//prototypes
void gradesEntered(double[] , const int, int& numberofGrades);			
double sumArry(const double [] , int , double& sum);					
double avgArry(const double [], int , double sum, double& average);	
void printArry(const double[] , int,  double average);					


//Declares i as a global variable 
int i;



int main()
{   
	//declare all variables and arrays
	int numberofGrades = 0;		//this stores the total number of grades entered
	const int SCORE = 100;		// this allows the array to hold a maximum of 100 elements
    double gradesAry[SCORE];	// array that stores the grades entered
	double sum = 0;				// sets the initial sum to zero
	double average;				// stores the average of the grades
	
	
	//Tell user that the program terminates when a -1 is entered
	cout<< " Enter grades when you are finished enter -1 to calculate the average of the grades."<<"\n";
	
	
	//function declarations
	gradesEntered(gradesAry, SCORE, numberofGrades);
	sumArry(gradesAry, numberofGrades, sum );
	avgArry(gradesAry , numberofGrades,sum, average);
	printArry(gradesAry, numberofGrades, average);
	
	
	//print the sum of the elements in array gradesArry
	cout <<"\n"<<"The sum of the grades is:" <<" " <<sum <<endl;
	
	
	//print the average of the grades in gradesArry
	cout << "\n"<<"The Average Grade is:" << " "<<average<<endl;
	
	cin.ignore(2);
	
	return 0;
	
	
}

//Function that prompts user to enter grades and returns value to numberofGrades.
void gradesEntered(double gradesAry[], const int SCORE, int& numberofGrades)
{
	//loop
	for(int i = 0; i < SCORE; i++ )
	{
		cout << "Please enter a grade:";	// prompt user to input a grade.
		cin  >> gradesAry[i];
		
		if(gradesAry[i] == -1)			   // terminate the program if negative one is entered
			break;
	
		
		numberofGrades++;		          // increments the numberofGrades by one each time.
	}
}


//function that adds the sum of all elements in gradesArry and returns the value to sum.
double sumArry(const double gradesAry[], int numberofGrades, double&sum)
{

	//loop
	for(i =0; i <= numberofGrades; i++)
	{
		
		sum += gradesAry[i];
		
		if(gradesAry[i] == -1)		//if -1 is entered add 1 back in to the sum 
			sum = sum + 1;
		
	}
	return sum;						// returns the sum of all grades.
}




//function that averages the elements in gradesArry and returns value to average
double avgArry(const double gradesAry[], int numberofGrades, double sum, double& average)
{
	average = 0;	//starts the average at zero
		
		//loop
		for(i = 0; i < numberofGrades; i++)
		{
			average = sum / numberofGrades;		// sets the value of average 
		}
		return average;						   // returns the average grade.
}





// function that prints out the contents of gradesArry and places an * next to any grade below the average.
void printArry(const double gradesAry[], int numberofGrades, double average)
{
	
	
	cout << "The Grades are as follows:"<<endl;			
	
	//loop
	for(i= 0; i < numberofGrades; i ++)
	{
		if(gradesAry[i] < average)
			cout << " \n " << gradesAry[i] << "*";		//prints a * next to any grade below average.
		
		else
			cout << " \n " <<gradesAry[i];				// print only the grade if it is => average.
		
	}
}
