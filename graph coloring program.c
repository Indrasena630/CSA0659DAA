#include<conio.h>
#include<stdio.h>
int g[10][10],color[10],n;
int main()
{
 void graph(int k);
 void display();
 int e,i,j,v1,v2;

 printf("Enter no of vertices:");
 scanf("%d",&n);
 printf("Enter no of edges:");
 scanf("%d",&e);
 for(i=0;i<n;i++)
 {
  color[i] = 0;
  for(j=0;j<n;j++)
  {
   g[i][j] = 0;
  }
 }
 printf("Enter edges: ");
 for(i=1;i<=e;i++)
 {
  scanf("%d%d",&v1,&v2);
  g[v1][v2] = 1;
  g[v2][v1] = 1;
 }
 for(i=0;i<n;i++)
  graph(i);
 display();
 return 0;
 getch();
}

void graph(int k)
{
 int i;
 color[k] = 1;
 for(i=0;i<k;i++)
 {
  if(g[i][k]!=0 && color[i] == color[k])


 {
   color[k] = color[k]+1;
  }
 }
}

void display()
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("vertex %d: %d\n",i,color[i]);
 }
}
