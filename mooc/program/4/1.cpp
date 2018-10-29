#include<bits/stdc++.h>
using namespace std;
const int maxn = 10006;
vector<string> kk;
string T;
void search(int pos){
	string P = kk[pos];
	int plen = P.length(),tlen = T.length();
	int i=0,j=0;
	while(i<plen&&j<tlen){
		bool flag=false;
		if(T[j]=='['){
			++j;
			while(T[j]!=']'){
				if(P[i]==T[j]||abs(P[i]-T[j])==32)
					flag=true;
				++j;
			}
		}
		else if(P[i]==T[j]||abs(P[i]-T[j])==32)
			flag=true;
		if(!flag)
			return ;
		++i;++j;
	}
	if(i==plen&&j==tlen)
		cout<<pos+1<<' '<<P<<endl;
	return ;
}
int main(){
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n;cin>>n;
	for(int i=0;i<n;++i){
		string tmp;
		cin>>tmp;
		kk.push_back(tmp);
	}
	cin>>T;
	int tlen=T.length();
	for(int i=0;i<n;++i)
		search(i);
	system("pause");
	return 0;
}