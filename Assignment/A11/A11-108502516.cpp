/*
*   Assignment 11
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
//C:/Users/西瓜/Desktop/計算機der作業/Assignment/A11/sudo1.txt
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main()
{
  char TF='Y';
  vector<string> tmp(9);
  string GetPath;
  cin >> GetPath;
  ifstream InFile(GetPath.c_str() ,ios::in);
  if(!InFile)
    cout << "File could not be opened" << endl;
  else
  {
    int i = 0;
    while(getline(InFile,tmp[i]))
    {
      i++;
    }
  }

//同一列同數字判定
  for(int i=0;i<9;i++)
  {
    if(TF=='N')
      break;
    else
    {
      for(int j=0;j<18;j+=2)
      {
        if(TF=='N')
          break;
        else
        {
          for(int z=0;z<18;z+=2)
          {
            if(z==j)
              NULL;
            else if(tmp[i][j]==tmp[i][z])
            {
              TF='N';
              break;
            }
            else
              TF='Y';
          }
        }
      }
    }
  }

//同一行同數字判定
  if(TF!='N')
  {
    for(int i=0;i<18;i+=2)
    {
      if(TF=='N')
      break;
      else
      {
        for(int j=0;j<9;j++)
        {
          if(TF=='N')
          break;
          else
          {
            for(int z=0;z<9;z++)
            {
              if(z==j)
              NULL;
              else if(tmp[j][i]==tmp[z][i])
              {
                TF='N';
                break;
              }
              else
                TF='Y';
            }
          }
        }
      }
    }
  }

//製作九宮格的陣列
  vector<string> block(9);
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<6;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[0].push_back(x);
    }
  }

  for(int i=0;i<3;i++)
  {
    for(int j=6;j<12;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[1].push_back(x);
    }
  }

  for(int i=0;i<3;i++)
  {
    for(int j=12;j<18;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[2].push_back(x);
    }
  }

  for(int i=3;i<6;i++)
  {
    for(int j=0;j<6;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[3].push_back(x);
    }
  }

  for(int i=3;i<6;i++)
  {
    for(int j=6;j<12;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[4].push_back(x);
    }
  }

  for(int i=3;i<6;i++)
  {
    for(int j=12;j<18;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[5].push_back(x);
    }
  }

  for(int i=6;i<9;i++)
  {
    for(int j=0;j<6;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[6].push_back(x);
    }
  }

  for(int i=6;i<9;i++)
  {
    for(int j=6;j<12;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[7].push_back(x);
    }
  }

  for(int i=6;i<9;i++)
  {
    for(int j=12;j<18;j+=2)
    {
      char x;
      x=tmp[i][j];
      block[8].push_back(x);
    }
  }

//使用九宮格的陣列檢查九宮格
  if(TF!='N')
  {
  for(int i=0;i<9;i++)
  {
    if(TF=='N')
      break;
    else
    {
      for(int j=0;j<9;j++)
      {
        if(TF=='N')
          break;
        else
        {
          for(int z=0;z<9;z++)
          {
            if(z==j)
              NULL;
            else if(block[i][j]==block[i][z])
            {
              TF='N';
              break;
            }
            else
              TF='Y';
          }
        }
      }
    }
  }
  }

  cout << TF << endl;
}
