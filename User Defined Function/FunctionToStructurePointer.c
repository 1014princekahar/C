#include <stdio.h>
#include<stdlib.h>
struct s1
{
    int a;
};
void show(struct s1 *s2)
{
    printf("\n a = %d", s2->a);
    s2->a++;
}
int main()
{
    system("clear");
    struct s1 s = {10};
    show(&s);
    printf("\n a = %d", s.a);
    return 0;
}