#include <stdio.h>
int main()
{
  char str[100],sub[100];
  printf("Enter a string: ");
  gets(str);
  printf("Enter another string: ");
  gets(sub);
  
  int i, j=0, k;
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;
       if(!sub[j]){
        printf("Substring");
        return 0;}
    }
  }
  printf("Not a substring");
 return 0;
}
