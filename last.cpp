#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int op_increase(int i){return ++i;}
int op_sum(int i,int j){return i+j;}
int main ()
{
	vector<int> first;
	vector<int> second;
	vector<int> ::iterator it;
	for(int i=0;i<15;i++)
		first.push_back(i*10);
	second.resize(first.size());
	transform(first.begin(),first.end(),second.begin(),op_increase);
	transform(first.begin(),first.end(),second.begin(),first.begin(),op_sum);
	cout<<"first contains:";
	for(it=first.begin();it!=first.end();++it)
		cout<<" "<<*it;
	cout<<endl;
	return 0;
}
