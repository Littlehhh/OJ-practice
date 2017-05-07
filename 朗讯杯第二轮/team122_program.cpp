#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <set>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <iostream>
#include "langxun.h"
using namespace std;
int steps;
int color;
int stepX[400];
int stepY[400];
int MAP[21][21];
bool checkSecure(int x,int y){
    if (x<1 || x>19) return false;
    if (y<1 || y>19) return false;
    return !((x>=9 && x<=11) && (y>=9 && y<=11));
}
int func(int x,int y,int color){
    int i,j;
    int sum = 0;
    set<pair<int,int> > result;
    for (i=x-1;checkSecure(i,y);i--){
        if (MAP[i][y] == color) break;
        if (MAP[i][y] == 0) break;
    }
    if (MAP[i][y] == color) {
        for (i = x-1;checkSecure(i,y);i--){
            if (MAP[i][y] == color) break;
            
            sum ++;
        }
    }

    for (i = x+1;checkSecure(i,y);i++){
        if (MAP[i][y] == color) break;
        if (MAP[i][y] == 0) break;
    }
    if (MAP[i][y] == color) {
        for (i = x+1;checkSecure(i,y);i++){
            if (MAP[i][y] == color) break;
            
            sum ++;
        }
    }

    for (i = y-1;checkSecure(x,i);i--){
        if (MAP[x][i] == color) break;
        if (MAP[x][i] == 0) break;
    }
    if (MAP[x][i] == color) {
        for (i = y-1;checkSecure(x,i);i--){
            if (MAP[x][i] == color) break;
            
            sum ++;
        }
    }

    for (i = y+1;checkSecure(x,i);i++){
        if (MAP[x][i] == color) break;
        if (MAP[x][i] == 0) break;
    }
    if (MAP[x][i] == color) {
        for (i = y+1;checkSecure(x,i);i++){
            if (MAP[x][i] == color) break;
            
            sum ++;
        }
    }

    for (i = x-1, j = y-1;checkSecure(i,j);i--,j--)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x-1, j = y-1;checkSecure(i,j);i--,j--){
            if (MAP[i][j] == color) break;
            
            sum ++;
        }
    }

    for (i = x+1, j = y+1;checkSecure(i,j);i++,j++)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x+1, j = y+1;checkSecure(i,j);i++,j++){
            if (MAP[i][j] == color) break;
            
            sum ++;
        }
    }

    for (i = x-1, j = y+1;checkSecure(i,j);i--,j++)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x-1, j = y+1;checkSecure(i,j);i--,j++){
            if (MAP[i][j] == color) break;
            
            sum ++;
        }
    }

    for (i = x+1, j = y-1;checkSecure(i,j);i++,j--)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color){
        for (i = x+1, j = y-1;checkSecure(i,j);i++,j--){
            if (MAP[i][j] == color) break;
            
            sum ++;
        }
    }

    return sum;
}
int Distance(pair<int,int>  a){
	
	return (abs( a.first/100 - stepX[steps] ) + abs( a.first %100 - stepY[steps]) );
}
bool cmp(set< pair<int,int> > a, set< pair<int,int> > b){
	
	return a.size() > b.size();
}

bool cmp1(pair<int,int> a, pair<int,int> b){
	if(a.second != b.second) return a.second > b.second;
	else return Distance(a) < Distance(b);
}

bool cmp2(pair<int,int> a, pair<int,int> b){
	return a.second > b.second;
	
}
int main(){
	memset(stepX,0,sizeof(stepX));
	memset(stepY,0,sizeof(stepY));
    readBoard(MAP);
	vector< pair<int,int>  > v;
	v.clear();
	
	steps = readStep(stepX,stepY);
	
	if( steps % 2 == 0 ) color = 1;
	else color = 2;
    for (int i=1;i<=19;i++){
		for (int j=1;j<=19;j++){
            if (MAP[i][j]) continue;
            if (!checkSecure(i,j)) continue;
   			
   			int sum = func(i,j,color);
			if(sum) 
			   v.push_back(make_pair((i*100+j),sum));
    
		}
	}
	if(!v.empty()){
		sort(v.begin(), v.end(), cmp1);
		int i = v[0].first/100;
		int j = v[0].first%100;
	/**/	FILE *fp = fopen("test2.txt","a");   
        fprintf(fp,"sort %d Done. position : (%d %d)",steps,i,j);       
		fprintf(fp,"\n");    	
    	fclose(fp);
	
		outputAnswer(i,j);
	}



    return 0;
}
