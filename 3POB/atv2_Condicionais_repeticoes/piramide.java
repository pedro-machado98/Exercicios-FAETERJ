/* 
[PIRAMIDE] Escreva um programa que mostre no console uma pirâmide de números, 
com um número de linhas entre 1 e 9, fornecido pelo usuário.
Caso o número esteja fora do limite, mostrar mensagem de erro e solicitar novamente o número.
Por exemplo, se o número de linhas for 4, o resultado será:
   1
  121
 12321
1234321

*/


import java.util.Scanner;

public class piramide {
   public static void main (String[] args){
         Scanner scan = new Scanner(System.in);

         System.out.println("Digite quantas linhas da piramide deseja exibir");
         int linha = scan.nextInt();
         
         while ( linha > 9 || linha < 1){

            System.out.println("Erro, numero menor que 1 ou maior que 9. Tente novamente:");
            
            System.out.println("Digite quantas linhas da piramide deseja exibir");
            linha = scan.nextInt();
            
         }

         for ( int i  = 0 ; i < linha ; i++) {

            int j;

            for ( int k = i ; k < linha -1  ; k++) {

               System.out.print(" ");

            }

            for ( j = 0 ; j <= i  ; j++) {
               
               System.out.print(j+1);   
               
            }
            
            while (j != 1) {
               
               j--;
               System.out.print(j);  

            }
            
            System.out.println();
            
         }

         scan.close();

   }

}
