#include<bits/stdc++.h>
#include<fstream>

#define MAX 1000000000

using namespace std;

ofstream file; // Declaring File
void Number()
{
	long long n,T;
	cout<<"Enter range of number:";
	cin>>n;
	if(n==1)
		n=MAX;
	cout<<"Enter number of Test Case: ";
	cin>>T;
	file<<T<<"\n";
	srand(time(0));
	for(long long i=1;i<=T;i++)
	{
			long long x=rand()%n+1;	// Generating number
			file<<x<<"\n";
	}
}


void Number_with_given_digits()
{
	long long T,digits;

	cout<<"Enter the number of digits: ";
	cin>>digits;

	cout<<"Enter number of Test Case: ";
	cin>>T;
	file<<T<<"\n";
	srand(time(0));

	for(long long i=1;i<=T;i++)
	{
			int x=rand()%9+1;	//Avoiding number starting with zero
			file<<x;
			for(long long j=1;j<digits;j++)
			{
				x=rand()%10;
				file<<x;
			}
			file<<"\n";
	}	
}


void Array()
{
	long long n,T,size;
	cout<<"Enter range of number:";
	cin>>n;
	if(n==1)
	n==MAX;
	cout<<"Enter max size of Array: ";
	cin>>size;
	cout<<"Enter number of Test Case: ";
	cin>>T;
//	file<<T<<"\n";
	srand(time(0));
	for(long long i=1;i<=T;i++)
	{
			long long s=rand()%size+1,a;
			file<<s<<"\n";
			for(long long j=0;j<s;j++)
			{
				long long a=rand()%n+1;		//Generating Array of size s
				file<<a<<" ";
			}
			file<<"\n";
	}
}


void String()
{
	long long n,T,words,Case;
	cout<<"Enter the max size of string:";
	cin>>n;

	cout<<"\n";
	cout<<"1. Only Vowel\n";
	cout<<"2. Both Vowel and Consonants\n";
	cin>>words;

	cout<<"\n";
	cout<<"1. Only lower\n";
	cout<<"2. Only upper\n";
	cin>>Case;

	cout<<"Enter number of Test Case: ";
	cin>>T;
	file<<T<<"\n";
	srand(time(0));
	
	if(Case==1)
	{
		if(words==1)
		{
			for(long long i=1;i<=T;i++)
			{
				long long s=rand()%n+1,a;
				for(long long j=0;j<s;j++)
				{
					long long a;
					do
					{
						a=rand()%26+97;				// Generating lower case alphabate
					}while(a!='a' && a!='e' && a!='i' && a!='o' && a!='u');
					file<<(char)a;
				}
				file<<"\n";
			}
		}
		else
		{
			for(long long i=1;i<=T;i++)
			{
				long long s=rand()%n+1,a;
				for(long long j=0;j<s;j++)
				{
					int a=rand()%26+97;
					file<<(char)a;
				}
				file<<"\n";
			}
		}
	}
	else
	{
		if(words==1)
		{
			for(long long i=1;i<=T;i++)
			{
				long long s=rand()%n+1,a;
				file<<s<<"\n";
				for(long long j=0;j<s;j++)
				{
					long long a;
					do
					{
						a=rand()%26+65;				// Generating upper case aphabhate
					}while(a!='A' && a!='E' && a!='I' && a!='O' && a!='U');
					file<<(char)a;
				}
				file<<"\n";
			}
		}
		else
		{
			for(long long i=1;i<=T;i++)
			{
				long long s=rand()%n+1,a;
				for(long long j=0;j<s;j++)
				{
					long long a=rand()%26+65;			
					file<<(char)a;
				}
				file<<"\n";
			}
		}
	}
}


void String_array()
{
	long long n,T,words,Case,size;
	cout<<"Enter the max size of string:";
	cin>>n;

	cout<<"\n";
	cout<<"1. Only Vowel\n";
	cout<<"2. Both Vowel and Consonants\n";
	cin>>words;

	cout<<"\n\n";
	cout<<"1. Only lower\n";
	cout<<"2. Only upper\n";
	cin>>Case;

	cout<<"Enter the max size of Array: ";
	cin>>size;

	cout<<"Enter number of Test Case: ";
	cin>>T;
	file<<T<<"\n";
	srand(time(0));
	
	if(Case==1)
	{
		if(words==1)
		{
			for(long long i=1;i<=T;i++)
			{
				long long x=rand()%size+1;	
				file<<x<<"\n";					// x is the size of string array
				for(long long j=0;j<x;j++)
				{
					long long s=rand()%n+1,a;		// s is the size of string
					for(long long i=0;i<s;i++)
					{
						long long a;
						do
						{
							a=rand()%26+97;
						}while(a!='a' && a!='e' && a!='i' && a!='o' && a!='u');
						file<<(char)a;
					}
					file<<"\n";
				}
			}
		}
		else
		{
			for(long long i=1;i<=T;i++)
			{
				long long x=rand()%size+1;
				file<<x<<"\n";
				for(long long j=0;j<x;j++)
				{
					long long s=rand()%n+1,a;
					for(long long i=0;i<s;i++)
					{
						int a=rand()%26+97;
						file<<(char)a;
					}
					file<<"\n";
				}
			}
		}
	}
	else
	{
		if(words==1)
		{
			for(long long i=1;i<=T;i++)
			{
				long long x=rand()%size+1;
				file<<x<<"\n";
				for(long long j=0;j<x;j++)
				{
					long long s=rand()%n+1,a;
					for(long long i=0;i<s;i++)
					{
						long long a;
						do
						{
							a=rand()%26+65;
						}while(a!='A' && a!='E' && a!='I' && a!='O' && a!='U');
						file<<(char)a;
					}
					file<<"\n";
				}
			}
		}
		else
		{
			for(long long i=1;i<=T;i++)
			{
				long long x=rand()%size+1;
				file<<x<<"\n";
				for(long long j=0;j<x;j++)
				{
					long long s=rand()%n+1,a;
					for(long long i=0;i<s;i++)
					{
						long long a=rand()%26+65;
						file<<(char)a;
					}
					file<<"\n";
				}
			}
		}
	}
}

void custom()
{
	/*srand(time(0));
	file<<10000<<"\n";
	for(int i=0;i<10000;i++)
	{
		int a,b;
		a=rand()%10000+1;
		b=rand()%300000+1;
		file<<a<<" "<<b<<"\n";

	}*/
	file<<10<<"\n";
}
int main()
{
	file.open("Test_Cases", ios::out | ios::trunc );
	cout<<"Random Test Case Generator\n\n";
	cout<<"1. Generate a number\n";
	cout<<"2. Number with given digits\n";
	cout<<"3. Generate an array of number\n";
	cout<<"4. Generate a String\n";
	cout<<"5. Generate an array of String\n";
	cout<<"Enter your choice: ";
	int n;
	cin>>n;
	if(n==0)
	{
		custom();
	}
	else if(n==1)
	{
		Number();
	}
	else if(n==2)
	{
		Number_with_given_digits();
	}
	else if(n==3)
	{
		Array();
	}
	else if(n==4)
	{
		String();
	}
	else if(n==5)
	{
		String_array();
	}
	else
	{
		cout<<"Enter valid choice\n";
	}
	file.close();
	return 0;
}
