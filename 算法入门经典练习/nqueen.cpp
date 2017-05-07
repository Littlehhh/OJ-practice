#include <iostream>

using namespace std;

void search( int cur){
	if(cur == n) tot++;
	else
		for(int i = 0; i < n; i++){
			int ok = 1;
			C[cur] = i;
			for( int j = 0; j < cur; j++)
				if(C[cur] == C[j] || cur-C[cur] == j-C[j] || cur + C[cur] == j + C[j])
				{
					ok = 0; break;
				}
			if(ok) search(cur+1);
		}
}



int main()
{

	return 0;
}

