#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "	";
		}

		cout << endl<<endl;
	}
	

	cout << "eded daxil edin - ";
	int num4;
	cin >> num4;
	for (int i = 0; i < num4; i++)
	{
		for (int j = 0; j < num4; j++)
		{
			if (i == 0 || i == num4 - 1)
				cout << "*";
			else if (j == 0 || j == num4 - 1)
				cout << "*";
			else if (i < num4 / 3 - 1 && j < num4 / 3 - 1)
				cout << "*";
			else if (i < num4 / 3 - 1 && j > num4 - num4 / 3)
				cout << "*";
			else if (i > num4 - num4 / 3 && j < num4 / 3 - 1)
				cout << "*";
			else if (i > num4 - num4 / 3 && j > num4 - num4 / 3)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	cout << endl << endl;


	cout << "eded daxil edin - ";
	int num5;
	cin >> num5;
	for (int i = 0; i < num5; i++)
	{
		for (int j = 0; j < num5; j++)
		{
			if (i == num5 - j)
				cout << "*";
			else
				cout << " ";

		}
		for (int j = 0; j < num5; j++)
		{
			if (i == j)
				cout << "*";
			else
				cout << " ";

		}
		
		cout << endl;
	}
	for (int i = 0; i < num5*2+1; i++)
	{
		cout << "*";
	}
	cout << endl << endl;




	cout << "eded daxil edin - ";
	int num6;
	cin >> num6;
	for (int i = 0; i < num6; i++)
	{
		for (int j = 0; j < num6; j++)
		{
			if (i >= num6 - j)
				cout << "*";
			else
				cout << " ";

		}
		for (int j = 0; j < num6; j++)
		{
			if (i >= j)
				cout << "*";
			else
				cout << " ";

		}

		cout << endl;
	}
	cout << endl << endl;


	cout << "eded daxil edin - ";
	int num7;
	cin >> num7;
	for (int i = 0; i < num7; i++)
	{
		for (int j = 0; j < num7; j++)
		{
			if (i == num7 - j)
				cout << "*";
			else
				cout << " ";

		}
		for (int j = 0; j < num7; j++)
		{
			if (i == j)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	for (int i = 0; i < num7+2; i++)
	{
		for (int j = 0; j < num7; j++)
		{
			if (i == j)
				cout << "*";
			else
				cout << " ";

		}

		for (int j = 0; j < num7+2; j++)
		{
			if (i == num7 - j)
				cout << "*";
			else
				cout << " ";

		}
		
		cout << endl;
	}
	cout << endl << endl;

	cout << "eded daxil edin - ";
	int num8;
	cin >> num8;
	for (int i = 0; i < num8; i++)
	{
		for (int j = 0; j < num8; j++)
		{
			if (i >= num8 - j)
				cout << "*";
			else
				cout << " ";

		}
		for (int j = 0; j < num8; j++)
		{
			if (i >= j)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	for (int i = 0; i < num8 + 2; i++)
	{
		for (int j = 0; j < num8; j++)
		{
			if (i <= j)
				cout << "*";
			else
				cout << " ";

		}

		for (int j = 0; j < num8 + 2; j++)
		{
			if (i <= num8 - j)
				cout << "*";
			else
				cout << " ";

		}

		cout << endl;
	}
	cout << endl << endl;


	cout << "eded daxil edin - ";
	int num9;
	cin >> num9;
	for (int i = 0; i < num9+2 ; i++)
	{
		for (int j = 0; j < num9+2; j++)
		{
			if (j == 0)
				cout << " ";
			if (i >= j)
				cout << "*";
			else
				cout << " ";


		}
		cout << "*";
		for (int j = 0; j < num9+1; j++)
		{
			if (i >= num9 - j)
				cout << "*";
			else
				cout << " ";

		}

		cout << endl;
	}
	for (int i = 0; i < num9+2; i++)
	{
		for (int j = 0; j < num9+2; j++)
		{
			if (j == 0 )
				cout << " ";
			if (i <= num9 - j)
				cout << "*";
			else
				cout << " ";

		}
		cout << "*";
		for (int j = 0; j < num9+1; j++)
		{
			if (i <= j)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	
	cout << endl << endl;



	cout << "eded daxil edin - ";
	int num10;
	cin >> num10;
	for (int i = 1; i <= num10; i++)
	{
		for (int j = 1; j <= num10; j++)
		{
			(j+i) % 2 == 0 && cout << (char)219||cout<<" ";
		}
		
		cout << endl;
	}
}

