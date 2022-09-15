/*
 * Assignment 7
 * Course: CE1004-A
 * Name: ÁÂËÈéº
 * Student ID: 108502516
 */
package javatest;

import java.util.Scanner;

public class A7_108502516 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		//input cola's quantity
		String cola = input.next();
		int colaNum = Integer.parseInt(cola);
		
		//input 1 dollar's quantity
		String one = input.next();
		int oneNum = Integer.parseInt(one);
				
		//input 5 dollar's quantity
		String five = input.next();
		int fiveNum = Integer.parseInt(five);
				
		//input 10 dollar's quantity
		String ten = input.next();
		int tenNum = Integer.parseInt(ten);
		
		//variable used for counting coins
		int count = 0;
		
		//counting loot
		while(colaNum>0)
		{
			//when cola's number = 0, break
			if(colaNum==0)
			{
				break;
			}
			//when use 10 dollar, get one 5 dollar and two 1 dollar
			else if(tenNum>0)
			{
				tenNum -= 1;
				fiveNum += 1;
				oneNum = oneNum + 2;
				
				colaNum -= 1;
				count += 1;	
			}
			//when use 5 dollar, get two 1 dollar
			else if(fiveNum>0)
			{
				fiveNum -= 1;
				oneNum = oneNum + 2;
				
				colaNum -= 1;
				count += 1;
			}
			//when use three 1 dollar, no change
			else if(oneNum>=3)
			{
				oneNum -= 3;
				
				colaNum -= 1;
				count += 3;
			}
		}
		
		//output coins
		System.out.println(count);
		
		//close input
		input.close();
	}

}
