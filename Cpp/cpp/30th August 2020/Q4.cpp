//author, title, price, publisher and stock position

#include<iostream>

using namespace std;

int count = 0;

class Library{
	int price;
	string author;
	string title;
	string publisher;
	int stock_pos;

	void book_details(Library book)
	{
		cout << "********book detail*********"<<endl;
		cout << "Title\t\t\tAuthor name\t\t\tStock copy";
		cout<<book.title<<book.author<<book.stock_pos<<endl;
	}

	public:

	void view_book()
	{
		string Author, Title;
		cout << "Enter author name: ";
		getline(cin,Author);
		cout << " Title of book in small letter:";
		getline(cin,Title);
		for(int i=0;i<count;i++)
		{
			if((book[i].author==Author)&&(book[i].title==Title))
				{book_details();break;}


		}

		int required=0;
		cout<<"How many copies of this book is required: ?";
		cin>>required;
		cout<<"Total price: "<< book[i].price*required;


	}


}book[100];


int main()
{
	Library mainobj;
	mainobj.view_book();
	return 0;
}
