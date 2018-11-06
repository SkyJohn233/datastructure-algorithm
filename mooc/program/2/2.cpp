#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void work(string &a,string &b){
	int alen = a.length();
	int target_index=-1;
	char target = 0;
	for(int i=0;i<alen;++i)
		if(a[i]>target){
			target=a[i];
			target_index=i;
		}
	cout<<a.substr(0,target_index+1)<<b<<a.substr(target_index+1)<<endl;
}
int main(){
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	string a,b;
	while(cin>>a>>b)
		work(a,b);
	return 0;
}