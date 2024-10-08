#include <stdio.h>

int main(void) {
    float pg, r;
    r = 1;
    pg = 3.14;
    while (r <= 20) {
        printf("%f \n",pg*r*r*4/3);
        r = r + 1;
    }
}
