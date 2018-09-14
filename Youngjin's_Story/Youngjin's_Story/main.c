#include "common.h"
#include "ctgmlib.h"

#define UnderTaleIntro "C:\\Users\\DSM2018\\Desktop\\�ҽ� �ڵ�\\_C\\Youngjin's_Story\\Music\\UnderTaleIntro.wav"

void Muse()
{
	PlaySound(TEXT(UnderTaleIntro), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

int count = 0, coun = 0;
int draw = 0, win = 0, lose = 0, cont = 0;
void MiniGame();
void Special();
void Menu();
void StageOne();

void Delay(clock_t n) {
	clock_t start = clock();
	while (clock() - start < n);
}

void Intro() {
	char *act = "���� ���� ������ ���ִ� �� ������ ��� �־����ϴ�.";
	char *act2 = "�����... �� �������� ������ �߹��߽��ϴ�.";
	char *act3 = "ġ���� ���� ����, ���ִ��� �������� �¸��߽��ϴ�.";
	char *act4 = "�¸��� ���ִ��� ���� �ֹ��� �̿��Ͽ� ������� ���ӿ� �����߽��ϴ�.";
	char *act5 = "���� �ð��� �帥 ��...\n\n   20XX�� ���ѹα�...";
	char *act6 = "������ ������ ö������ ���� �̴� ����� ���ƿ��� ���Ѵٰ� �Ѵ�.";
	char *act7 = "��... ��... ��...";
	char *act8 = ". . . . .";

	Muse();

	printf("\n   ");
	for (int i = 0; i < 53; i++) {
		printf("%c", *(act + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 43; i++) {
		printf("%c", *(act2 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 50; i++) {
		printf("%c", *(act3 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 67; i++) {
		printf("%c", *(act4 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 45; i++) {
		printf("%c", *(act5 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 64; i++) {
		printf("%c", *(act6 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 18; i++) {
		printf("%c", *(act7 + i));
		Delay(220);
	}
	Delay(300);
	printf(" �� ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 10; i++) {
		printf("%c", *(act8 + i));
		Delay(310);
	}
	PlaySound(NULL, 0, 0);
}

void GameExplain() {
	system("cls");
	printf("\n   �� �� �� ��");
	_getch();
	_getch();
	system("cls");
	printf("\n   BY ������");
	_getch();
	_getch();
	system("cls");
}

void GameExplain2() {
	char exp[12] = "�� �� �� ��";

	system("cls");
	_getch();
	printf("\n   ");
	for (int i = 0; i < 12; i++) {
		printf("%c", exp[i]);
		Delay(250);
	}
	_getch();
	_getch();
	system("cls");
}

void MiniGame() {
	int nInput, a;

	_getch();
	system("cls");

	while (1) {
		printf("\n   [���� ���� ��]");
		printf("\n\n   ����: 1�� \n   ����: 2�� \n   ��  : 3��\n\n   �� ");
		scanf("%d", &nInput);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		if (nInput == a) {

			if (a == 1) {
				system("cls");
				printf("\n   ���: ����\n   ��ǻ��: ����\n\n   ������ �� �����?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else if (a == 2) {
				system("cls");
				printf("\n   ���: ����\n   ��ǻ��: ����\n\n   ������ �� �����?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else {
				system("cls");
				printf("\n   ���: ���ڱ�\n   ��ǻ��: ���ڱ�\n\n   ������ �� �����?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
		}
		else if (nInput == 0) {
			system("cls");
			printf("\n   �����ϰڽ��ϴ�.\n");
			break;
		}
		else if (nInput != a && nInput < 5) {

			if (nInput == 1 && a == 3) {
				system("cls");
				printf("\n   ���: ����\n   ��ǻ��: ��\n\n   �̰�� ����!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   ���: ����\n   ��ǻ��: ����\n\n   �̰�� ����!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   ���: ���ڱ�\n   ��ǻ��: ����\n\n   �̰�� ����!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   ���: ����\n   ��ǻ��: ����\n\n   �й��Ͽ����ϴ�.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   ���: ����, ��ǻ��: ��\n\n   �й��Ͽ����ϴ�.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   ���: ���ڱ�\n   ��ǻ��: ����\n\n   �й��Ͽ����ϴ�.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
		}
		else {
			system("cls");
			printf("\n   �ٸ� ���� �Է��� �ּ���.\n");
			cont--;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0�� �Է��ϸ� �����մϴ�.\n");
	}
	printf("\n\n   ������ ��� : %d�� %d�� %d�� %d��\n", cont, win, draw, lose);
	_getch();
	_getch();
	system("cls");
	Special();
}

void Special() {
	char mInput[5];
	system("cls");
	printf("\n   �����մϴ�.\n\n   �̴� ������ ���� �Ͻðڽ��ϱ�?\n\n   Yes/No\n\n   �� ");
	scanf("%s", mInput);

	if (!strcmp(mInput, "yes") || !strcmp(mInput, "Yes")) {
		system("cls");
		MiniGame();
	}
	else if (!strcmp(mInput, "no") || !strcmp(mInput, "No")) {
		printf("\n   ���� �޴��� ���ư��ڽ��ϴ�.");
		_getch();
		_getch();
		Menu();
	}
	else {
		printf("\n   �ٽ� �Է��Ͽ� �ּ���.");
		_getch();
		_getch();
		Special();
	}
}

void Explain() {
	printf(". . .\n");
}

void Explain2() {

	if (count == 0) {
		printf("\n  �� �� �� ��\n\n  [ ���� ���� ]\n\n  �� ������ �����̰� ������ ���� ����� ������� ������ �������� �ϵ鿡 ���� �̾߱��Դϴ�.\n\n  �� �ܿ� ���� readme������ �����ϼ���.\n\n");
		printf("  ���ư��÷��� �ƹ� Ű�� ��������.\n");
		_getch();
		_getch();
		Menu();
	}
	else if (count == 1) {
		system("cls");
		Explain();
	}
}

void Select() {
	int nInput;

	MessagePrint("NULL", 0, "��� �ұ�?\n\n");
	_getch();
	printf("  1. ��ٸ���.\n\n  2. �ֺ��� ã�ƺ���.\n\n  �� ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		printf("\n\n   ");
		for (int i = 0; i < 6; i++) {
			printf(". ");
			Delay(500);
		}
		MessagePrint("NULL", 0, "�ƹ��ϵ� ������.\n");
		_getch();
		_getch();
		system("cls");
		Select();
		break;
	case 2:
		break;
	}
}

void Select2() {
	int nInput;
	char *act9 = "�� �� �� �� ��";
	char *act10 = "�� �� ��";
	char *act11 = "�װų� ���̰ų�";

	MessagePrint("NULL", 0, "��� �ұ�?\n\n");
	_getch();
	printf("  1. ���Ŵ�\n\n  2. ������ �ʴ´�\n\n  �� ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		MessagePrint("NULL", 0, "����� �ѹ� ���ź���� �ߴ�\n");
		_getch();
		MessagePrint("NULL", 0, "����� ������ ȥ���� ����\n");
		_getch();
		MessagePrint("�ĸ���", 14, "��û�� �༮!\n");
		_getch();
		MessagePrint("�ĸ���", 14, "������\n");
		_getch();
		MessagePrint("�ĸ���", 14, "");
		for (int i = 0; i < 16; i++) {
			printf("%c", *(act11 + i));
			Delay(250);
		}
		_getch();
		_getch();
		system("cls");
		MessagePrint("�ĸ���", 14, "�� �� �ϳ���\n");
		_getch();
		MessagePrint("�ĸ���", 14, "����~\n\n  ���п� �ս��� ����ġ�� ������ �� �ְڳ�~\n");
		_getch();
		break;
	case 2:
		switch (coun) {
		case 0:
			system("cls");
			MessagePrint("�ĸ���", 14, "���� ������ �ʴ°ž�?\n\n  �����ݾ�! ���ź�!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 1:
			system("cls");
			MessagePrint("�ĸ���", 14, "������ ���ŵ� ��!\n\n  ���ź�!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 2:
			system("cls");
			MessagePrint("�ĸ���", 14, "����! ���ö��!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 3:
			system("cls");
			MessagePrint("�ĸ���", 14, "");
			for (int i = 0; i < 15; i++) {
				printf("%c", *(act9 + i));
				Delay(250);
			}
			_getch();
			_getch();
			system("cls");
			MessagePrint("�ĸ���", 14, "");
			for (int i = 0; i < 9; i++) {
				printf("%c", *(act10 + i));
				Delay(250);
			}
		}
	}
}

void Select3() {
	int nInput;

	MessagePrint("NULL", 0, "��� �ұ�?\n\n");
	_getch();
	printf("  1. �ο��\n\n  2. �ο��� �ʴ´�\n\n  �� ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		MessagePrint("NULL", 0, "����� �¸��� ������ ����������\n");
		_getch();
		MessagePrint("NULL", 0, "����� ������ ����á��\n");
		_getch();
		MessagePrint("NULL", 0, "����� �ο��� ����ߴ�\n");
		_getch();
		system("cls");
		break;

	case 2:
		system("cls");
		MessagePrint("NULL", 0, "����� �ο��� �����ߴ�\n");
		_getch();
		MessagePrint("NULL", 0, "�״� ��� ���̾���\n");
		_getch();
		MessagePrint("����", 9, "�׷� �� �����߱���\n\n  �׷� ���� ���� �μ��� �ö� �״� ���� ��ٸ���");
		_getch();
		MessagePrint("NULL", 0, "����� ���ư��� ������ �����ΰ� �߸��� ��Ҵ�\n");
		_getch();
		MessagePrint("NULL", 0, "����� ���ư� �� ������\n");
		_getch();
		_getch();
		system("cls");
		Select3();
		break;
	}
}

void StartGame() {
	_getch();
	MessagePrint("����", 10, ".....\n");
	_getch();
	MessagePrint("����", 10, "������...\n");
	_getch();
	MessagePrint("����", 10, "����... �����?\n");
	_getch();
	MessagePrint("����", 10, ".....\n");
	_getch();
	Select();
	MessagePrint("����", 10, "�ٸ��� �����ϰ�...\n");
	_getch();
	MessagePrint("����", 10, "�ϴ��� �ֺ��� ���캸��\n");
	_getch();
	MessagePrint("???", 14, "����! �ȳ�?\n");
	_getch();
	MessagePrint("����", 10, "???\n");
	_getch();
	MessagePrint("����", 10, "������?\n");
	_getch();
	MessagePrint("???", 14, "�ȳ�? �� �̸��� �ĸ����̾�\n");
	_getch();
	MessagePrint("�ĸ���", 14, "��ó�� �̰��� ���� �� ������� �����ִ� �������~\n");
	_getch();
	MessagePrint("�ĸ���", 14, "�� �̰��� ó������?\n");
	_getch();
	MessagePrint("�ĸ���", 14, "����� ���̾�.\n\n  �� ���迡�� �߸��� ������� ����� ���� ���״� ������\n");
	_getch();
	MessagePrint("�ĸ���", 14, "���� ���ĺ��̳�? ����\n");
	_getch();
	MessagePrint("NULL", 0, "�ĸ����� ���� ������ ������\n");
	_getch();
	Select2();
	MessagePrint("�ĸ���", 14, "�� ���� ����???\n");
	_getch();
	MessagePrint("�ĸ���", 14, "���ƾƾƾ�!!!\n");
	_getch();
	MessagePrint("NULL", 0, "�ĸ����� ���۽����� ������ �°� �������\n");
	_getch();
	MessagePrint("???", 9, "����... � ���� ���� ������ �۰� ������ ������ �����Ѵ�~\n");
	_getch();
	MessagePrint("???", 9, "������ �����ϴ� �̰��� ó���� �� ������\n");
	_getch(); 
	MessagePrint("???", 9, "�� �̸��� ����\n\n  �� �󱤿��� Ȥ�� �� ���� ������� ������ �����ְ� ����\n");
	_getch(); 
	MessagePrint("����", 9, "�ϴ� ����� �����ϴ� �츮 ������ ������ ����\n");
	_getch(); 
	MessagePrint("NULL", 0, "��ģ ����� ���غ��̴� �׸� ���󰡱�� �ߴ�\n");
	_getch();
	GameExplain();
	_getch();
	StageOne();
}

void StageOne() {
	_getch();
	MessagePrint("NULL", 0, "����� ���鼭 �׿� �󱤿� ���� �̾߱� �Ͽ���\n");
	_getch();
	MessagePrint("����", 9, "�̰��� ���� ���� �� �ִ� ������ �Ա���\n");
	_getch();
	MessagePrint("����", 9, "�׸��� ������ ���� �� �� �� �ۿ� ����...\n");
	_getch();
	MessagePrint("����", 9, "������ �ٱ����� ������ ������ ���Ƽ� �װ� ������� ���� �� ������\n");
	_getch();
	MessagePrint("����", 9, "�̷��� �� �迡 �츮 ������ ���� ���ڲٳ�\n");
	_getch();
	MessagePrint("����", 9, "���� �������� ���̵��� Ű��� ���� ���̾��ܴ�\n");
	_getch();
	MessagePrint("NULL", 0, "����� �ϴ� �˰ڴٰ� ����Ͽ���\n");
	_getch();
	MessagePrint("����", 9, "��~ ���Ⱑ ������ �ʿ� ���� ��� �� ���̾�\n");
	_getch();
	MessagePrint("NULL", 0, "����� �� ������ ����\n");
	_getch();
	MessagePrint("����", 9, "���Ⱑ ������ �� ���̶���\n");
	_getch();
	MessagePrint("����", 9, "�� �ǰ��� �״� �ϴ� �ڷ�\n");
	_getch();
	MessagePrint("NULL", 0, "����� ��ģ ���� �޽��ϱ� ���� ħ�뿡 �ö���\n");
	_getch();
	MessagePrint("NULL", 0, "����� ���� �����\n");
	_getch();
	MessagePrint("����", 10, ".....\n");
	_getch();
	MessagePrint("����", 10, ".....\n");
	_getch();
	MessagePrint("����", 10, "����... ���߰ھ�...\n");
	_getch();
	MessagePrint("NULL", 0, "����� �������� ����\n");
	_getch();
	MessagePrint("����", 9, "���? �Ͼ��? �� �Ļ縦 �غ��� ����\n");
	_getch();
	MessagePrint("NULL", 0, "����� �׷� �ʿ䰡 ���ٰ� �ߴ�\n");
	_getch();
	MessagePrint("����", 9, "�װ�... ���� �Ҹ���...?\n");
	_getch();
	MessagePrint("����", 9, "�谡 ������ �����Ŵ�?\n");
	_getch();
	MessagePrint("NULL", 0, "����� ������ ���ư��� �ʹٰ� ���ߴ�\n");
	_getch();
	MessagePrint("����", 9, ".....\n");
	_getch();
	MessagePrint("����", 9, "��ü �ִ�?\n");
	_getch();
	MessagePrint("����", 9, "�̰������� ��Ȱ�� ������ �� �����?\n");
	_getch();
	MessagePrint("����", 9, "�ƴϸ� ���� ������ �� �����?\n");
	_getch();
	MessagePrint("NULL", 0, "����� �ƹ����� ���� �ʾҴ�\n");
	_getch();
	MessagePrint("����", 9, "���... �̷��� �� �� �˰� �־�����...\n");
	_getch();
	MessagePrint("NULL", 0, "�׳డ �ڸ����� �Ͼ��\n");
	_getch();
	MessagePrint("����", 9, "�̾�... ��� ��� �� �ٳ�;߰ھ�\n");
	_getch();
	MessagePrint("NULL", 0, "����� �׳ฦ ���󰬴�\n");
	_getch();
	MessagePrint("����", 9, "�� ���� �������� ������ ���� �� �ִܴ�\n");
	_getch();
	MessagePrint("����", 9, "�׸��� ���� �� ���� �ν� �����ž�\n");
	_getch();
	MessagePrint("����", 9, "�װ� ������ ������ �ʹٸ� �����غ�\n");
	_getch();
	MessagePrint("����", 10, ".....\n");
	_getch();
	Select3();
}

void Menu() {
	int ch;

	system("cls");
	printf("\n   ���Ͻô� ��ȣ�� ������.\n");
	printf("\n   1. ���ӽ���\n\n   2. ���Ӽ���\n\n   3. ��������\n\n  �� ");
	scanf("%d", &ch);
	
	switch (ch)
	{
	case 0:
		system("cls");
		Special();
		break;
	case 1:
		system("cls");
		StartGame();
		break;
	case 2:
		system("cls");
		Explain2();
		break;
	case 3:
		printf("\n  ������ �����ϰڽ��ϴ�.\n");
		_getch();
		_getch();
		exit(0);
	default:
		system("cls");
		printf("\n   �ùٸ� ��ȣ�� �Է��Ͽ� �ּ���.");
		_getch();
		_getch();
		Menu();
		break;
	}
}

int main(void) {

	//GameExplain2();
	//Intro();
	//GameExplain();
	Menu();
}