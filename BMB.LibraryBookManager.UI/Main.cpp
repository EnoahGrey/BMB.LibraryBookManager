#include <string>
#include <iostream>
using namespace std;

// Creating structure variable LibraryBooks
struct LibraryBooks {
	string strBookTitle;
	string strAuthorName;
	int intPublishedYear;
	int intNumPages;
};

void PrintBookDetails(LibraryBooks BookInfo) {
	cout << BookInfo.strBookTitle << "\n";
	cout << BookInfo.strAuthorName << "\n";
	cout << BookInfo.intPublishedYear << "\n";
	cout << BookInfo.intNumPages << "\n";
	cout << "\n";
}

int main() {
	LibraryBooks BookInventory[4];
	BookInventory[0] = { "Squirrled Away", "Billy Bob", 2000, 400};
	BookInventory[1] = { "Enchanted Evening", "Sally Sue", 2002, 342};
	BookInventory[2] = { "Propaganda", "Jimmy Kricket", 2004, 567 };
	BookInventory[3] = { "NXT", "H.P. Lovecraft", 2006, 491 };

	for (int i = 0; i < 4; i++) {
		PrintBookDetails(BookInventory[i]);
	}

	int intBookSelect;
	cout << "Please select the book ID you would like to edit (e.g. 0 = First, 3 = Last) : ";
	cin >> intBookSelect;

	if (intBookSelect <= 3 && intBookSelect >= 0) {
		PrintBookDetails(BookInventory[intBookSelect]);
		LibraryBooks TempBookRecord;
		cout << "Please edit the book Title: ";
		cin >> TempBookRecord.strBookTitle;
		cout << "Please edit the book Author: ";
		cin >> TempBookRecord.strAuthorName;
		cout << "Please edit the book Published Year: ";
		cin >> TempBookRecord.intPublishedYear;
		cout << "Please edit the book's number of pages): ";
		cin >> TempBookRecord.intNumPages;

		PrintBookDetails(TempBookRecord);
		cout << "Do you want to save these changes?: Y/N ";
		string X;
		cin >> X;

		if (X == "Y" || X == "y") {
			BookInventory[intBookSelect] = TempBookRecord;
			for (int i = 0; i < 4; i++) {
				PrintBookDetails(BookInventory[i]);
				cout << "Updated.";
			}
		}
		else {
			for (int i = 0; i < 4; i++) {
				PrintBookDetails(BookInventory[i]);
				cout << "No changes made.";
			}
		}
	}
	else {
		cout << "Your selection does not exist in this Library.";
	}
}
	




