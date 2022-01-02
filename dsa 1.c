#include<stdio.h>
int main()
{
  int m,n, r,c,no,k=0;
printf("Enter number of rows\n");
scanf("%d",&r);

printf("Enter number of columns \n");
scanf("%d",&c);

int arr[r][c];

printf("Enter elments\n");
for(m=0; m<r; m++)

{
  for (n=0; n<c;n++)
  {
    scanf("%d",&arr[m][n]);
                  }
             }
printf("Enter the no. to be searched:\n");
scanf("%d",&no);

for(m=0; m<r; m++)
{
  for(n=0; n<c; n++)
  {

  if(arr[m][n]== no)
  {

printf("%d is present at (%d ,%d) times in array.\n",no,m,n);
    k = 1;
       }
     }
   }

if (k==0)
printf("%d is not present in array.\n",no);

  return 0;
  }
