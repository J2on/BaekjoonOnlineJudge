#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string str){

    int last = str.size() -1;
    for(int i=0; i< str.size()/2; i++){
        if(str[i] == str[last - i]){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    
  string str;
  cin >> str;
  cout << isPalindrome(str);
}
