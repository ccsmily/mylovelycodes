#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc ,char* argv[])
{
	map<float,string> m;
	m[89.3]="mike";
	m[90.6]="Ann";
	m[87.9]="jim";
	m[85.9]="him";
	m[88.9]="her";
	m[97.2]="er";
	m[98.1]="xiang";
	m[86.8]="you";
	m[84.9]="it";
	
	m.erase(87.9);
	map<float,string>::iterator it;
	it=m.find(98.1);
	if(it!=m.end())
	{
		cout<<(*it).first<<":"<<(*it).second<<endl;
	}
	else
	{
	cout<<"can not find"<<endl;
	}
}
