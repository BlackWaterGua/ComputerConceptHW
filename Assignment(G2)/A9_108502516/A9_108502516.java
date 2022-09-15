/*
 * Assignment 9
 * Course: CE1004-A
 * Name: ÁÂËÈéº
 * Student ID: 108502516
 */
package javatest;

import java.util.ArrayList;
import java.util.Scanner;

public class A9_108502516 {

	public static void main(String[] args) {
		//Scanner
		Scanner input = new Scanner(System.in); 
		//input a line
		String line = input.nextLine();
		//split the line
		String[] temp = line.split(" ");
		//declare a int arraylist
		ArrayList<Integer> height = new ArrayList<Integer>();
		//put the numbers in the arraylist
		for(int i=0;i<temp.length;i++)
		{
			height.add(Integer.parseInt(temp[i]));
		}
		
		//declare a int to put biggest area number
		int Big = 0;
		//test every bar
		for(int i =0;i<height.size();i++)
		{
			//test every other bar
			for(int j=i;j<height.size();j++)
			{
				//the bigger one bar height
				int y = 0;
				if(height.get(i)>height.get(j))
				{
					y = height.get(j);
				}
				else
				{
					y = height.get(i);
				}
				//the length between two bar
				int x = j-i;
				//input the biggest value if we find a bigger one
				if(x*y>Big)
				{
					Big = x*y;
				}
			}
		}
		//print the result
		System.out.println(Big);
		//close input
		input.close();
	}

}
