#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <set>
#include "langxun.h"
using namespace std;

int MAP[21][21];
bool checkSecure(int x,int y){
    if (x<1 || x>19) return false;
    if (y<1 || y>19) return false;
    return !((x>=9 && x<=11) && (y>=9 && y<=11));
}
set<pair<int,int> > func(int x,int y,int color){
    int i,j;
    set<pair<int,int> > result;
    for (i=x-1;checkSecure(i,y);i--){
        if (MAP[i][y] == color) break;
        if (MAP[i][y] == 0) break;
    }
    if (MAP[i][y] == color) {
        for (i = x-1;checkSecure(i,y);i--){
            if (MAP[i][y] == color) break;
            result.insert(make_pair(i,y));
        }
    }

    for (i = x+1;checkSecure(i,y);i++){
        if (MAP[i][y] == color) break;
        if (MAP[i][y] == 0) break;
    }
    if (MAP[i][y] == color) {
        for (i = x+1;checkSecure(i,y);i++){
            if (MAP[i][y] == color) break;
            result.insert(make_pair(i,y));
        }
    }

    for (i = y-1;checkSecure(x,i);i--){
        if (MAP[x][i] == color) break;
        if (MAP[x][i] == 0) break;
    }
    if (MAP[x][i] == color) {
        for (i = y-1;checkSecure(x,i);i--){
            if (MAP[x][i] == color) break;
            result.insert(make_pair(x,i));
        }
    }

    for (i = y+1;checkSecure(x,i);i++){
        if (MAP[x][i] == color) break;
        if (MAP[x][i] == 0) break;
    }
    if (MAP[x][i] == color) {
        for (i = y+1;checkSecure(x,i);i++){
            if (MAP[x][i] == color) break;
            result.insert(make_pair(x,i));
        }
    }

    for (i = x-1, j = y-1;checkSecure(i,j);i--,j--)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x-1, j = y-1;checkSecure(i,j);i--,j--){
            if (MAP[i][j] == color) break;
            result.insert(make_pair(i,j));
        }
    }

    for (i = x+1, j = y+1;checkSecure(i,j);i++,j++)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x+1, j = y+1;checkSecure(i,j);i++,j++){
            if (MAP[i][j] == color) break;
            result.insert(make_pair(i,j));
        }
    }

    for (i = x-1, j = y+1;checkSecure(i,j);i--,j++)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color) {
        for (i = x-1, j = y+1;checkSecure(i,j);i--,j++){
            if (MAP[i][j] == color) break;
            result.insert(make_pair(i,j));
        }
    }

    for (i = x+1, j = y-1;checkSecure(i,j);i++,j--)
        if (MAP[i][j] == color || MAP[i][j] == 0) break;
    if (MAP[i][j] == color){
        for (i = x+1, j = y-1;checkSecure(i,j);i++,j--){
            if (MAP[i][j] == color) break;
            result.insert(make_pair(i,j));
        }
    }

    return result;
}
int main(){
    readBoard(MAP);

    srand(time(NULL));

    if (rand()%2){
        for (int i=19;i>=1;i--)
            for (int j=19;j>=1;j--){
                if (MAP[i][j]) continue;
                if (!checkSecure(i,j)) continue;
                auto result = func(i,j,1);
                if (result.size()){
                    outputAnswer(i,j);
                    return 0;
                }
            }
    }
    else {
        for (int i=1;i<=19;i++)
            for (int j=1;j<=19;j++){
                if (MAP[i][j]) continue;
                if (!checkSecure(i,j)) continue;
                auto result = func(i,j,1);
                if (result.size()){
                    outputAnswer(i,j);
                    return 0;
                }
            }
    }

    return 0;
}
