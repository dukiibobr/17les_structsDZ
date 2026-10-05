#include <iostream>
#include <conio.h>
using namespace std;

//struct Film {
//	int id;
//	char name[50];
//	char director[50];
//	char genre[50];
//	float stars;
//	float price;
//};
//
//void showFilm(Film &film) {
//	cout << "id:" << film.id << endl;
//	cout << "name:" << film.name << endl;
//	cout << "director:" << film.director << endl;
//	cout << "genre:" << film.genre << endl;
//	cout << "stars:" << film.stars << endl;
//	cout << "price:" << film.price << endl;
//}
//
//void searchByName(char name[], Film* films, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		if (strcmp(films[i].name, name) == 0)
//		{
//			showFilm(films[i]);
//		}
//	}
//}
//
//void searchByDirector(char director[],Film *films,int size ) {
//	for (int i = 0; i < size; i++)
//	{
//		if (strcmp(films[i].director,director)==0)
//		{
//			showFilm(films[i]);
//		}
//	}
//}
//
//void searchByGenre(char genre[], Film* films, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		if (strcmp(films[i].genre, genre) == 0)
//		{
//			showFilm(films[i]);
//		}
//	}
//}
//
//void searchMostPopularByGenre(char genre[], Film* films, int size) {
//	float max=0;
//	int maxIndex = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (strcmp(films[i].genre, genre) == 0)
//		{
//			if (films[i].stars>max)
//			{
//				max = films[i].stars;
//				maxIndex = i;
//			}
//		}
//	}
//	showFilm(films[maxIndex]);
//}
//
//void changeFilm(Film *films,int size,int id) {
//	for (int i = 0; i < size; i++)
//	{
//		if (films[i].id==id)
//		{
//			showFilm(films[i]);
//
//			cout << "enter new rating:" << endl;
//			cin >> films[i].stars;
//			cout << "enter new price:" << endl;
//			cin >> films[i].price;
//		}
//	}
//}





//int main()
//{
//	int choice;
//	char name[50];
//
//	const int size = 6;
//	Film films[size] = {
//		{0, "Back to future","Tom Kruise", "Fantasy", 8.2, 102.99},
//		{1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0},
//		{2, "The Matrix", "Lana Wachowski", "Action", 8.7, 200.0},
//		{3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.6, 300.0},
//		{4, "The Godfather", "Francis Ford Coppola", "Crime", 9.2, 180.0},
//		{5, "Titanic", "James Cameron", "Drama", 7.9, 220.0}
//	};
//
//	do
//	{
//		system("cls");
//		cout << "======================Menu======================" << endl;
//		cout << "show all films				     [1]" << endl;
//		cout << "search by name				     [2]" << endl;
//		cout << "search by director			     [3]" << endl;
//		cout << "search by genre				     [4]" << endl;
//		cout << "most popular				     [5]" << endl;
//		cout << "change					     [6]" << endl;
//		cout << "exit					     [0]" << endl;
//		cin >> choice;
//		cin.ignore();
//
//		switch (choice) {
//		case 0:
//				cout << "end of program" << endl;
//				break;
//		case 1:
//			for (int i = 0; i < size; i++)
//			{
//				showFilm(films[i]);
//			}
//				break;
//		case 2:
//			cout << "enter name of the film: " << endl;
//			cin.getline(name, 50);
//			searchByName(name, films, size);
//				break;
//		case 3:
//			cout << "enter name of the director: " << endl;
//			cin.getline(name, 50);
//			searchByDirector(name, films, size);
//			break;
//		case 4:
//			cout << "enter genre: " << endl;
//			cin.getline(name, 50);
//			searchByGenre(name, films, size);
//			break;
//		case 5:
//			cout << "enter genre: " << endl;
//			cin.getline(name, 50);
//			searchMostPopularByGenre(name, films, size);
//		case 6:
//			int id;
//			cout << "enter id: " << endl;
//			cin >> id;
//			changeFilm(films, size, id);
//			break;
//		default:
//			cout << "wrong choice" << endl;
//			break;
//		}
//
//		if (choice != 0) {
//			cout << "Press any key to continue...";
//			_getch();
//		}
//
//	} while (choice!=0);
//	
//}

//2

struct Book {
	int id;
	char name[50];
	char author[50];
	char publisher[50];
	char genre[50];
	int creationYear;
	float price;
};

Book* addNewBook(Book* book, int& size, Book newBook) {
	Book* temp = new Book[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = book[i];
	}
	temp[size] = newBook;
	delete[]book;
	book = temp;
	(size)++;
	return book;
}

