#include <stdio.h>

int main()
{
    void ausgabeFeld(double *dFeld, int groesse )
    {
        int index = 0;
        for(index = 0; index < groesse; index ++)
            printf("Wert %d: %.2f\n", index+1, dFeld[index]);
        printf("\n");
    }

    double preisObstFeld[6] = {1.45, 0.85, 2.10, 1.35, 0.55, 0.42};
    double preisFischFeld[3] = {2.75, 1.65, 3.40};

    int groesse = sizeof(preisObstFeld)/sizeof(preisObstFeld[0]);
    ausgabeFeld(preisObstFeld, groesse);
   
    return 0;
}