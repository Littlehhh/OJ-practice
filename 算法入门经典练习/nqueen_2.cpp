#include <iostream>
#include <cstring>
using namespace std;
int vis[3][50],C[50];

int n,tot = 0;
void search(int cur){
	if( cur == n )
		tot++;
	else
		for( int i = 0; i < n; i++){
			
			if(!vis[0][i] && !vis[1][cur-i+n] && !vis[2][cur+i] ){
				C[cur] = i;
				vis[0][i] = vis[1][cur-i+n] = vis[2][cur+i] = 1;
				search(cur+1);
				vis[0][i] = vis[1][cur-i+n] = vis[2][cur+i] = 0;
				
			}
		}
}

int main(){
	cin >> n;
	memset(vis,0,sizeof(vis));
	memset(C,0,sizeof(C));
	
	search(0);
	cout << tot;
}