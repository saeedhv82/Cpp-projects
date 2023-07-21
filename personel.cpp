#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct personel {
	char name[20];
    char family[30];
    char personalno[15];
    char natcode[12];
    char marriage;
    float salary;
    int children;
    char position[30];
}a[40];

void read() {
	int i ;
	cout << " please enter information of personal : ";
	for ( i = 0 ; i < 40 ; i++ ) {
		cout << " \n name : ";
		cin >> a[i].name ;
		cout << " \n family : ";
		cin >> a[i].family;
		cout << " \n personal number : ";
		cin >> a[i].personalno;
		cout << " \n national code : ";
		cin >> a[i].natcode;
		cout << " \n position : ";
		cin >> a[i].position;
		cout << " \n marriage status : ";
		cin >> a[i].marriage;
		cout << " \n number of children : ";
		cin >> a[i].children;
		cout << " \n salary : ";
		cin >> a[i].salary;
	}
}

void sort () {
	int i , j ;
	
	struct personel temp ;
	
	for ( i = 0 ; i < 39 ; i++ )
		for ( j = i + 1 ; j < 40 ; j++ )
			if ( strcmp (a[i].family , a[j].family) > 0 ) {
				temp = a[i] ;
				a[i] = a[j] ;
				a[j] = temp ;
			}
			
			else 
			
			if ( strcmp ( a[i].family , a[j].family) == 0 )
				if ( strcmp ( a[i].family , a[j].family) > 0 ) {
					temp = a[i] ; 
					a[i] = a[j] ; 
					a[j] = temp ; 
				}
}

void report() {
	int i ; 
	cout << " \n the list of all personals : ";
	sort ();
	for ( i = 0 ; i < 40 ; i++ )
		cout << "\n" << a[i].name << "\t" << a[i].family
		<< "\t" << a[i].personalno << "\t" << a[i].natcode
		<< "\t" << a[i].marriage << "\t" << a[i].children
		<< "\t" << a[i].salary ; 
}

void conditionalreport () {
	int i ; 
	cout << "\n the list of Personnel who have more than 2 children and their salary is less than 8 million Tomans : ";
	for ( i = 0 ; i < 40 ; i++ )
		if ( a[i].salary < 8000000 && a[i].children > 2 )
			cout << "\n" << a[i].name << "\t" << a[i].family
			<< "\t" << a[i].personalno << "\t" << a[i].natcode
			<< "\t" << a[i].marriage << "\t" << a[i].children
			<< "\t" << a[i].salary ; 
}

int main () {
	read();
	report();
	conditionalreport();
	return 0 ;
}
