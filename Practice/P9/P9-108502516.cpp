/*
*   Practice 9
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
//C:/Users/西瓜/Desktop/計算機der作業/Practice/P9/OXgame1.txt
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  //getin files
  vector<string> tmp(5);
  string GetPath;
  cin >> GetPath;
  ifstream InFile(GetPath.c_str() ,ios::in);
  if(!InFile)
    cout << "File could not be opened" << endl;
  else
  {
    for(int i=0;i<5;i++)
    {
    getline(InFile,tmp[i]);
    }
    InFile.close();
  }

  //add " " on vector
  for(int i=2;i<=4;i++)
  {
    for(int j=0;j<=2;j++)
    {
      if(tmp[i][j]==NULL)
        tmp[i].push_back('1');
    }
  }

  //player's name
  string name1, name2;
  int j = 0;
  while(tmp[0][j]!=':')
  {
    name1.push_back(tmp[0][j]);
    j++;
  }
  j=0;
  while(tmp[1][j]!=':')
  {
    name2.push_back(tmp[1][j]);
    j++;
  }

  //players of OX
  string ChO, ChX;
  for(int a=0;a<tmp[0].size();a++)
  {
    if(tmp[0][a]=='O')
    {
      ChO=name1;
      ChX=name2;
    }
    else
    {
      ChO=name2;
      ChX=name1;
    }
  }

  //gameend
  int Gameend=0;

  //cheat
  int OCount=0, XCount=0;
  for(int b=0;b<5;b++)
  {
    for(int c=0;c<tmp[b].size();c++)
    {
      if(tmp[b][c]=='O')
        OCount++;
    }
    for(int d=0;d<tmp[b].size();d++)
    {
      if(tmp[b][d]=='X')
        XCount++;
    }
  }
  XCount=XCount-1;
  OCount=OCount-1;
  if(XCount-OCount>=2||OCount-XCount>=2)
  {
    if(XCount-OCount>=2)
      cout << ChX << ' ' << "cheated" << endl;
    if(OCount-XCount>=2)
      cout << ChO << ' ' << "cheated" << endl;
  }

  else
  {
    //win
    for(int i=0;i<3;i++)
    {
      if((tmp[2][i]==tmp[4][2-i]&&tmp[2][i]==tmp[3][1])||(tmp[3][0]==tmp[3][2]&&tmp[3][0]==tmp[3][1]))
      {
          if(tmp[3][1]=='O')
            cout << ChO << ' ' << "win" <<endl;
            Gameend = 1;
            break;
          if(tmp[3][1]=='X')
            cout << ChX << ' ' << "win" <<endl;
            Gameend = 1;
            break;
      }
    }
    if((tmp[2][0]==tmp[3][0]&&tmp[2][0]==tmp[4][0])||(tmp[2][0]==tmp[2][2]&&tmp[2][0]==tmp[2][1]))
    {
        if(tmp[2][0]=='O')
          cout << ChO << ' ' << "win" <<endl;
          Gameend = 1;
        if(tmp[2][0]=='X')
          cout << ChX << ' ' << "win" <<endl;
          Gameend = 1;
    }
    if((tmp[2][2]==tmp[3][2]&&tmp[2][2]==tmp[4][2])||(tmp[4][0]==tmp[4][2]&&tmp[4][0]==tmp[4][1]))
    {
        if(tmp[4][2]=='O')
          cout << ChO << ' ' << "win" <<endl;
          Gameend = 1;
        if(tmp[4][2]=='X')
          cout << ChX << ' ' << "win" <<endl;
          Gameend = 1;
    }

    //draw, not over
    for(int i=2;i<=4;i++)
    {
      if(Gameend==1)
        break;
      for(int j=0;j<=2;j++)
      {
        //cout<<tmp[i][j]<<endl;
        if(tmp[i][j]=='1'&&Gameend!=1)
        {
            cout << "Not over yet." << endl;
            Gameend=1;
            break;
        }
        else if(i==4&&j==2&&Gameend!=1)
        {
          cout << "Game ended in a draw." << endl;
          Gameend=1;
        }
      }
    }
  }
}