Book inputBook() {
	Book book;
	cout << "enter id: " << endl;
	cin >> book.id;
	cin.ignore();

	cout << "enter name: " << endl;
	cin.getline(book.name, 50);
	cout << "enter author: " << endl;
	cin.getline(book.author, 50);
	cout << "enter publisher: " << endl;
	cin.getline(book.publisher, 50);
	cout << "enter genre: " << endl;
	cin.getline(book.genre, 50);
	cout << "enter creationYear: " << endl;
	cin>>book.creationYear;
	cout << "enter price: " << endl;
	cin>>book.price;

	cin.ignore();

	return book;
}

void showBook(Book& book) {
	cout << "id:" << book.id << endl;
	cout << "name:" << book.name << endl;
	cout << "author:" << book.author << endl;
	cout << "publisher:" << book.publisher << endl;
	cout << "genre:" << book.genre << endl;
	cout << "creationYear:" << book.creationYear << endl;
	cout << "price:" << book.price << endl;
}

void searchByName(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].name, name) == 0)
		{
			showBook(books[i]);
		}
	}
}

void searchByAuthor(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].author, name) == 0)
		{
			showBook(books[i]);
		}
	}
}

void searchByPublisher(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].publisher, name) == 0)
		{
			showBook(books[i]);
		}
	}
}

void searchByGenre(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].genre, name) == 0)
		{
			showBook(books[i]);
		}
	}
}

void changeBook(Book* arr, int size, int id) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i].id == id)
		{
			showBook(arr[i]);
			cout << "enter new price:" << endl;
			cin >> arr[i].price;
		}
	}
}

Book* deleteBook(Book* arr, int& size, int id) {
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].id==id)
		{
			index = i;
			break;
		}
	}

	if (index==-1)
	{
		cout << "book not found" << endl;
		return arr;
	}

	Book* temp = new Book[size - 1];
	
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (i!=index)
		{
			temp[j] = arr[i];
			j++;
		}
	}
	delete[]arr;
	arr = temp;
	(size)--;
	return arr;
}

void main() {
	int choice;
	char name[50];

	int size = 10;
	Book* arr = new Book[10]{
		{0, "The Hobbit", "J", "H", "Fantasy", 1937, 102.99},
		{1, "1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 250.0},
		{2, "The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Classic", 1925, 200.0},
		{3, "Harry Potter", "J.K. Rowling", "Bloomsbury", "Fantasy", 1997, 300.0},
		{4, "The Da Vinci Code", "Dan Brown", "Doubleday", "Thriller", 2003, 180.0},
		{5, "The Alchemist", "Paulo Coelho", "HarperOne", "Adventure", 1988, 220.0},
		{6, "Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance", 1813, 150.0},
		{7, "The Lord of the Rings", "J.R.R. Tolkien", "Allen & Unwin", "Fantasy", 1954, 350.0},
		{8, "To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott", "Drama", 1960, 190.0},
		{9, "The Catcher in the Rye", "J.D. Salinger", "Little, Brown", "Classic", 1951, 170.0}
	};
	do
	{
		system("cls");
		cout << "======================Menu======================" << endl;
		cout << "show all books				     [1]" << endl;
		cout << "search by name				     [2]" << endl;
		cout << "search by author			     [3]" << endl;
		cout << "search by publisher			     [4]" << endl;
		cout << "search by genre				     [5]" << endl;
		cout << "change price 				     [6]" << endl;
		cout << "add new book 				     [7]" << endl;
		cout << "delete by id 				     [8]" << endl;
		cout << "exit					     [0]" << endl;
		cin >> choice;
		cin.ignore();

		switch (choice) {
		case 0:
			cout << "end of program" << endl;
			break;
		case 1:
			for (int i = 0; i < size; i++)
			{
				showBook(arr[i]);
			}
			break;
		case 2:
			cout << "enter name of the book: " << endl;
			cin.getline(name, 50);
			searchByName(name, arr, size);
			break;
		case 3:
			cout << "enter name of the author: " << endl;
			cin.getline(name, 50);
			searchByAuthor(name, arr, size);
			break;
		case 4:
			cout << "enter name of the publisher: " << endl;
			cin.getline(name, 50);
			searchByPublisher(name, arr, size);
			break;
		case 5:
			cout << "enter name of the genre: " << endl;
			cin.getline(name, 50);
			searchByGenre(name, arr, size);
			break;
		case 6:
			int id;
			cout << "enter id: " << endl;
			cin >> id;
			changeBook(arr, size, id);
			break;
		case 7:
		{
			Book newBook = inputBook();
			arr = addNewBook(arr, size, newBook);
			break;
		}
		case 8:
		{
			int id;
			cout << "enter id: " << endl;
			cin >> id;
			arr = deleteBook(arr, size, id);
			break;
		}

		default:
			cout << "wrong choice" << endl;
			break;
		}

		if (choice != 0) {
			cout << "Press any key to continue...";
			_getch();
		}

	} while (choice != 0);












}