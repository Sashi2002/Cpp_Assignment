#include <iostream>
 
using namespace std; 

int main() {
 
       char str[100],  temp;
       int i, j = -1;
       cout << "Enter the Word: " ;
       gets(str);
 
       i = 0;
       while(str[++j]!='\0');
   
        j = j - 1;
  
      while (i < j) {
          temp = str[i];
          str[i] = str[j];
          str[j] = temp;
          i++;
          j--;
    }
 
     cout << str;
     return (0);
}