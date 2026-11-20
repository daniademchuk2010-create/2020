//#include <iostream>
//using namespace std;
//
//
//
//float Diving(float a, float b)
//{
//	float res = 0;
//	if (b == 0)
//	{
//		/*cout << "Cant divide by zero" << endl;*/
//		throw exception();
//	}
//	if (b == 1)
//	{
//		throw 404;
//	}
//	if (b == 2)
//	{
//		throw "Cant divide by zero";
//	}
//	if (b == 3)
//	{
//		throw true;
//	}
//	else
//	{
//		res = a / b;
//		cout << "Result " << res << endl;
//		return res;
//	}
//}
//class PasswordInvalodException : public exception
//{
//public:
//	PasswordInvalodException(const char* message) : exception(message) {}
//};
//class SmallPasswordException : public exception
//{
//	int lenght;
//public:
//	void Message()
//	{
//		cout << what() << endl;
//		cout << " " << endl;
//
//	}
//	SmallPasswordException(const char* message, int lenght) :lenght(lenght), exception(message) {}
//};
//
//void ValidateLOgin(const char* login, const char* password)
//{
//	if (strlen(password) < 6)
//		throw SmallPasswordException(" Small password", strlen(password));
//
//     if(!islower(password[0]) || !isalpha(password[0]))
//		 throw  PasswordInvalodException("Password invalid ");
//
//	 if (!isupper(login[0]) || !isalpha(login[0]))
//		 throw exception ( "Incorrect");
//
//
//	 cout << "Loading..................." << endl;
//}
//
//
//
//
//
//class myArray
//{
//	int* arr;
//	int size;
//public:
//	myArray(int size = 20):size(size)
//	{
//		arr = new int[size] {};
//	}
//
//	void Print()const
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	int getElement(int index)
//	{
//		if (index >= 0 and index < size)
//			return arr[index];
//		else
//			throw out_of_range("index is lees than 0 or more than size");
//	}
//	void CheckLonght(int len)
//	{
//		if (len < 0)
//		{
//			throw length_error("Some lenght erorr");
//		}
//	}
//
//	void SetSize(int newSize)
//	{
//		if (newSize < 0)
//			throw invalid_argument("new size is lesss than 0");
//		else
//		{
//			int* temp = new int[newSize];
//				for (int i = 0; i < size && i < newSize; i++)
//				{
//					temp[i] = arr[i];
//				}
//				delete[]arr;
//				arr = temp;
//			size = newSize;
//		}
//
//
//	}
//};
//int main()
//{
//	char login[100];
//	char password[100];
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Enter login : "; cin >> login;
//			cout << "Enter password "; cin >> password;
//			try
//			{
//				ValidateLOgin(login, password);
//			}
//			catch (PasswordInvalodException ex)
//			{
//				cout << "Invalid.....do something" << endl;
//				cout << "First letter be small a-z, A-Z, 0-1" << endl;
//				cout << ex.what() << endl;
//			}
//			catch (SmallPasswordException ex)
//			{
//				ex.Message();
//			}
//			catch (exception ex)
//			{
//				cout << "General error" << endl;
//				cout << ex.what() << endl;
//			}
//			
//			catch (...)
//			{
//				cout << "Unknown exception" << endl;
//			}
//
//			
//		}
//	
//	////try catch throw
//	//float a, b;
//	//cout << "Enter numbers ";
//	//cin >> a >> b;
//	//try
//	//{
//	//	float res = Diving(a, b);
//	//	cout << "result in main" << res << endl;
//	//}
//	//catch (exception ex)
//	//{
//	//	cout << ex.what();
//	//}
//	//catch (int ex)
//	//{
//	//	cout << ex << endl;
//	//}
//	//catch (const char * ex)
//	//{
//	//	cout << ex << endl;
//	//}
//	//catch (bool ex)
//	//{
//	//	cout << "!!11!1" << endl;
//	//	cout << ex << endl;
//	//}
//	//catch (...)
//	//{
//	//	cout << "Dont understand" << endl;
//	//}
//
//
//
//}
//
