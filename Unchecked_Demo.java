public class Unchecked_Demo {
    public static void main(String[] args) {
        try{int num[] = {1,2,3,4,5};
         System.out.println(num[5]);
        }
        catch (Exception e){
            System.out.println("Execption is handled");
        }
        System.out.println("Program is terminated");
    }
}