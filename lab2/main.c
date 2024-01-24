#include <stdio.h>   // This provides printf()
#include <stdlib.h>  // This provides the atoi() function below. It converts a
                     // string to an integer, like "123" -> 123
void sorting3(int e1,int e2,int e3)
{
  if (e1>e2 && e1>e3)
    {
      if (e2>e3)
	printf("%d>%d>%d\n",e1,e2,e3);
      else
	printf("\n%d>%d>%d\n",e1,e3,e2);
    }
  else if (e2>e1 && e2>e3)
    {
      if (e1>e3)
        printf("\n%d>%d>%d\n",e2,e1,e3);
      else
        printf("\n%d>%d>%d\n",e2,e3,e1);
    }
  else    //if e3>e1 and e3>e2
    {
      if (e1>e2)
        printf("%d>%d>%d\n",e3,e1,e2);
      else
        printf("%d>%d>%d\n",e3,e2,e1);
    }
}
void sorting2(int i,int j)
{
  if (i>j)
    printf("%d>%d \n",i,j);
  else
    printf("%d>%d \n",j,i);
}
int main(int argc, char** argv) {
    (void) argc;  // Use argc, prevents -Werror from catching it as unused
  
    if (atoi(argv[1]) == 0) {
      printf("NO numbers given for sorting. \n");
      printf("Exiting the program. \n");
      exit(0);
        // ... Lots missing here. Add more if branches and fill them in
    }
    else if (atoi(argv[1]) == 1)
      {
	printf("Only one number is given. \n");
	printf("The array is  \n%d",atoi(argv[2]));
	  }
    else if (atoi(argv[1]) == 2)
      {
	 printf("Only 2 numbers given \n");
	 int c = atoi(argv[2]);
         int d = atoi(argv[3]);
	 sorting2(c,d);
      }
      
    else if (atoi(argv[1]) == 3) {
        // Here we know we're given 3 numbers, so we store then in 3 different
        // variables to make it easier to compare.
        
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int c = atoi(argv[4]);
	sorting3(a,b,c);
    }
    else
      printf("More than three numbers were given. \n");
	exit(0);
}