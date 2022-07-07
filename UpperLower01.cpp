#include <bits/stdc++.h>
using namespace std;

void printBinary(int n)
{
    string s = "" ;
	for(int i=9; i>=0; i--){
	    s = s + to_string(1&(n>>i)) ;
	}
	cout << char(n) << "  :  " << s << endl ;
}

int main() {
	
	int n ; cin >> n ;
	if(n&1) cout << "Odd number." << n << endl ;
	else    cout << "Even number" << n << endl ;
	cout << n << " doubles : " << (n<<1) << endl ;
	cout << n << " halves  : " << (n>>1) << endl ;
	
	for(char c = 'A'; c<='E'; c++) printBinary(int(c)) ;
	cout << "------------------------------------------" << endl ;
	for(char c = 'a'; c<='e'; c++) printBinary(int(c)) ;
	
	cout << "The fifth bit of lower bit is set and turns into upper if unset." << endl ;
	
	char x = 'a' ; char y = 'A' ;
	cout << char(x) << "   :    " << char(x&(~(1<<5))) << endl ;  // char(x&(~(1<<4))) ==  small a to A
	cout << char(y) << "   :    " << char(x | (1<<5)) << endl  ;  // char(x | (1<<5))  == capital A to a
	cout << "Binary of char(1<<5)  : "; cout << "Char is : " << char(1<<5) ; printBinary(1<<5) ; 
	//cout << "Binary of char(~(1<<5)) : "; cout << "Char is : " << char(~(1<<5)) ; printBinary((~(1<<5))) ;
	
	cout << "c small to capital : " << char('c' & '_') << endl ;
	cout << "C capital to small : " << char('C' | ' ') << endl ;
	
	return 0;
}


/* output 
Odd number.7
7 doubles : 14
7 halves  : 3
A  :  0001000001
B  :  0001000010
C  :  0001000011
D  :  0001000100
E  :  0001000101
------------------------------------------
a  :  0001100001
b  :  0001100010
c  :  0001100011
d  :  0001100100
e  :  0001100101
The fifth bit of lower bit is set and turns into upper if unset.
a   :    A
A   :    a
Binary of char(1<<5)  : Char is :     :  0000100000
c small to capital : C
C capital to small : c
*/
