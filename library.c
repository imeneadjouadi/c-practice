#include<stdio.h>
#include<string.h>
typedef struct {char title[50];
  char author[50] ; float price;  int nbrcopies ;  int publishingyear;
}book;
void fillbooks(book B[],int N){
    int i;
    for(i = 0; i < N; i++){
      printf(" book %d :\n enter title:",i+1);
      fgets(B[i].title,50,stdin);B[i].title[strcspn(B[i].title, "\n")] = 0; printf("enter author's name:");
      fgets(B[i].author,50,stdin);B[i].author[strcspn(B[i].author, "\n")] = 0;
      printf("enter price :");
      scanf("%f",&B[i].price);
      printf("enter number of copies available :");
      scanf("%d",&B[i].nbrcopies);
      printf("enter publishing year  :");
      scanf("%d",&B[i].publishingyear);getchar();

    }

}
void displaybooks(book B[],int N){
   int i;

   for(i = 0; i < N; i++){
     printf("book %d :\n title :%s\n",i+1,B[i].title);
     printf("Author :%s\n",B[i].author);
     printf("Price :%.2f\n",B[i].price);  
     printf("Number of copies available :%d\n",B[i].nbrcopies); 
     printf("Publishing year :%d\n",B[i].publishingyear); 
   }

}

int main() {
  book B[50]; int N ;
    
  // reading number of books
   
   do{
     printf("enter number of books");
     scanf("%d",&N); getchar();// Clears the \n before the first fgets
   }while (N<1 || N>50);
   
   // filiing the array 
   fillbooks(B,N);
  
   // displaying books 
  displaybooks(B,N);



   return 0; 
}