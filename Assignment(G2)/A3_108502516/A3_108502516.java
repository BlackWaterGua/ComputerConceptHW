/*
 * Assignment 3
 * Course: CE1004-A
 * Name: ÁÂËÈéº
 * Student ID: 108502516
 */
package hello;
import java.util.Scanner;

public class A3_108502516 {

	public static void main(String[] args) {
		
		//input line
		Scanner input = new Scanner(System.in);
		int[] arr = new int[200];
		String line = "";
		
		//input nums in arr and stop when u want
		while( !line.equals("STOP") )
		{
			line = input.nextLine();
			if(line.equals("STOP"))
				break;
			int i = 0, order = 0;
			String num = "";
			while( i < line.length() )
			{
				if( line.charAt(i) == ' ' )
				{
					arr[order] = Integer.parseInt(num);
					num = "";
					order++;
					i++;
				}
				else if(i == line.length()-1)
				{
					num += Character.toString( line.charAt(i) );
					arr[order] = Integer.parseInt(num);
					i++;
				}
				else
				{
					num += Character.toString( line.charAt(i) );
					i++;
				}
			}

			//arrange the array
			for(int z=0;z<arr.length-1;z++)
			{
				for(int x=0;x<arr.length-1-z;x++)
				{
					if(arr[x]==arr[x+1])
					{
						arr[x] = -1;
					}
					if(arr[x]<arr[x+1])
					{
						int a = arr[x];
						arr[x] = arr[x+1];
						arr[x+1] = a; 
					}
				}
			}
			//print the second element
			System.out.println(arr[1]);
			
			//clear arr
			arr = null;
			arr = new int[200];
		}
		
		input.close();
	}
}