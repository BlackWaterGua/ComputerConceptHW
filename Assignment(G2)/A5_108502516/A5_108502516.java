/*
 * Assignment 5
 * Course: CE1004-A
 * Name: ¡¬À»È∫
 * Student ID: 108502516
 */
package hello;
import hello.Transaction;
import java.util.Scanner;
import java.util.ArrayList;

public class A5_108502516 {

	public static void main(String[] args) {

		//Scanner
		Scanner input = new Scanner(System.in);
		
		//initial work num
		int work = 999;
		
		//declare Transaction arrayList
		ArrayList<Transaction> List = new ArrayList<Transaction>();
		
		//num of elements in array
		int num = 0;
		
		//total money
		int total = 0;
		
		//a loop stop when input 4
		while(work!=4)
		{
			//input
			work = Integer.parseInt( input.nextLine() );
			
			//declare Transaction of income and pay 
			Transaction income = null;
			Transaction pay = null;
			
			//input new income
			if(work==1)
			{
				//input data
				String data = input.nextLine();
				
				//add new income Transaction to arrayList
				String arr[] = data.split(" ");
				String Name = arr[0];
				int Income = Integer.parseInt(arr[1]);
				income = new Transaction(Name);
				income.setIncome(Income);
				income.setPay(0);
				List.add(income);
				
				//count arrayList's length
				num++;
			}
			
			//input new pay
			else if(work==2)
			{
				//input data
				String data = input.nextLine();
				
				//add new pay Transaction to arrayList
				String arr[] = data.split(" ");
				String Name = arr[0];
				int Pay = Integer.parseInt(arr[1]);
				pay = new Transaction(Name);
				pay.setIncome(0);
				pay.setPay(Pay);
				List.add(pay);
				
				//count arrayList's length
				num++;
			}
			
			//display all data
			else if(work==3)
			{
				//find longest name
				int nameLength = List.get(0).getName().length();
				for(int i=1;i<num;i++)
				{
					if(nameLength<List.get(i).getName().length())
					{
						nameLength = List.get(i).getName().length();
					}
				}
				
				//find longest income number
				int incomeLength = Integer.toString( List.get(0).getIncome() ).length();
				for(int i=1;i<num;i++)
				{
					if(incomeLength<Integer.toString( List.get(i).getIncome() ).length())
					{
						incomeLength = Integer.toString( List.get(i).getIncome() ).length();
					}
				}
				
				//print the Transaction table
				for(int i=0;i<num;i++)
				{
					System.out.print( List.get(i).getName() );
					for(int x=List.get(i).getName().length();x<nameLength;x++)
					{
						System.out.print(" ");
					}
					System.out.print( "  " + List.get(i).getIncome() );
					for(int x=Integer.toString( List.get(i).getIncome() ).length();x<incomeLength;x++)
					{
						System.out.print(" ");
					}
					System.out.println( "  " + List.get(i).getPay() );
				}
				
				//count the total
				for(int i=0;i<num;i++)
				{
					total += List.get(i).getIncome();
				}
				for(int i=0;i<num;i++)
				{
					total -= List.get(i).getPay();
				}
				
				//print total
				System.out.println("Total: " + total);
			}
			
			//stop programming
			else if(work==4)
			{
				break;
			}
			
			//display wrong input
			else
			{
				System.out.println("Invalid Operation");
			}
			
		}
		
		//close input
		input.close();
	}
}
