// {0~n-1}�������Ӽ����������취
// Rujia Liu
#include<cstdio>
using namespace std;

void print_subset(int n, int* A, int cur) {
  for(int i = 0; i < cur; i++) printf("%d ", A[i]); // ��ӡ��ǰ����    
  printf("\n");
  int s = cur ? A[cur-1]+1 : 0; // ȷ����ǰԪ�ص���С����ֵ
  for(int i = s; i < n; i++) {
    A[cur] = i;
    print_subset(n, A, cur+1); // �ݹ鹹���Ӽ�
  }
}

int A[10];
int main() {
  int n;
  scanf("%d", &n);
  print_subset(n, A, 0);
  return 0;
}
