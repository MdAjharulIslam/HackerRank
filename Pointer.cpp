#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
 *a = *a + *b;
 *b = (*a-2*(*b) >=0)?(*a-2*(*b)) : (2 * (*b)-*a) ;


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
