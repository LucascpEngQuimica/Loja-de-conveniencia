#include <stdio.h>
#include <stdlib.h>

int main()
{
    char np[20];
    int qnt;
    float pu;
    float vt ;  
    float vtd;
    int cont;
        
    
    printf("Type the product's name: ");
    scanf("%s", np);
    printf("Quantity: ");
    scanf("%d", &qnt);
    printf("Price: ");
    scanf("%f", &pu);
    vt = pu * qnt;
    printf("The amount for %s is %.2f\n", np, vt);
    
    while (1)
    {
        printf("Do you want to continue? Press 1 for yes \nor any other number to exit: ");
        scanf("%d", &cont);
        
        if (cont == 1)
        {
            printf("Type the product's name: ");
            scanf("%s", np);
            printf("Quantity: ");
            scanf("%d", &qnt);
            printf("Price: ");
            scanf("%f", &pu);
            vt = vt + (pu * qnt);  // Adicionar o valor ao total
            printf("The amount for %s is %.2f\n", np, pu * qnt);
        }
        else
        {
            vtd = vt;
            printf("The total value is %.2f\n", vtd);
            break;
        }
    }
    return 0;
}