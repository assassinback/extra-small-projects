#include "dictionary.h"
dictionary::dictionary()
{

}
dictionary::dictionary(string x)
{
	
	fstream c;
	std::string line;
	int counter = 2;
	dictionary* cur = root;
	dictionary* cur1 = root;
	c.open("data.txt");
	while (getline(c, line))
	{
		if (counter == 3)
		{
			root->meaning = line;
			counter = 0;
			continue;
		}
		if (root == NULL)
		{
			root = new dictionary();
			root->left = NULL;
			root->right = NULL;
			root->word = line;
			counter++;
			continue;
		}
		else if (root != NULL && (counter == 0 || counter == 1))
		{
			if (counter==0)
			cur = root;
			while (cur != NULL)
			{

				if (counter == 0)
				{
					if (line > cur->word)
					{
						if (cur->right == NULL)
						{
							dictionary* obj = new dictionary();
							obj->left = NULL;
							obj->right = NULL;
							obj->word = line;
							cur->right = obj;
							cur = cur->right;
							counter = 1;
							break;
						}
						cur = cur->right;
					}
					if (line < cur->word)
					{
						if (cur->left == NULL)
						{
							dictionary* obj = new dictionary();
							obj->left = NULL;
							obj->right = NULL;
							obj->word = line;
							cur->left = obj;
							cur = cur->left;
							counter = 1;
							break;
						}
						cur = cur->left;
					}
				}
				if (counter == 1)
				{
					cur->meaning = line;
					counter = 0;
					break;
				}
			}

		}
	}
	c.close();
}
void dictionary::insert(System::String^ x, System::String^ y)
{
	try
	{
		std::string a = msclr::interop::marshal_as<std::string>(x);
		std::string b = msclr::interop::marshal_as<std::string>(y);
		dictionary* z = root;
		dictionary* h = new dictionary();
		h->word = a;
		h->meaning = b;
		h->left = NULL;
		h->right = NULL;
		while (z != NULL)
		{
			if (root == NULL)
			{
				z = h;
			}
			else
			{
				if (z->word < a)
				{
					if (z->right == NULL)
					{
						z->right = h;
						break;
					}
					z = z->right;
				}
				else if (z->word > a)
				{
					if (z->left == NULL)
					{
						z->left = h;
						break;
					}
					z = z->left;
				}
			}
		}
		std::ofstream ofs;
		ofs.open("data.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
			dictionary* p = root;
			ins(p);
		}
	catch (exception x)
	{
		System::String^ str3 = gcnew System::String(x.what());
		MessageBox::Show(str3);
		system("pause");
	}
}
	void dictionary::ins(dictionary* cur)
	{
		fstream x("data.txt", std::ios_base::app);
		if (cur != NULL)
		{
			x << cur->word << "\n" << cur->meaning << "\n";
			ins(cur->left);
			ins(cur->right);
		}
		else{
			return;
		}
	}
	void dictionary::search(System::String^ x, Label^ y)
	{
		std::string a = msclr::interop::marshal_as<std::string>(x);
		dictionary* cur = root;
		while (cur != NULL)
		{
			if (cur->word > a)
			{
				cur = cur->left;
			}
			else if (cur->word < a)
			{
				cur = cur->right;
			}
			else
			{
				System::String^ b = gcnew System::String(cur->meaning.c_str());
				y->Text = b;
				break;
			}
		}
	}
	void dictionary::makedeletion(dictionary *&cur)
	{
		
		dictionary *temp = new dictionary();
		if (cur == NULL){
			cout << "Empty Node";
			return;
		}

		else if (cur->right == NULL){
			temp = cur;
			cur = cur->left;
			delete(temp);
			std::ofstream ofs;
			ofs.open("data.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			ins(root);
			return;
		}
		else if (cur->left == NULL){
			temp = cur;
			temp = cur->right;
			delete(temp);
			std::ofstream ofs;
			ofs.open("data.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			ins(root);
			return;
		}

		else{
			temp = cur->right;
			while (temp->left != NULL){
				temp = temp->left;
			}

			temp->left = cur->left;
			temp = cur;
			cur = cur->right;
			delete(temp);
			std::ofstream ofs;
			ofs.open("data.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			ins(root);
			return;
		}
	}
	void dictionary::deletenode(dictionary *&cur, string n)
	{
		if (cur->word>n){
			deletenode(cur->left, n);
		}
		else if (n>cur->word){
			deletenode(cur->right, n);
		}
		else
			makedeletion(cur);
		    return;
	}

