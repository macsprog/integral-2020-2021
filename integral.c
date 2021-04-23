#include <stdlib.h>
#include <stdio.h>



double func(double x);
double Compute_integrale(double a, double b, int N);


int main()
{
    double int_res = 0.0;
    int_res = Compute_integrale(0,2,1000);
    printf("int_res = %10.20g\n", int_res);

    return EXIT_SUCCESS;
}

double func(double x)
{
    double res;
    res = x * x;
    return res;
}

double Compute_integrale(double a, double b, int N)
{
    double I = 0;
    int i;
    double x;
    for (i = 0; i < N; i++)
    {

        x = a + i * (b - a) / N;
        I = I + (b - a) / N * func(x);
    }

    return I;
}

