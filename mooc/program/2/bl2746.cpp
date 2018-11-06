#include<iostream>
#include<cstring>
#include<list>
using namespace std;
const int maxn =305;
bool isquit[maxn];
int m,n;
void work(){
	list<int> monkeys;
	for(int i=1;i<=n;++i)
		monkeys.push_back(i);
	list<int>::iterator k=monkeys.begin();
	int cur = 1;
	while(monkeys.size()>1){
		//cout<<"cur "<<cur<<endl;
		if(cur==m){
			//cout<<*k<<endl;
			k = monkeys.erase(k);
			//cout<<"next"<<*k<<endl;
			cur=1;
		}
		else{
			++cur;
			++k;
		}
		if(k==monkeys.end())
			k=monkeys.begin();
	}
	cout<<*monkeys.begin()<<endl;
}
int main(){
	while(cin>>n>>m){
		if(m==0&&n==0)
			return 0;
		work();
	}
}