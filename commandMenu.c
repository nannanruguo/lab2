#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void help()
{
    printf("\t***************************help*********************************\n"
           "\t*\tThis menu program is coded by daisy. Version1.0\t\t*\n"
           "\t*\t\t\t\t\t\t\t\t*\n"
           "\t*\thelp\t\tshow this help list\t\t\t*\n"
           "\t*\thello\t\tsay hello to you\t\t\t*\n"
           "\t*\tpwd\t\tshow the prensent working dictory\t*\n"
           "\t*\tadd\t\tadd two values and return the result\t*\n"
           "\t*\tsub\t\tsub two values and return the result\t*\n"
           "\t*\tmax\t\tprint the max value of two values\t*\n"
           "\t*\tmin\t\tprint the min value of two values\t*\n"
           "\t*\tquit\t\texit cmd\t\t\t\t*\n"
          );
}

void hello()
{
    printf("Hello,I am glad to meet you here.\n");
}

int pwd()
{
   printf("%s\n",getcwd(NULL,0));
   return 0;
}

int add()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("result is %d\n",c);
}

int sub()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("result is %d\n",c);
}

int max()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>=b)
        c=a;
    else
        c=b;
    printf("the max value is %d\n",c);
}

int min()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<=b)
        c=a;
    else
        c=b;
    printf("the min value is %d\n",c);
}

void quit()
{
    exit(0);
}

int main()
{
    while(1)
    {
       char cmd[128];
       scanf("%s",cmd);
       if(strcmp(cmd,"help")==0)
       {
           help();
       }
       else if(strcmp(cmd,"hello")==0)
       {
           hello();
       }
       else if(strcmp(cmd,"pwd")==0)
       {
           pwd();
       }
       else if(strcmp(cmd,"add")==0)
       {
           add();
       }
       else if(strcmp(cmd,"sub")==0)
       {
           sub();
       }
       else if(strcmp(cmd,"max")==0)
       {
           max();
       }
       else if(strcmp(cmd,"min")==0)
       {
           min();
       }
       else if(strcmp(cmd,"quit")==0)
       {
           exit(0);
       }
   }
}

