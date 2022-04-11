#include <stdio.h>
 
double nabs(double x) {

    return x > 0 ? x : (-1 * x);
}

double lei(double count) {

    int count1;
    double pi, a, b;

    count1 = 2;

    //printf("Число членов в ряду \t Значение Pi \n");
    for(count; count > 0; count-=2) {

        if(count1 == 2) {
            a = 4 - 1;
            b = 1;
            pi = 4/b - 4/a;
            //printf("%d \t\t %.20f \n", count1, pi);
        }

        if(count1 > 2) {
            a = a + 4;
            b = b + 4;
            pi = pi + (4/b-4/a);
            //printf("%d \t\t %.20f \n", count1, pi);
        }

        count1 += 2;
    }
    
    return pi;
}

double test_lei() {

    int r = 0;  
    r = r || nabs(lei(2) - 3.141592653589793) >= 0.000000000000001;
    r = r || nabs(lei(4) - 3.141592653589793) >= 0.000000000000001;
    r = r || nabs(lei(6) - 3.141592653589793) >= 0.000000000000001;
    r = r || nabs(lei(8) - 3.141592653589793) >= 0.000000000000001;
    r = r || nabs(lei(10) - 3.141592653589793) >= 0.000000000000001;
    r = r || nabs(lei(12) - 3.141592653589793) >= 0.000000000000001;

    return r;
}

int main () {

    return test_lei();
}
