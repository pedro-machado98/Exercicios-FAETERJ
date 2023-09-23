/*
 1. [IMPERIAL] No sistema imperial são utilizadas as seguintes medidas lineares:
    1 pé = 12 polegadas
    1 jarda = 3 pés
    1 milha = 1760 jardas
    Considerando que 1 polegada equivale a 25,3995 milímetros no sistema métrico, 
    faça o programa que converta um valor informado em centímetros para cada uma das unidades do sistema imperial citadas acima.
 *
*/


import java.util.Scanner;
import java.text.DecimalFormat; 

public class imperial {
    public static void main (String[] args){
        Scanner v1 = new Scanner(System.in);
        DecimalFormat arredondar = new DecimalFormat("0.00");

        System.out.println("Digite um numero inteiro em centimetros: ");
        double mm = v1.nextDouble() * 10;
        double polegada = mm/25.3395;
        double pe  = polegada / 12;
        double jarda = pe / 3;
        double milha = jarda / 1760;


        System.out.println( arredondar.format(mm) + " mm");
        System.out.println( arredondar.format(polegada) + " polegadas");
        System.out.println( arredondar.format(pe) + " pé");
        System.out.println( arredondar.format(jarda) + " jarda");
        System.out.println( arredondar.format(milha) + " milha");
        
        v1.close();
        
    }
}
