#include <stdio.h>
main()
{
  int a[10],n,i,c=0;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  int k;
  printf("enter the element you want :: \n");
  scanf("%d",&k);
  for(i=1;i<=n;i++)
  {
  	if(a[i]==k)
    printf("the position of the element is %d",i);
    else
    c++;
  } 
  if(c==n)
  printf("no element found");
}
