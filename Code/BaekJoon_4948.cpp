#include <iostream>
using namespace std;

bool isPrime(int num){
  if (num == 1){return false;}
  
  for(int i =2; i*i <= num; i++){
    if(num%i == 0){return false;}
  }
  
  return true;
}

int main() {
  int numN;

  int count;
  while(1){
    count = 0;
    cin >> numN;
    if(numN == 0){ break; }

    for(int i=numN+1; i <= 2*numN; i++){
      if(isPrime(i) == true){
        count++;
      }
    }
    cout << count << "\n";
  }
  
}