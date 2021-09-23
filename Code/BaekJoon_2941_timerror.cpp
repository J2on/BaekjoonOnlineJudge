#include <cstdio>

int main(){
  char word[101];
  for (char& ch:word){
    ch = '0';
  }
  scanf("%s", word);

  for(int i=0; i<101; ++i){
    if (word[i+1] == '='){
      if(i>0 && word[i] == 'z' && word[i-1] == 'd'){
        word[i-1] = '0';
        word[i] = '0';
      }
      else if (word[i] == 'c' || word[i] == 's' || word[i] == 'z'){
        word[i] = '0';
      }
    }
    else if (word[i+1] == 'j'){
      if (word[i] == 'l' || word[i] == 'n'){
        word[i] = '0';
      }
    }
    else if (word[i+1] == '-'){
      if (word[i] == 'c' || word[i] == 'd'){
        word[i] = '0';
      }
    }
  }

  int result = 0;
  for (const char& ch:word){
   // printf("%s%c \n","a:",ch);
    if (ch != '0' && ch != '\0'){
      result++;
    }
  }

  printf("%d", result);
}