#include<string>
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<string> kk;
bool work(string &ss){
	int s=-1,e=-1;
	int len =ss.length();
	int cur=0;
	while(cur<len){
		if(ss[cur]=='<')
			s=cur;
		if(ss[cur]=='>'){
			e=cur;
			string tmp = ss.substr(s+1,e-1-s);
			if(tmp[0]=='/'){
				if(kk.empty())
					return false;
				else {
					string another = kk[kk.size()-1];
					if(another==tmp.substr(1))
						kk.pop_back();
					else return false;
				}
			}
			else kk.push_back(tmp);
		}
		++cur;
	}
	return kk.empty();
}
int main(){
	string s;
	char tt[10005];
	cin.getline(tt,10000);
    s=string(tt);
    if(work(s))
    	cout<<"True"<<endl;
    else cout<<"False"<<endl;
	return 0;
}