#include<stdio.h>
#define Max 5
int stack[Max];
int top =1;
int main(){
    int n,value;
    printf("Enter number of elements to insert(max %d):",Max);
    scanf("%d",&n);
    if(n>Max){
        printf("Stack overflow! Too many element\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        stack[++top]=value;
    }
    printf("\nStack stored in array:\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    return 0;
}
