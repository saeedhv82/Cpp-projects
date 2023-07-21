#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct student {
	char name[20];
	char family[30];
	char stdno[15];
	char natcode[12];
	float course[5];
	int unit[5];
	float average;
}a[20];

//read function
	void read () {
		int i , j ; 
		int sumu ; 
		float sum ;
		cout << "\n please enter information of students : " ;
			for (i=0 ; i < 20 ; i++) {
				cout << "\n name :";
				cin  >> a[i].name;
				cout << "\n family :";
				cin >> a[i].family;
				cout << "\n student number : ";
				cin >> a[i].stdno;
				cout << "\n national code : ";
				cin >> a[i].natcode;
				sum = 0 , sumu = 0 ;
				cout << "\n please enter 5 numbers of courses and units :";
				for (j=0 ; j < 5 ; j++)   {
					cout << "\n no [" << j+1 << "] : ";
					cin >> a[i].course[j];
					cout << "\n unit [" << j+1 << "] : ";
					cin >> a[i].unit[j];
					sum += a[i].course[j] + a[i].unit[j];
					sumu += a[i].unit[j]; }
				a[i].average = sum / (sumu * 1.0);
		}
	}
	
	void sort() {
		int i , j ;
		struct student temp ;
		for ( i=19 ; j>0 ; i-- )
			for ( j=0 ; j<i ; j++ )
				if (a[j].average<a[j+1].average)
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
	}
	
	void report() {
		int i ;
		sort();
		cout << "\n the list of all students : ";
		for ( i=0 ; i<20 ; i++ )
			cout << "\n" << a[i].name << "\t" << a[i].family << "\t" << a[i].stdno << "\t" << a[i].natcode << "\t" << a[i].average ;
	}
	
	void conditionalreport() {
		int i ;
		cout << "\n the list of conditional sudents : ";
		for (i=0 ; i<20 ; i++)
			if (a[i].average<12)
			cout << "\n" << a[i].name << "\t" << a[i].family << "\t" << a[i].stdno << "\t" << a[i].natcode << "\t" << a[i].average ;
	}
	
	void topreport() {
		int i ;
		cout << "\n the list of top students : ";
		for (i=0 ; i<20 ; i++)
			if (a[i].average>=17)
			cout << "\n" << a[i].name << "\t" << a[i].family << "\t" << a[i].stdno << "\t" << a[i].natcode << "\t" << a[i].average ;
	}
	
	int main() {
		read();
		report();
		conditionalreport();
		topreport();
	}