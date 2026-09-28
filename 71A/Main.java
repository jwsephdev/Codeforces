import java.util.Scanner;

public class Main {

     public static void main(String[] args) {
          Scanner scanner =  new Scanner(System.in);

          int x = scanner.nextInt();

          for (int i = 0; i < x; i++)
          {    
               String words = scanner.next();

               
               if (words.length() - 1 >= 10){
                    System.out.println(words.charAt(0) + "" + (words.length() - 2) + words.charAt(words.length() - 1) );
               } else {
                    System.out.println(words);
               }


          }
          
          scanner.close();
     }



}