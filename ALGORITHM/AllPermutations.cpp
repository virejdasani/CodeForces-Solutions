/* Print all Permutations of a given string using recursion.
   
   Solution by: uppy19d0
 */  


#include<bits/stdc++.h>
using namespace std;

// function to print all permuations 
void permute(string s,int index)
{
	// base case to stop the recursion process
	if(index == s.size())  
	{
		cout<<s<<endl;
		return;
	}
	
	// swapping each time with each index and then backtracking.
	for(int i=0;i<s.size();i++)
	{
		swap(s[i],s[index]);
		permute(s,i+1);
		swap(s[i],s[index]);
	}
	
}



int main()
{
	string s="ABC";
	
	// calling function to print all permutations
	permute(s,0);
	
	return 0;
}
