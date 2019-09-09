#include<algorithm>
#include<list>
#include<iterator>
#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;


void findFunc();
void countFunc();

int main(){
	countFunc();
	
	return 0;
}
//find函数，在范围内查找某值，如果找到就返回指向该元素的迭代器，否则返回指向末尾元素后一位的迭代器 
void findFunc(){
	int arr[10] = {6,5,3,4,1,8,7,2,9,0};
	vector<int> v(arr,arr+10);
	
	int *num = find(arr,arr+10,11);	
	//在c++11中vector<int>::iterator可用auto代替			
	vector<int>::iterator it = find(v.begin(),v.end(),4);
	cout << "在arr中4" << (num==arr+10?"不存在":"存在") << endl;
}
//count函数,在范围内查找某值出现次数 
void countFunc(){
	int arr[] = {2,4,5,4,4,7,4,4};
	//begin()与end()函数是c++11标准的函数，函数位于头文件iterator中 
	cout << count(begin(arr),end(arr),0) << endl;
}
