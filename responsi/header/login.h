using namespace std;
class Login
{
private:
	string nim, password;
	bool akses = false;
	ofstream tulisAkses;

public:
	bool masuk();
	void simpan();
};
bool Login::masuk()
{
	cout << "Masukkan NIM      : ";
	cin >> nim;
	cout << "Masukkan password : ";
	cin >> password;
	if (nim == "2100018363")
	{
		if (password == "2100018363")
		{
			cout << "Login berhasil!" << endl;
			return akses = true;
		}
		else
		{
			cout << "Password salah!" << endl;
			return akses = false;
		}
	}
	else if (nim == "2100018360")
	{
		if (password == "2100018360")
		{
			cout << "Login berhasil!" << endl;
			return akses = true;
		}
		else
		{
			cout << "Password salah!" << endl;
			return akses = false;
		}
	}
	else if (nim == "2100018358")
	{
		if (password == "2100018358")
		{
			cout << "Login berhasil!" << endl;
			return akses = true;
		}
		else
		{
			cout << "Password salah!" << endl;
			return akses = false;
		}
	}
	else
	{
		cout << "NIM salah!" << endl;
		return akses = false;
	}
}

void Login::simpan()
{
	tulisAkses.open("data/akses.txt", ios::trunc);
	tulisAkses << akses;
	tulisAkses.close();
}