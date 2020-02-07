#include<iostream>
using namespace std;
void permutation(char s[],int loc,int end)
{
	if(loc==end)
	cout<<s<<endl;
	else
	{
		for(int i=loc;i<=end;i++)
		{
			swap(s[loc],s[i]);
			permutation(s,loc+1,end);
			swap(s[loc],s[i]);
		}
	}
}
int main()
{
	int num;
	cout<<"\n Enter the number of characters: ";
	cin>>num;
	char set[100];
	char alpha='a';
	for(int i=0;i<num;i++)
	{
		set[i]=alpha;
		alpha++;
	}
	set[num]='\0';
	permutation(set,0,num-1);
	return 0;
}
