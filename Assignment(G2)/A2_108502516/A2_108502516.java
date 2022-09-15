/*
 * Assignment 2
 * Course: CE1004-A
 * Name: ÁÂËÈéº
 * Student ID: 108502516
 */
package hello;
import java.util.Scanner;

public class A2_108502516 {

	public static void main(String[] args) {
		//input the height and the symbols
		Scanner input = new Scanner(System.in);
		int height = input.nextInt();
		String symbols = input.next();
		char symbol1 = symbols.charAt(0);
		char symbol2 = symbols.charAt(1);
		int temp1 = height,temp2 = 0;

		for(int i=1;i<height;i++)
		{
			for(int x=1;x<temp1;x++)
			{
				System.out.print(" ");
			}
			temp1--;
			System.out.print(symbol1);
			for(int x=0;x<temp2;x++)
			{
				System.out.print(symbol2);
			}
			temp2+=2;
			System.out.println(symbol1);
		}	

		for(int i=0;i<height*2;i++)
			System.out.print(symbol1);
		System.out.print("\n");
		
		input.close();
	}
}
