#include<iostream>
using namespace std;
struct bookdata
{
	int pages;
	float price;
	string bookname,author;
};
int main()
{
	int menu,i=1,bookcount=0;
	bookdata booksArr[1000];
	string searchauthor;
	
	do
	{
		cout<<"..Stationary Management System.."<<endl<<endl;
		cout<<"1. Add a new book information"<<endl<<"2. Display book information"<<endl<<"3. Display all books of given author"<<endl<<"4. Display the title of a specified book"<<endl<<"5. Display the bookcount in the library"<<endl<<"6. Exit"<<endl;
		
		cout<<"Enter one of the above please: ";
		cin>>menu;
		
		switch(menu)
		{
			case 1:
				cout<<endl;
				cout<<"Enter book name: ";
				cin>>booksArr[i].bookname;
				cout<<"Enter the author name: ";
				cin>>booksArr[i].author;
				cout<<"Enter the pages of the book: ";
				cin>>booksArr[i].pages;
				cout<<"Enter the price of the book: ";
				cin>>booksArr[i].price;
				cout<<endl;
				
				bookcount++;
				break;
			case 2:
				int booknum;
				
				cout<<endl<<"Enter the book number ";
				cin>>booknum;
				cout<<endl<<"Information of book number: "<<booknum<<" : "<<endl;
				cout<<"Book name: "<<booksArr[booknum].bookname<<endl;
				cout<<"Author Name: "<<booksArr[booknum].author<<endl;
				cout<<"Book pages: "<<booksArr[booknum].pages<<endl;
				cout<<"Book price: "<<booksArr[booknum].pages<<endl;
				break;
			case 3:
				cout<<"Enter author name: ";
				cin>>searchauthor;
				cout<<endl<<"Books of Author "<<searchauthor<<" are listed below: "<<endl;
				for(int j=0;j<i;j++)
				{
					if(searchauthor==booksArr[j].author)
					{
						cout<<booksArr[j].bookname<<" ";
					}
				}
				cout<<endl;
				break;
			case 4:
				cout<<endl<<"Enter the book number: ";
				cin>>booknum;
				cout<<"The title of book number "<<booknum<<": "<<booksArr[booknum].bookname<<endl<<endl;
				break;
			case 5:
				cout<<"The number of books in the library: "<<bookcount<<endl<<endl;
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Invalid choice. Please choose an option from 1-6."<<endl<<endl;
				break;
		}
		i++;
	}
	while(menu!=6);
}