// Write a C program to dynamically allocate memory for N integers and calculate the sum of all elements.
int main()
{
    int element, *ptr, sum = 0 ;
    system("clear");

    printf("Enter Number of Element : ");
    scanf("%d", &element);

    ptr = (int *)calloc(element, sizeof(int));

    for (int i = 0; i < element; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum of %d Element is %d ", element, sum);

    free(ptr);
    return 0;
}