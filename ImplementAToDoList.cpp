#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct todolist // struct keyword is used to create a custom data type with different variables
{
	int ID; // task number
	string task; // task name
	bool complete; // if complete
};

void myListBanner() // banner display
{
	cout << "_________________________" << endl;
	cout << "\t My List" << endl;
	cout << "_________________________" << endl;
}

void addTask()
{
	//clears screen and prints banner
	system("cls");
	myListBanner(); 
	int ID = 0;
	todolist todo; // creating a variable of todolist type
	cout << "Enter a new task: " << endl;
	cin.get(); // gets input of a single character
	getline(cin, todo.task); // gets input of a whole line
	char save; // y or n input for saving
	cout << "Save task? (y/n)" << endl; // prompts user to save task or not
	cin >> save;
	if (save == 'y')
	{
		ID++;
		ofstream fout; // write data to a file (output file stream)
		fout.open("todo.txt"); // fout is a variable to output data to an ofstream file
		fout << "\n" << ID; 
		fout << "\n" << todo.task;
		cout << "Task saved" << endl;
		fout.close(); // closes the file

		char more; // y or n input for adding another task
		cout << "Add another task? (y/n)" << endl; // prompts user to add another task
		cin >> more;
		if (more == 'y')
		{
			addTask();
		}
		else
		{
			system("cls");
			cout << "Added Succesfully" << endl;
			return;
		}
	}
	else
	{
		cout << "Task not saved" << endl;
	}
}

int searchTasks()
{
	system("cls");
	myListBanner();
	int id;
	todolist todo;
	ifstream fin;
	fin.open("todo.txt"); // opens the file
	cout << "Enter the ID of the task you want to search: " << endl; // prompts user to enter task ID
	cin >> id;
	while (!fin.eof()) // while the end of the file has not been reached
	{
		fin >> todo.ID;
		fin.ignore();
		getline(fin, todo.task);
		if (todo.ID == id)
		{
			cout << "\t" << todo.ID << ". " << todo.task << endl;
			return id;
		}
	}
	fin.close(); // closes the file
}

void removeTask()
{
	system("cls");
	int ID = searchTasks(); // searches for task
	if (ID != 0)
	{
		char del;
		cout << "Delete task? (y/n)" << endl; // prompts user to delete task
		cin >> del;

		todolist todo;
		ofstream tempFile;
		tempFile.open("temp.txt"); // opens the file
		ifstream fin;
		fin.open("todo.txt");
		int index = 1;

		while (!fin.eof())
		{
			fin >> todo.ID;
			fin.ignore();
			getline(fin, todo.task);
		}
	// close the file and remove the original file
	fin.close();
	tempFile.close();
	remove("todo.txt");
	}
		cout << "Task deleted" << endl;
}

void showTasks()
{
	system("cls");
	myListBanner();
	todolist todo;
	ifstream fin;
	fin.open("todo.txt", ios::app); // all output operations are performed at the end of the file
	cout << "Tasks: " << endl;
	while (!fin.eof()) // while the end of the file (eof) is not reached
	{
		fin >> todo.ID;
		fin.ignore();
		getline(fin, todo.task);

		if (todo.task != "")
		{
			cout << "\t" << todo.ID << ". " << todo.task << endl;
		}
		else
		{
			cout << "\tEmpty!" << endl;
		}
	}
	fin.close();
	char exit;
	cout << "Exit? (y/n)" << endl;
	cin >> exit;
	if (exit != 'y')
	{
		showTasks();
	}
	system("cls");
}

int main()
{
	int choice;
	myListBanner();
		cout << "Choose what you want to do: " << endl;
		cout << "1. Add task" << endl;
		cout << "2. Search Tasks" << endl;
		cout << "3. Remove Task" << endl;
		cout << "4. Show Tasks" << endl;
		cin >> choice;

	switch (choice)
	{
		case 1:
		{
			cout << "Add Task" << endl;
			addTask();
			break;
		}

		case 2:
		{
			cout << "Search Task" << endl;
			searchTasks();
			break;
		}

		case 3:
		{
			cout << "Remove Tasks" << endl;
			removeTask();
			break;
		}

		case 4:
		{
			cout << "Show Tasks" << endl;
			showTasks();
			break;
		}

		default:
		cout << "Invalid choice" << endl;
		break;
	}

}
