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

	cout << "Добро пожаловать! Рады видеть Вас в нашей викторине. \n";
	cout << "Введите любой символ для продолжения. \n\n";
	cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";
	cin >> quest;

	while (true) {

		int menuTr;
		siklCo = 1; siklQ = 1; siklOP = 1;

		system("cls");

		cout << "			[\x1b[" << colar << "mМеню\x1b[0m]\n\n";
		cout << "[\x1b[" << colar << "m1\x1b[0m]Начать игру\n";
		cout << "[\x1b[" << colar << "m2\x1b[0m]Настройки\n";
		cout << "[\x1b[" << colar << "m3\x1b[0m]Правила\n\n";
		cout << "[\x1b[" << colar << "m0\x1b[0m]Выйти\n\n";

		cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";
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

				cout << "					Предупреждение! \n";
				cout << "Необходимо ввести имя пользователя и кол-во вопросов в игре перед её прохождением. \n";
				cout << "Пожалуйста, заполните необходимую информацию в настройках, после чего возращайтесь! \n";
				cout << "Ах, да, не забудьте ознакомиться с правилами! \n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";
				cin >> menuTr;
				break;

			}

			while ((round < qwNam) && (lives > 0))
			{
				system("cls");
				cout << "[\x1b[" << colar << "mИгра\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]Игрок: " << userName << " | жизни: " << lives << " | очки: " << score << "\n\n";

				switch (round)
				{
				case 0:
					quest = "На каком языке програмирования написана эта викторина?";
					ansA = "Python";
					ansB = "C#";
					ansC = "Ruby";
					ansD = "C++";
					corAns = 'D';
					break;

				case 1:
					quest = "Модификация - это ...";
					ansA = "процедура внесения изменений в ПО с целью избавления от ошибок";
					ansB = "процедура внесения изменений в ПО с целью улучшения работоспособности программы";
					ansC = "редактирование программного кода";
					ansD = "процесс решения задач";
					corAns = 'A';
					break;


				case 2:
					quest = "Какого типа данных не существует?";
					ansA = "Числовые";
					ansB = "Логические";
					ansC = "Буквенные";
					ansD = "Строковые";
					corAns = 'C';
					break;


				case 3:
					quest = "С чего мы начинаем создание баз данных?";
					ansA = "С создания таблицы";
					ansB = "С открытия файла, где она будет хранится";
					ansC = "С внесения данных";
					ansD = "С создания столбца";
					corAns = 'B';
					break;


				case 4:
					quest = "Что обязательно ставится в конце блока кода в С++?";
					ansA = ";";
					ansB = "}";
					ansC = ".";
					ansD = ",";
					corAns = 'B';
					break;


				case 5:
					quest = "Компьютерная система, эмулирующая возможности каких-либо вычислительных комплексов - это..";
					ansA = "Visual Studio";
					ansB = "1С";
					ansC = "Виртуальная машина";
					ansD = "Cisco";
					corAns = 'C';
					break;


				case 6:
					quest = "Сколько битов в 1 байте?";
					ansA = "4";
					ansB = "8";
					ansC = "16";
					ansD = "32";
					corAns = 'B';
					break;


				case 7:
					quest = "Сколько байт в int?";
					ansA = "4";
					ansB = "8";
					ansC = "16";
					ansD = "32";
					corAns = 'A';
					break;


				case 8:
					quest = "Что такое хранилище?";
					ansA = "место, где хранится кэш компьютера";
					ansB = "предметно-ориентированная БД";
					ansC = "внешняя память компьютера";
					ansD = "оперативная память компьютера";
					corAns = 'D';
					break;


				case 9:
					quest = "Что ставится после cout?";
					ansA = "<<";
					ansB = ">>";
					ansC = "=";
					ansD = ":";
					corAns = 'A';
					break;


				case 10:
					quest = "Какой внешний накопитель больше не используется?";
					ansA = "флэшка";
					ansB = "диск";
					ansC = "CD-карта";
					ansD = "внешний жесткий диск";
					corAns = 'B';
					break;


				case 11:
					quest = "Как зовут ЛУЧШЕГО преподавателя по С++ в колледже связи 54?";
					ansA = "Пугаев И.А.";
					ansB = "Николаенко Н.А.";
					ansC = "Орлов А.Д.";
					ansD = "Токарь И.А.";
					corAns = 'C';
					break;
				default: quest = ansA = ansB = ansC = ansD = "NULL"; corAns = 'A';
					break;
				}

				cout << "[\x1b[" << colar << "m" << round + 1 << "\x1b[0m]Вопрос: " << quest << endl;
				cout << "\n[\x1b[" << colar << "mA\x1b[0m]" << ansA << "\n[\x1b[" << colar << "mB\x1b[0m]" << ansB << endl;
				cout << "[\x1b[" << colar << "mC\x1b[0m]" << ansC << "\n[\x1b[" << colar << "mD\x1b[0m]" << ansD << endl;

				cout << "\n[\x1b[" << colar << "m+\x1b[0m]Выбрать ответ: _\b";
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
				cout << "			[\x1b[" << colar << "mПобеда. Ты смышлённый человек, а теперь создай свою викторину.\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]Игрок: " << userName << " | осталось жизней: " << lives << " | очки: " << score << "\n\n";
			}
			else
			{
				cout << "			[\x1b[" << colar << "mПоражение. Подучи теорию и возращайся снова!\x1b[0m]\n\n";
			}

			cout << "\n[\x1b[" << colar << "m+\x1b[0m]Вернуться в меню: _\b";
			cin >> userAns;

			break;
		case 3:

			cout << "		[\x1b[" << colar << "mПравила\x1b[0m]\n\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]Игрок получает очки за правильный ответ на вопрос\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]Игрок проходит дальше за правильный ответ\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]Игрок теряет жизнь при неправильном ответе\n";
			cout << "[\x1b[" << colar << "m-\x1b[0m]Ответ необходимо прописывать капсом и раскладка должна быть на английском\n\n";
			cout << "[\x1b[" << colar << "m0\x1b[0m]Назад\n\n";
			cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";
			cin >> menuTr;
			system("cls");
			continue;
			break;
		case 2:

			while (siklOP)
			{
				siklCo = 1; siklQ = 1;

				cout << "		[\x1b[" << colar << "mНастройки\x1b[0m]\n\n";
				cout << "[\x1b[" << colar << "m1\x1b[0m]Редактирование имя игрока\n";
				cout << "[\x1b[" << colar << "m2\x1b[0m]Редактирование вопросов в игре\n";
				cout << "[\x1b[" << colar << "m3\x1b[0m]Редактирование цвет интерфейса\n\n";
				cout << "[\x1b[" << colar << "m0\x1b[0m]Назад\n\n";
				cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";

				cin >> menuTr;
				system("cls");

				switch (menuTr)
				{
				case 0: siklOP = 0;
					break;
				case 1:
					cout << "[\x1b[" << colar << "m-\x1b[0m]Введите имя игрока: ";
					cin >> userName;
					system("cls");
					break;
				case 2:

					while (siklQ)
					{
						cout << "		[\x1b[" << colar << "mКоличество вопросов\x1b[0m]\n\n";
						cout << "[\x1b[" << colar << "m1\x1b[0m] - 8\n";
						cout << "[\x1b[" << colar << "m2\x1b[0m] - 10\n";
						cout << "[\x1b[" << colar << "m3\x1b[0m] - 12\n\n";
						cout << "[\x1b[" << colar << "m0\x1b[0m]Назад\n\n";
						cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";

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
						cout << "		[\x1b[" << colar << "mЦвета\x1b[0m]\n\n";
						cout << "[\x1b[" << colar << "m1\x1b[0m] - Белый\n";
						cout << "[\x1b[" << colar << "m2\x1b[0m] - \x1b[91mКрасный\x1b[0m\n";
						cout << "[\x1b[" << colar << "m3\x1b[0m] - \x1b[92mЗелёный\x1b[0m\n";
						cout << "[\x1b[" << colar << "m4\x1b[0m] - \x1b[93mЖелтый\x1b[0m\n";
						cout << "[\x1b[" << colar << "m5\x1b[0m] - \x1b[94mСиний\x1b[0m\n";
						cout << "[\x1b[" << colar << "m6\x1b[0m] - \x1b[95mФиолетовый\x1b[0m\n\n";
						cout << "[\x1b[" << colar << "m0\x1b[0m]Назад\n\n";

						cout << "[\x1b[" << colar << "m+\x1b[0m]Ввод: _\b";
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