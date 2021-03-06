/*

Mack gives Daisy two strings S1 and S2-consisting only of characters- 'M' and 'D' , and asks her to convert S1 to S2 in exactly N moves.

In a single move, Daisy has two choices:

    Exchange any one 'M' with a 'D', or
    Exchange any one 'D' with a 'M'.

You need to help Daisy if it's possible to transform S1 to S2 in exactly N moves. Output "Yes" if possible, else "No".


Input Format:
First line contains T, the number of test cases. T lines follow.
Each line consists of 2 space separated strings S1 and S2, and and the value N.


Output Format:
For each test case, print the answer, either "Yes" or "No"-(Without the quotes).


Constraints:
1 ≤ T ≤ 250
1 ≤ |S1|=|S2| ≤ 50
1 ≤ N ≤ 100
SAMPLE INPUT

3
MMDMDDM DDDDDDD 2
MMDD MMDD 1
MMMMMDMM DDDDDMDD 8

SAMPLE OUTPUT

No
No
Yes

Time Limit: 1.0 sec(s) for each input file. 

*/

// amanalphakumar

#include <bits/stdc++.h>

using namespace std ;

void fly() ;

int main()
{
	int t = 1 ;

	cin >> t; 
	while( t-- ) fly() ;
	
	return 0 ;
}

void fly()
{
	int n ;
	string s1, s2 ;
	cin >> s1 >> s2 >> n ;

	bool ret = true ;
	int mm = 0 ;

	// Count the number of mismatches
	for( int i = 0 ; i < s1.length() ; i++ )
	{
		if( s1[i] != s2[i] )
			mm++ ;
	}

	if( mm == n )
		ret = true ;
	
	else if( mm > n )
		ret = false ;
  
  // Most important case
	else
	{
		int temp = mm-n ;

		if( temp % 2 == 0 )
			ret = true ;
		else
			ret = false ;
	}

	// Print ans
	if( ret )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
}

// https://www.hackerearth.com/codearena/ring/eef06d7/
