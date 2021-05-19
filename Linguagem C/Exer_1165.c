    #include <stdio.h>

    int main()
    {
        int num, cont1=0, ler=0, cont2=0;
        scanf("%d", &num);

        while(cont1 != num){
        scanf("%d", &ler);
         for (int i=2; i<ler; i++){
            if (ler % i == 0){
                cont2++;
            }
         }

         if (cont2 == 0){
            printf("%d eh primo\n", ler);
         } else{
            printf("%d nao eh primo\n", ler);
         }

            cont2 =0;
            cont1++;
        }



        return 0;
    }
