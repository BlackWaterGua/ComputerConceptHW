/*
 * Assignment 8
 * Course: CE1004-A
 * Name: ¡¬À»È∫
 * Student ID: 108502516
 */
package javatest;

import java.util.ArrayList;
import java.util.Scanner;

public class A8_108502516 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		//input row, column, and number of centers
		String cin = input.nextLine();
		String[] data = cin.split(" ");
		int row = Integer.parseInt(data[0]);
		int column = Integer.parseInt(data[1]);
		int centerNum = Integer.parseInt(data[2]);
		
		//declare form
		char[][] form = new char[row][column];
		
		//input form
		for(int i=0;i<row;i++)
		{
			String line = input.nextLine();
			char[] rowData = line.toCharArray();
			for(int x=0;x<rowData.length;x++)
			{
				form[i][x] = rowData[x];
			}
		}
		
		//set a center point array
		ArrayList<String> center= new ArrayList<String>();
		for(int i=0;i<centerNum;i++)
		{
			String cenerLine = input.nextLine();
			center.add(cenerLine);
		}
		
		//find max square length
		Integer maxLength = 0;
		if(row>column)
			maxLength = column;
		else
			maxLength = row;
		
		//the square length of center array
		ArrayList<Integer> centerLength= new ArrayList<Integer>();
		for(int i=0;i<center.size();i++)
		{
			String[] centerData = center.get(i).split(" ");
			Integer rowIndex = Integer.parseInt(centerData[0]);
			Integer columnIndex = Integer.parseInt(centerData[1]);
			
			//the radius of center
			Integer length = 1;
			//continue judgements
			char Continue = 't';
			for(int a=0;a<maxLength;a++)
			{
				//out of index judge
				if(rowIndex+length>=row||rowIndex-length<0||columnIndex+length>=column||columnIndex-length<0)
				{
					Continue = 'f';
					break;
				}
				//start judge from the up of the square
				for(int b=rowIndex-length;b<rowIndex+length;b++)
				{
					if(Continue=='f')
						break;
					//start judge from left of the square
					for(int c=columnIndex-length;c<columnIndex+length;c++)
					{
						//compare with right element
						if(form[b][c]==form[b][c+1]) 
						{
							//compare with down element
							if(form[b][c]==form[b+1][c]) 
							{
								//compare the element in right down corner
								if(form[rowIndex+length][columnIndex+length]==form[rowIndex+length][columnIndex+length-1])
									continue;
								else
								{
									Continue = 'f';
									break;
								}
							}
							else
							{
								Continue = 'f';
								break;
							}
						}
						else
						{
							Continue = 'f';
							break;
						}
					}
				}
				//if all elements in square are same radius++
				if(Continue=='t')
					length+=1;
			}
			//input the square length in array
			centerLength.add(2*length-1);
			length=1;
		}
		
		//print all length of square
		for(int i=0;i<centerLength.size();i++)
			System.out.println(centerLength.get(i));
		
		//close input
		input.close();
	}

}
