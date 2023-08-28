/*
 * 3. [ADIVNUM] O jogo Adivinha Número consiste de dois participantes que devem adivinhar um número sorteado de 1 a 1000. 
 * A cada turno, um jogador tem a chance de tentar adivinhar o número. 
 * Ao errar o palpite, o computador indica se o número secreto é maior ou menor e passa a vez para o oponente. 
 * Seu programa deverá perguntar o nome dos dois jogadores e sortear um deles para iniciar o jogo. 
 * Use a função estática random() da classe Math contida no pacote java.util;
 */

import java.lang.Math;
import java.util.Scanner;

public class adivnum {
    
    public static void maioOuMenor(int tentativa, int inteiro){
        if (tentativa < inteiro){
            System.out.println ("Numero é maior!");
        }
        else{
            System.out.println ("Numero é menor!");
        }
    }
    
    public static void main ( String[] args){
        
        Scanner input = new Scanner(System.in);
        Double random = Math.random(); 
        random =  1000 * random;
        int inteiro = random.intValue();
        int tentativa = -1;
        int flag = 0;

        //pegando os nomes dos jogadores
        System.out.print("Jogador 1: ");
        String jogador1 = input.next();
        
        System.out.print ("Jogador 2: ");
        String jogador2 =  input.next();
        
        
        //randomizando quem começa
        if( Math.random() > 0.5 ){
            System.out.println ("Jogador sorteado para começar: " + jogador1);
            
        } else{
            System.out.println ("Jogador sorteado para começar: " + jogador2);
            String aux = jogador2;
            jogador2 = jogador1;
            jogador1 = aux;
        }
        
        // System.out.println(inteiro); essa linha é para ver o numero e poder testar
        
        //iniciando loop de tentativas
        while ( tentativa != inteiro ){
            flag = 0;

            System.out.print("De um Palpite: ");
            tentativa = input.nextInt();
            System.out.println("Palpite " + jogador1 + ":" + tentativa);
            
            if (tentativa == inteiro){
                flag = 1;
                break;
            }
            else{
                maioOuMenor(tentativa, inteiro);
            }
            
            System.out.print("De um Palpite: ");
            tentativa = input.nextInt();
            System.out.println("Palpite " + jogador2 + ":" + tentativa);
            
            if (tentativa == inteiro){
                flag = 2;
                break;
            } else{
                maioOuMenor(tentativa, inteiro);
            }
            
        }

        //para saber quem ganhou utilizei um marcador
        if ( flag == 1) {
            System.out.print(jogador1 + " Ganhou!!"); 
        } else{
            System.out.print(jogador2 + " Ganhou!!"); 
        }



        input.close();
    }
}
