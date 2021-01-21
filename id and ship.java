/* package codechef; // don't place package name! */

import java.util.Scanner;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        String finalId;
        Scanner myObj = new Scanner(System.in);
        int testCase = myObj.nextInt();
        for(int i=0;i<=testCase;i++)
        {
            String userId = myObj.nextLine();
            finalId = userId.toLowerCase();
            switch(finalId)
            {
                case "b":
                    System.out.println("BattleShip");
                    break;
                case "c":
                    System.out.println("Cruiser");
                    break;
                case "d":
                    System.out.println("Destroyer");
                    break;
                case "f":
                    System.out.println("Frigate");
                    break;
            }
        }
    }
}
