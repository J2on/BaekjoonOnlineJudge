#include<stdio.h>

int main() {
  int NumA;
  int NumB;
  int NumC;
  int Result;
  int NumArray[10] = {0,0,0,0,0,0,0,0,0,0};
  
  scanf("%d %d %d", &NumA, &NumB, &NumC);
  Result = NumA * NumB * NumC;
  
  while(Result > 0) {
    NumArray[Result % 10]++;
    Result /= 10;
  }

  for (int Num : NumArray){
    printf("%d\n", Num);
  }
}


