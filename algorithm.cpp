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
//find�������ڷ�Χ�ڲ���ĳֵ������ҵ��ͷ���ָ���Ԫ�صĵ����������򷵻�ָ��ĩβԪ�غ�һλ�ĵ����� 
void findFunc(){
	int arr[10] = {6,5,3,4,1,8,7,2,9,0};
	vector<int> v(arr,arr+10);
	
	int *num = find(arr,arr+10,11);	
	//��c++11��vector<int>::iterator����auto����			
	vector<int>::iterator it = find(v.begin(),v.end(),4);
	cout << "��arr��4" << (num==arr+10?"������":"����") << endl;
}
//count����,�ڷ�Χ�ڲ���ĳֵ���ִ��� 
void countFunc(){
	int arr[] = {2,4,5,4,4,7,4,4};
	//begin()��end()������c++11��׼�ĺ���������λ��ͷ�ļ�iterator�� 
	cout << count(begin(arr),end(arr),0) << endl;
}
