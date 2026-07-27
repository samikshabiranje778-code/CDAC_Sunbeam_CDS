#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
   int num1,num2;
   char op;
   if(argc!=4)
   {
      printf("pass the cmd  line correctly");
      return 1;
   }
    
    
     num1= atoi(argv[1]);
     
     num2= atoi( argv[2]);
     op= argv[3][0];
     switch(op)
     {
      case'+':
      printf("result= %d \n",num1+num2);
      break;

        case'-':
      printf("result= %d \n",num1-num2);
      break;

        case'*':
      printf("result= %d \n",num1*num2);
      break;

        case'/':
        if(num2== 0)
        printf("divesion of zero not allowed\n");
        else
      printf("result= %d \n",num1/num2);
      break;

      default:
      printf("invilide operation");

     }
  return 0;

}