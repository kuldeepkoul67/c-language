#include <stdio.h>
#include <string.h>

void main()
{
   int k,a[50],j=0,l=1,i=0;
   printf("this is the table\n");
   
   a[0]=1;
   a[1]=2;
   a[2]=3;
   a[3]=5;
   a[4]=7;
   k=5;
   for(i=1;i<8;i++)
   {
       for(j=1;j<8;j++)
       {
           printf(" %d  ",l);
           if(l%2!=0 &&  l%3!=0 && l%5!=0 && l%7!=0)
           {
             a[k]=l;  
             k++;  
           }
           l++;
           
           
       }
       printf("\n");
   }
   printf("\n %d \n",k);

  for(j=0;j<k;j++)
  {
      printf("\n sno: %d prime nos: %d ",j,a[j]);
  }
}

