void main()
{
int a[5][5],b[5][5],c[5][5],i,j,m,n;
printf("enter the no. of rows and colmns of two matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix a\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of matrix b\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("the addition of two matrices is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
