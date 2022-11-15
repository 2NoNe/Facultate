#include <stdio.h>

void afisare(int v[], int dim){

    int i;

    printf("\n");
    
    for(i=0; i<dim; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void spirala(int a[][100], int m, int n)
{
    int i, j, v[10000];
    int rs = 0, re = n-1, cs = 0, ce = m-1;
 // for(i = 0; i < n; i++){
 //        for(j = 0; j < m; j++){

 //            printf("%d ", a[i][j]);
 //        }
 //        printf("\n");
 //    }

    j = 0;
    while (rs <= re && cs <= ce) {
       // printf("da\n");

        for (i = rs; i <= re; i++) {
            v[j] = a[i][cs];
            j++;
        }
        cs++;
 
        for (i = cs; i <= ce; i++) {
            v[j]= a[re][i];
            j++;
        }
        re--;
 
        if (rs < re) {
            for (i = re; i >= rs; i--) {
                v[j] = a[i][ce];
                j++;
            }
            ce--;
        }
 
        if (cs < ce) {
            for (i = ce; i >= cs; i--) {
                v[j] = a[rs][i];
                j++;
            }
            rs++;
        }
    }
    afisare(v,j);
}

int main(){

	int a[100][100], m, n, i, j;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){

            scanf("%d", &a[i][j]);
        }
    }

	spirala (a, m, n);

	return 0;


}
