#include <stdlib.h>
#include <stdio.h>

#define DUMB_DOUBLE_WIP 3.245

double get_random_double(void); // déclaration
double func(double x);
double Compute_integral_rand(double a, double b, int N);

double get_random_double(void) // définition
{
    double alea = 0.0;
    alea = ((double)random()) / RAND_MAX;
    return alea;
}

double func(double x)
{
    return x * x;
}

double Compute_integral_rand(double a, double b, int N)
{
    double I2 = 0.0;

    //calcul de I2 = somme des func(theta_k) pour k = 0 à k = N-1
    for (int k = 0; k < N; k++)
    {
        double theta_k = a + (b - a) * get_random_double(); //theta_k = nb aleatoire dans [a,b]
        I2 = I2 + func(theta_k);
    }
    I2 = I2 * (b - a) / N;

    return I2;
}

int main(void)
{

    double res = 0.0;
    double a = 0.0;
    double b = 2.0;
    int N = 1000000;

    res = Compute_integral_rand(a, b, N); // appel de la fonction
    printf("res = %g\n", res);

    return EXIT_SUCCESS;
}
