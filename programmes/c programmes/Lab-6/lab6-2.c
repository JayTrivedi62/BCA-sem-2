 //2. Create a structure book with book title, author, publication, and price. Read the data of 3 books and display. (A)
 
 #include<stdio.h>
 
 struct book{
 	
 	char booktitle[30];
 	char author[30];
 	char publication[30];
 	float price;
 }b[3];
 
 void main()
 {
 	int i,a;
 	
 	for(i=0;i<3;i++)
 	{
 	
 	printf("Enter %d Booktitle \n",i+1);
 	scanf("%s",b[i].booktitle);
 	
 	printf("Enter %d Author \n",i+1);
 	scanf("%s",b[i].author);
 	
 	printf("Enter %d Publication \n",i+1);
 	scanf("%s",b[i].publication);
 	
 	printf("Enter %d Price \n",i+1);
 	scanf("%f",&b[i].price);
 	}
 	
 	for(i=0;i<3;i++)
 	{
 		printf("%d Booktitle = %s \n",i+1,b[i].booktitle);
		 	printf("%d Author = %s \n",i+1,b[i].author);	
			 	printf("%d Publication = %s \n",i+1,b[i].publication);	
				 	printf("%d Price = %d",i+1,b[i].price);		
	}
 	
 	
 	
 }
