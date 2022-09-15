/*
 * Assignment 1
 * Course: CE1004-A
 * Name: ÁÂËÈéº
 * Student ID: 108502516
 */
package hello;
import java.util.Scanner;

public class A1_108502516 {

	public static void main(String[] args) 
	{
		//input 3 scores
		Scanner input = new Scanner(System.in);
		int score1 = input.nextInt();
		int score2 = input.nextInt();
		int score3 = input.nextInt();
		
		//calculate and print the average score
		int result = (score1 + score2 + score3)/3;
		System.out.println(result);
		//sort the result
		if(result >=90)
			result = 1;
		else if(result>=80)
			result = 2;
		else if(result>=70)
			result = 3;
		else if(result>=60)
			result = 4;
		else
			result = 5;
		
		//output the grade
		switch (result) {
		case 1:
			System.out.println("A");
			break;
		case 2:
			System.out.println("B");
			break;
		case 3:
			System.out.println("C");
			break;
		case 4:
			System.out.println("D");
			break;
		case 5:
			System.out.println("F");
			break;
		}
		
		//clear resourse
		input.close();
	}
}
