/*
*   Assignment 9
*   Name: 謝侒暻
*   Student Number: 108502516
*   Course: 2019-CE1003-A
*/
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Book{

public:
  Book(string Name,string Isbn,vector<string>CONTENT)
  {
    NAME = Name;
    ISBN = Isbn;
    Content = CONTENT;
  }

  string getName();
  string getISBN();
  string getContent(int);
  void addPage(string);

private:
  string NAME;
  string ISBN;
  vector<string> Content;
};

string Book::getName()
{
  return NAME;
}

string Book::getISBN()
{
  return ISBN;
}

string Book::getContent(int N)
{
  if(N<Content.size())
    return Content[N];
  else
    return "Error";
}

void Book::addPage(string SENTENCE)
{
  Content.push_back(SENTENCE);
}

class BookShelf{
public:
  BookShelf()
  {

  }

  void addBook(Book);
  void showBookShelf();

private:
  vector<Book> Shelf;
};

void BookShelf::addBook(Book MYBook)
{
  Shelf.push_back(MYBook);
}

void BookShelf::showBookShelf()
{
  for(int i=0;i<Shelf.size();i++)
  {
    cout << i << " " << Shelf[i].getName() << " " << Shelf[i].getISBN() << endl;
  }
}
