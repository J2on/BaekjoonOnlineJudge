#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 처음엔 N까지의 모든 소수를 구해서 그 중 약수를 판별해보자 였는데
// N의 모든 약수를 구해서 그 중 소수를 구해보는게 더 나을것 같다.

bool isPrime(int num){
  if(num == 1) return false;
  
  for(int i=2; i*i <= num; i++){
    if(num % i == 0) return false;
  }
  return true;
}

vector<int> findDivisor(int num){
  vector<int> result;
  for(int i =1; i*i <= num; i++){
    if(num%i == 0){
      result.push_back(i);
      result.push_back(num/i);
    }
    else if(i*i == num){
      result.push_back(i);
    }
  }
  sort(result.begin(), result.end());
  return result;
}

int main() {
  int numN;
  cin >> numN;
  int numN_copy = numN;
  vector<int> divVec = findDivisor(numN);

  vector<int> priDivVec;
  while(1){
    if(divVec.size() > 2){
      priDivVec.push_back(divVec[1]);
      divVec = findDivisor(divVec[divVec.size()-2]);
    }
    else break;
  }

  for(int div:divVec){
    if(isPrime(div) == true){
      priDivVec.push_back(div);
    }
  }

  sort(priDivVec.begin(), priDivVec.end());

  if(numN != 1) {
    for(int pri:priDivVec){cout << pri << "\n";}
  }
}