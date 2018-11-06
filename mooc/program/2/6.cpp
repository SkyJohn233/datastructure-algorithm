#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void string_add(string &a,string &b){
	int alen = a.length(),blen = b.length();
	if(alen<blen+1) return;
	int k=0;
	while(blen-1-k>=0){
		a[alen-1-k]+=b[blen-1-k]-'0';
		if(a[alen-1-k]>'9'){
			a[alen-1-k]-=10;
			a[alen-1-k-1]+=1;
		}
		++k;
	}
	return;
}
string string_mul_single(string &a,char b){
	int alen = a.length();
	string res(alen+1,'0');
	int rlen = alen+1;
	int bb = b - '0';
	int k = 0;
	while(alen-1-k>=0){
		res[rlen-1-k]+=(a[alen-1-k]-'0')*bb;
		res[rlen-1-k]-='0';
		res[rlen-1-k-1]+=res[rlen-1-k]/10;
		res[rlen-1-k]=res[rlen-1-k]%10+'0';
		++k;
	}
	return res;
}
void string_mul(string &a,string &b){
	int alen = a.length(),blen = b.length();
	string res(alen+blen+5,'0');
	for(int i=0;i<=blen-1;++i){
		string tmp = string_mul_single(a,b[blen-1-i])+string(i,'0');
		string_add(res,tmp);
	}
	bool iszero=true;
	int rlen = alen+blen+5;
	for(int i=0;i<rlen;++i){
		if(res[i]=='0'&&iszero)
			continue;
		if(iszero)
			iszero=false;
		cout<<res[i];
	}
	if(iszero)
		cout<<'0';
	cout<<endl;
}
int main(){
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	string a,b;
	cin>>a>>b;
	string_mul(a,b);
	return 0;
}