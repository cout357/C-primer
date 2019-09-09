#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include<vector>
#include<list>
#include<cstdio>

using namespace std;

int main(){
	int arr[] = {2,4,5,4,4,7,4,4};
	vector<int> v(begin(arr),end(arr));
	int val = 4;
	printf("%d在v中出现了%d次\n",val,count(v.begin(),v.end(),val));
	
	list<string> li;
	li.push_back("abc");
	li.push_back("abd");
	li.push_back("zrt");
	li.push_back("awdwa");
	li.push_back("abc");
	li.push_back("aggd");
	string vals = "abc";
	printf("%s在li中出现了%d次\n",vals.c_str(),count(li.begin(),li.end(),vals));
}
