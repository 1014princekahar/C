// Update Element in Array 
#include <stdio.h>

int main()
{

    int size, i, position , update ;
    printf("Enter Array Size :- ");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] :- ", i);
        scanf("%d", &arr[i]);
    }

    printf("Eneter Position Where You Have To Update Element :- ") ; 
    scanf("%d" , &position) ;
    
    printf("Eneter new Element :- ") ;
    scanf("%d" , &update) ;

    arr[position-1] = update ;

  
    printf("Array After Update Element : \n") ;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}