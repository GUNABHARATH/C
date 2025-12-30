#include<stdio.h>
  int my_atoi(const char *p);
  int main(int argc,char **argv)
  {
          int x;
          if(argc != 2) {
          printf("Usage : ./a.out int\n");
          return 0;
          }
          x = my_atoi(argv[1]);
          printf("x = %d\n",x);
 }
int my_atoi(const char *p)
  {
          int i = 0,sum = 0;
          if((p[0] == '-')||(p[0] == '+'))
          i = 1;

          for(;p[i];i++)
          {
                  if((p[i]>='0')&&(p[i]<='9'))
                  sum = sum*10+(p[i]-48);
                  else
                  break;
          }
          if(p[0] == '-')
          return -sum;
          else
          return sum;
  }
