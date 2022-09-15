/*
*   Practice 10
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class int_vector{
public:
  int_vector(int Size)
  {
    Vsize = Size;
  }

  friend ostream &operator<< (ostream &output, const int_vector &vec)
  {
    output << "[";
    for(int i=0;i<vec.Vsize;i++)
    {
      if(i<vec.Vsize-1)
        output << vec.v[i] << ", ";
      else
        output << vec.v[i];
    }
    output << "]";
    return output;
  }

  friend istream &operator>> (istream &input, int_vector &vec)
  {
    int x;
    input >> x;
    vec.v.push_back(x);
    return input;
  }

  friend void operator+= (int_vector &vec1, int_vector &vec2)
  {
    int x,y,z=0;
    vec1.Vsize=vec2.Vsize + vec1.Vsize;
    for(int i=0;i<vec2.Vsize;i++)
    {
      x=vec2.v[i];
      vec1.v.push_back(x);
    }

    z=vec1.Vsize;
    for(int i=0;i<z;i++)
    {
      int j=0;
      for(int a=1;a<z-i;a++)
      {
        if(vec1.v[i]>vec1.v[i+a])
        {
            j=vec1.v[i];
            vec1.v[i]=vec1.v[i+a];
            vec1.v[i+a]=j;
        }
      }
    }
  }

private:
  int Vsize;
  vector<int> v;
};

int main()
{
  int s1,s2,IP;
  cin >> s1;
  int_vector v1(s1);
  cin >> s2;
  int_vector v2(s2);

  for (int i = 0; i < s1; i++)
  {
    cin >> v1;
  }
  for (int i = 0; i < s2; i++)
  {
    cin >> v2;
  }

  cout << v1 << endl;
  cout << v2 << endl;

  v1+=v2;

  cout << v1 << endl;
}
