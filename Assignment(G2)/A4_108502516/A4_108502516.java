/*
 * Assignment 4
 * Course: CE1004-A
 * Name: ¡¬À»È∫
 * Student ID: 108502516
 */
package hello;
import java.util.Scanner;
import java.util.Arrays;

public class A4_108502516 {

	public static void main(String[] args) {

		//Scanner
		Scanner input = new Scanner(System.in);
		
		//input the size of map
		String Size = input.nextLine();
		int size = Integer.parseInt(Size);
		
		//declare map array
		String[][] arr = new String[size+2][size+2];
		
		//replace null elements into 0
		for(int i=0;i<=size+1;i++)
			Arrays.fill(arr[i], "0");
		
		//input mine map into array
		for(int i=1;i<=size;i++)
		{
			String line = input.nextLine();
			for(int x=1;x<=line.length();x++)
			{
				arr[i][x] = Character.toString( line.charAt(x-1) );
			}
		}
		
		//judge the elements in array are mine or not
		for(int i=1;i<=size;i++)
		{
			for(int x=1;x<=size;x++)
			{
				//if the element is mine, skip
				if(arr[i][x].equals("*"))
				{
					continue;
				}
				
				//replace "_" into the number of mines around
				else if(arr[i][x].equals("_"))
				{
					int num = 0;
					for(int a=i-1;a<=i+1;a++)
					{
						for(int b=x-1;b<=x+1;b++)
						{
							if(arr[a][b].equals("*"))
								num++;
						}
					}
					arr[i][x] = Integer.toString(num);
				}
				
			}
		}
		
		//print array
		for(int i=1;i<=size;i++)
		{
			for(int x=1;x<=size;x++)
			{
				if(x==size)
					System.out.println(arr[i][x]);
				else
					System.out.print(arr[i][x]);
			}
		}
		
		//close input
		input.close();
	}

}
