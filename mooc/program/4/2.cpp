#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	while((c=getchar())!=EOF){
		if(c=='/'){
			char s=getchar();
			if(s=='*'){ 
				char a,b;
				a = getchar();b = getchar();
				while(a!='*'||b!='/'){
					a = b;b = getchar();
				}
			}
			else{
				putchar(c);putchar(s);
			}
		}
		else if(c=='\''||c=='"'){
			putchar(c);
			char s;
			while((s=getchar())!=c){
				putchar(s);
				if(s=='\\')
					putchar(getchar());
			}
			putchar(s);
		}
		else{
			putchar(c);
		}
	}
	system("pause");
	return 0;
}