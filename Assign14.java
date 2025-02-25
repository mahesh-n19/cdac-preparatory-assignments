import java.util.Scanner;
public class Assign14
{
	public static void main(String[] args) {

        String data;

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a string : ");
        data = scan.nextLine();

        int strLen = data.length();
        int start = 0;
        int end = strLen-1;

        boolean flag = true;

        while(start<end)
        {
            if(data.charAt(start) != data.charAt(end))
                flag = false;

            start++;
            end--;
        }

        if(flag == true)
            System.out.println(data + " is Palindrome");
        else
            System.out.println(data + " is not Palindrome");







	}
}
