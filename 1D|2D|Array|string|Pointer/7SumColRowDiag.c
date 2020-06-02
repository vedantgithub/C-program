 /*sum of indivisual row ,column,diagonal*/
 #include<stdio.h>
 int main()
 {
 	int a[3][3],i,j,s1,s2,s3;
	 printf("enetr the 3*3 matrix");
	 for(i=0;i<3;i++)
	 	for(j=0;j<3;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		}
	  
	   s3=0;
	   for(i=0;i<3;i++)
	   {
	   	s1=s2=0;
	   	for(j=0;j<3;j++)
	   	    {
	   		s1=s1+a[i][j];
	   		s2=s2+a[j][i];
	   		if(i==j)
	   		
	   			s3=s3+a[i][j];
			   
		    }
		   printf("row=%d,col=%d",s1,s2);
	   }
	   printf("\ndiagonal=%d",s3);
 }
 
