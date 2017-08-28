#include<stdio.h>
#include<string.h>

int main()
{
  char str[10]="hello";
  int i,len,l2;
  len=strlen(str);
  printf("length=%d\n",len);
  for(i=0;i<len;i++)
  { printf("str[%d]=%c\n",i,str[i]);
    str[0]='\0';
  }
   for(i=0;i<len;i++)
  { printf("\tstr[%d]=%c\n",i,str[i]);
    
  }
  l2=strlen(str);
  printf("length 2 =%d\n",l2);
  return 0;
}
