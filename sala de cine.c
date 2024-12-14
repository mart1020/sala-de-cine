

#include <stdio.h>

void imprimirSala(int m, int n, char sala[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", sala[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int m,n,TipoSala,k,l;

    printf("Bienvenido a la venta de entradas\n\n Por favor elija su sala: \n\n [1]Tarzan \n [2]Moana \n [3]El cascanueces \n");
    scanf("%d",&TipoSala);

    if (TipoSala==1)
    {
        m=20;
        n=20;
    }
    if (TipoSala==2)
    {
        m=15;
        n=15;

    }
    if (TipoSala==3)
    {
        m=10;
        n=10;

    }
    

    // Crear una matriz de asientos, inicialmente todos libres
    char sala[m][n];

    // Inicializar todos los asientos como libres ('O')
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sala[i][j] = 'O';
        }
    }

    printf("Ingrese el asiento que desea comprar\n\n");
    printf("Fila: ");
    scanf("%d",&k);
    printf("Columna: ");
    scanf("%d",&l);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

           

            sala[k][l]='X';

            
        }
    }
    

    
    printf("El asiento vendido sera: \n\n")

    // Imprimir la sala de cine
    imprimirSala(m, n, sala);

    return 0;
}

