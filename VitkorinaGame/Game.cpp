#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	string userName = "Name";
	int qwNam = 8;
	int colar = 92;
	int siklOP = 1;
	int siklQ = 1;
	int siklCo = 1;
	int round = 0;
	int lives = 3;
	int score = 0;
	string quest, ansA, ansB, ansC, ansD;
	char corAns, userAns;

	cout << "����� ����������! ���� ������ ��� � ����� ���������. \n";
	cout << "������� ����� ������ ��� �����������. \n\n";
	cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";
	cin >> quest;

	while (true) {

		int menuTr;
		siklCo = 1; siklQ = 1; siklOP = 1;

		system("cls");

		cout << "			[\x1b[" << colar << "m����\x1b[0m]\n\n";
		cout << "[\x1b[" << colar << "m1\x1b[0m]������ ����\n";
		cout << "[\x1b[" << colar << "m2\x1b[0m]���������\n";
		cout << "[\x1b[" << colar << "m3\x1b[0m]�������\n\n";
		cout << "[\x1b[" << colar << "m0\x1b[0m]�����\n\n";

		cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";
		cin >> menuTr;

		system("cls");

		switch (menuTr)
		{
		case 0: return 0;
			break;
		case 1:

			if (userName == "Name")
			{
				system("cls");

				cout << "					��������������! \n";
				cout << "���������� ������ ��� ������������ � ���-�� �������� � ���� ����� � ������������. \n";
				cout << "����������, ��������� ����������� ���������� � ����������, ����� ���� ������������! \n";
				cout << "��, ��, �� �������� ������������ � ���������! \n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";
				cin >> menuTr;
				break;

			}

			while ((round < qwNam) && (lives > 0))
			{
				system("cls");
				cout << "[\x1b[" << colar << "m����\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]�����: " << userName << " | �����: " << lives << " | ����: " << score << "\n\n";

				switch (round)
				{
				case 0:
					quest = "�� ����� ����� ��������������� �������� ��� ���������?";
					ansA = "Python";
					ansB = "C#";
					ansC = "Ruby";
					ansD = "C++";
					corAns = 'D';
					break;

				case 1:
					quest = "����������� - ��� ...";
					ansA = "��������� �������� ��������� � �� � ����� ���������� �� ������";
					ansB = "��������� �������� ��������� � �� � ����� ��������� ����������������� ���������";
					ansC = "�������������� ������������ ����";
					ansD = "������� ������� �����";
					corAns = 'A';
					break;


				case 2:
					quest = "������ ���� ������ �� ����������?";
					ansA = "��������";
					ansB = "����������";
					ansC = "���������";
					ansD = "���������";
					corAns = 'C';
					break;


				case 3:
					quest = "� ���� �� �������� �������� ��� ������?";
					ansA = "� �������� �������";
					ansB = "� �������� �����, ��� ��� ����� ��������";
					ansC = "� �������� ������";
					ansD = "� �������� �������";
					corAns = 'B';
					break;


				case 4:
					quest = "��� ����������� �������� � ����� ����� ���� � �++?";
					ansA = ";";
					ansB = "}";
					ansC = ".";
					ansD = ",";
					corAns = 'B';
					break;


				case 5:
					quest = "������������ �������, ����������� ����������� �����-���� �������������� ���������� - ���..";
					ansA = "Visual Studio";
					ansB = "1�";
					ansC = "����������� ������";
					ansD = "Cisco";
					corAns = 'C';
					break;


				case 6:
					quest = "������� ����� � 1 �����?";
					ansA = "4";
					ansB = "8";
					ansC = "16";
					ansD = "32";
					corAns = 'B';
					break;


				case 7:
					quest = "������� ���� � int?";
					ansA = "4";
					ansB = "8";
					ansC = "16";
					ansD = "32";
					corAns = 'A';
					break;


				case 8:
					quest = "��� ����� ���������?";
					ansA = "�����, ��� �������� ��� ����������";
					ansB = "���������-��������������� ��";
					ansC = "������� ������ ����������";
					ansD = "����������� ������ ����������";
					corAns = 'D';
					break;


				case 9:
					quest = "��� �������� ����� cout?";
					ansA = "<<";
					ansB = ">>";
					ansC = "=";
					ansD = ":";
					corAns = 'A';
					break;


				case 10:
					quest = "����� ������� ���������� ������ �� ������������?";
					ansA = "������";
					ansB = "����";
					ansC = "CD-�����";
					ansD = "������� ������� ����";
					corAns = 'B';
					break;


				case 11:
					quest = "��� ����� ������� ������������� �� �++ � �������� ����� 54?";
					ansA = "������ �.�.";
					ansB = "���������� �.�.";
					ansC = "����� �.�.";
					ansD = "������ �.�.";
					corAns = 'C';
					break;
				default: quest = ansA = ansB = ansC = ansD = "NULL"; corAns = 'A';
					break;
				}

				cout << "[\x1b[" << colar << "m" << round + 1 << "\x1b[0m]������: " << quest << endl;
				cout << "\n[\x1b[" << colar << "mA\x1b[0m]" << ansA << "\n[\x1b[" << colar << "mB\x1b[0m]" << ansB << endl;
				cout << "[\x1b[" << colar << "mC\x1b[0m]" << ansC << "\n[\x1b[" << colar << "mD\x1b[0m]" << ansD << endl;

				cout << "\n[\x1b[" << colar << "m+\x1b[0m]������� �����: _\b";
				cin >> userAns;

				if (userAns == corAns)
				{
					score++;
				}
				else
				{
					lives--;
				}

				round++;
			}

			system("cls");

			if (lives > 0)
			{
				cout << "			[\x1b[" << colar << "m������. �� ��������� �������, � ������ ������ ���� ���������.\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]�����: " << userName << " | �������� ������: " << lives << " | ����: " << score << "\n\n";
			}
			else
			{
				cout << "			[\x1b[" << colar << "m���������. ������ ������ � ���������� �����!\x1b[0m]\n\n";
			}

			cout << "\n[\x1b[" << colar << "m+\x1b[0m]��������� � ����: _\b";
			cin >> userAns;

			break;
		case 3:

			cout << "		[\x1b[" << colar << "m�������\x1b[0m]\n\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]����� �������� ���� �� ���������� ����� �� ������\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]����� �������� ������ �� ���������� �����\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]����� ������ ����� ��� ������������ ������\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]����� ���������� ����������� ������ � ��������� ������ ���� �� ����������\n\n";
			cout << "[\x1b[" << colar << "m0\x1b[0m]�����\n\n";
			cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";
			cin >> menuTr;
			system("cls");
			continue;
			break;
		case 2:

			while (siklOP)
			{
				siklCo = 1; siklQ = 1;

				cout << "		[\x1b[" << colar << "m���������\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m1\x1b[0m]�������������� ��� ������\n";
				cout << "[\x1b[" << colar << "m2\x1b[0m]�������������� �������� � ����\n";
				cout << "[\x1b[" << colar << "m3\x1b[0m]�������������� ���� ����������\n\n";
				cout << "[\x1b[" << colar << "m0\x1b[0m]�����\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";

				cin >> menuTr;
				system("cls");

				switch (menuTr)
				{
				case 0: siklOP = 0;
					break;
				case 1:
					cout << "[\x1b[" << colar << "m-\x1b[0m]������� ��� ������: ";
					cin >> userName;
					system("cls");
					break;
				case 2:

					while (siklQ)
					{
						cout << "		[\x1b[" << colar << "m���������� ��������\x1b[0m]\n\n";
						cout << "[\x1b[" << colar << "m1\x1b[0m] - 8\n";
						cout << "[\x1b[" << colar << "m2\x1b[0m] - 10\n";
						cout << "[\x1b[" << colar << "m3\x1b[0m] - 12\n\n";
						cout << "[\x1b[" << colar << "m0\x1b[0m]�����\n\n";
						cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";

						cin >> menuTr;
						system("cls");

						switch (menuTr)
						{
						case 0: siklQ = 0;
							break;
						case 1: qwNam = 8; siklQ = 0;
							break;
						case 2: qwNam = 10; siklQ = 0;
							break;
						case 3: qwNam = 12; siklQ = 0;
							break;
						default:
							break;
						}
					}

					break;
				case 3:
					while (siklCo)
					{
						cout << "		[\x1b[" << colar << "m�����\x1b[0m]\n\n";
						cout << "[\x1b[" << colar << "m1\x1b[0m] - �����\n";
						cout << "[\x1b[" << colar << "m2\x1b[0m] - \x1b[91m�������\x1b[0m\n";
						cout << "[\x1b[" << colar << "m3\x1b[0m] - \x1b[92m������\x1b[0m\n";
						cout << "[\x1b[" << colar << "m4\x1b[0m] - \x1b[93m������\x1b[0m\n";
						cout << "[\x1b[" << colar << "m5\x1b[0m] - \x1b[94m�����\x1b[0m\n";
						cout << "[\x1b[" << colar << "m6\x1b[0m] - \x1b[95m����������\x1b[0m\n\n";
						cout << "[\x1b[" << colar << "m0\x1b[0m]�����\n\n";

						cout << "[\x1b[" << colar << "m+\x1b[0m]����: _\b";
						cin >> menuTr;
						system("cls");

						switch (menuTr)
						{
						case 0: siklCo = 0;
							break;
						case 1: colar = 0; siklCo = 0;
							break;
						case 2: colar = 91; siklCo = 0;
							break;
						case 3: colar = 92; siklCo = 0;
							break;
						case 4: colar = 93; siklCo = 0;
							break;
						case 5: colar = 94; siklCo = 0;
							break;
						case 6: colar = 95; siklCo = 0;
							break;
						default:
							break;
						}
					}
					break;
				default:
					break;
				}

			}

			continue;
			break;

		default: continue;
			break;
		}

	}
	int _; cin >> _;
	return 0;
}