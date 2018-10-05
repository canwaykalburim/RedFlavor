#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void Intro();
void Real_Intro();
void E_Real_Intro();
void Mode();
void Choices();
void K_choices();


void Menu();
void Start();
void Option();
void Explanation();
void End();
void developer();

void K_menu();
void K_start();
void K_option();
void K_explanation();
void K_developer();

char nInput[5] = { 0 };
char back[10] = { 0 };

void Intro() {
	messagePrint("NULL", NULL, "\n  �������� ����(������)\n  Youngjin's adventure(modify a design version)\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  �� ������ �ټ� �Ұ����� ��Ұ� ���ԵǾ� �ֽ��ϴ�.\n  This game contains some unwholesome constituent.\n\n");
	messagePrint("NULL", NULL, "\n  �� ������ �����ڴ� ��� �� ���մϴ�.\n  The creators of this game is not good at English.\n\n");
	messagePrint("NULL", NULL, "\n  �� ������ �����ڴ� ��� ���ϱ⿡ �ѱ��� ���� ���� �帳�ϴ�.\n  The developers of this game are not good at English,\n  so I recommend the Korean version.\n\n");
}

void Real_Intro() {
	messagePrint("NULL", NULL, "\n  ���� �������� �����ڹ̵�� �߸� �Ǿ���.\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  �ù��� �����Դϴ�. ���� Ȥ�� �ٸ� ������ �߰��Ͻø� ������ �ֽñ� �ٶ��ϴ�.\n\n");
	messagePrint("NULL", NULL, "\n  ��\n\n");
}

void E_Real_Intro() {
	messagePrint("NULL", NULL, "\n  Youngjin's love comedy was wrong\n\n");
	messagePrint("NULL", NULL, "\n  made by C.W.K\n\n");
	messagePrint("NULL", NULL, "\n  It's a demonstration game. Please let me know if you find any translation or other error.\n\n");
	messagePrint("NULL", NULL, "\n  finish\n\n");
}

void Mode() {
	system("cls");
	printf("\n  ���Ͻô� ��带 ������ �ּ���. \n  Please select the desired mode.\n\n");

	printf("  ���ڸ� �Է��ϸ� ����˴ϴ�.\n  Enter a number to apply\n\n");
	printf("  1. �ѱ���\n");
	printf("  2. English\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0) {
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0) {
		system("cls");
		Menu();
	}
}

void Menu() {
	printf("  ��YoungJin's Adventure��\n\n");

	printf(" 1. start\n");
	printf(" 2. explanation\n");
	printf(" 3. option\n");
	printf(" 4. developer\n");
	printf(" 5. Select language\n");
	printf(" 6. end\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0) {
		system("cls");
		Start();
	}
	else if (strcmp(nInput, "2") == 0) {
		system("cls");
		Explanation();
	}
	else if (strcmp(nInput, "3") == 0) {
		system("cls");
		Option();
	}
	else if (strcmp(nInput, "4") == 0) {
		system("cls");
		developer();
	}
	else if (strcmp(nInput, "5") == 0) {
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0) {
		system("cls");
		End();
	}
}

void Start() {
	messagePrint("NULL", NULL, "XX. XX. 20XX (M/D/Y)\n");
	messagePrint("NULL", NULL, "Youngjin is running late for school today.\n");
	messagePrint("NULL", NULL, "Youngjin is running around with bread in his mouth like a main characterin a love comedy.");
	messagePrint("NULL", NULL, "And it was quite obvious that Youngjin bumped into someone at the corner.\n");
	messagePrint("NULL", NULL, "And the bread fell off.\n");
	messagePrint("NULL", NULL, "But like in many love comedies, no one begrudged the falling bread.\n");
	messagePrint("? ? ?", 12, "Auuuu.....\n");
	messagePrint("Youngjin", 12, "Oh! I'm Sorry!\n");
	messagePrint("Youngjin", 12, "Huh? How about you?\n");
	messagePrint("NULL", NULL, "Who was standing there was the same classmate Sim youngrae(��).\n");
	messagePrint("NULL", NULL, "Yes. For him, love comedy is a comic story.\n");
	messagePrint("Sim youngrae", 12, "Ao, don't have Ssagbagaji man! (Koran bad world)\n");
	messagePrint("NULL", NULL, "The word that came out of his mouth was a word that I could not think of as someone who had said \"Auuuu...\" before.\n");
	messagePrint("NULL", NULL, "What shall I say??\n\n");

	Choices();
}

void Explanation() {
	printf("  manual: Enter a number to select an choices.\n\n");

	printf("  Game description: This game is a story of two boy Park youngjin and Kim youngrae, all of which are fictional and have nothing to do with the real person.\n\n");
	printf("  Both Park youngjin, Kim youngrae and developer used aliases.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		Menu();
	}
	else {
		printf("  Please enter the correct number.\n");
		_getch();
		Explanation();
	}
}

void Option() {
	printf("     404\n\n  Unable to set.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		Menu();
	}
	else {
		printf("  Please enter the correct number.\n");
		_getch();
		Option();
	}
}

void developer() {
	printf("  [administrator]\n  Seo dongyoung\n\n");
	printf("  [story]\n  Seo dongyoung\n\n");
	printf("  [help]\n  Jeong jihyeon\n  Seong gihyeon\n  Kim dohun\n  Kim youngrae\n\n");
	printf("  [cast]\n  Kim youngrae\n  Park youngjin\n  Seodongyoung\n\n");
	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		Menu();
	}
	else {
		printf("  Please enter the correct number.\n");
		_getch();
		developer();
	}
}

void End() {
	exit(0);
}

void Choices() {
	printf("  1. Fucking bitch, you are dead today.\n");
	printf("  2. Don't have Ssagbagaji bitch, you are dead today.\n");
	printf("  3. Oh, my God. I'm right about my mistake, but don't you think that's too harsh??\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0) {
		system("cls");
		
		messagePrint("NULL", NULL, "On that day, youngjin lost to youngrae and could not lift his face.\n");
		messagePrint("NULL", NULL, "BAD END1\n  It was stronger than I thought.\n\n\n");
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "2") == 0) {
		system("cls");
		messagePrint("NULL", NULL, "On that day, youngjin lost to youngrae and could not lift his face.\n");
		messagePrint("NULL", NULL, "BAD END2\n  Don't have Ssagbagaji man.\n\n");
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "3") == 0) {
		system("cls");
		messagePrint("Sim youngrae", 12, "Auuuu... I'm the only bad guy if you say that blockhead...\n");
		messagePrint("NULL", NULL, "Youngrae was blushing somewhere.\n");
		messagePrint("NULL", NULL, "But our protagonist, Sim youngjin, who is so insensitive ...\n");
		messagePrint("NULL", NULL, "What he said after much thought....\n");
		messagePrint("NULL", NULL, ".....\n");
		messagePrint("Youngjin", 12, "Well, Is it going to be like that?\n");
		messagePrint("Sim youngrae", 12, "EHyu...\n");
		messagePrint("Youngjin", 12, "Why? What are you worried about?\n");
		messagePrint("NULL", NULL, "youngjin, who has the tendency of a male protagonist of a common love comedy...\n");
		messagePrint("NULL", NULL, "Now the Love Comedies standard...\n");
		messagePrint("NULL", NULL, "The advent of new rivals!\n");
		messagePrint("???", 12, "What are you doing with youngjin??\n");
		messagePrint("Youngjin", 12, "Youngjin: Oh...? simyoung..?\n");
		messagePrint("Seo simyoung", 12, "What are you doing with Youngjin?!\n");
		messagePrint("NULL", NULL, "A boy who seems to have something to do with youngjin...\n");
		messagePrint("Sim youngrae", 12, "It's you. youngjin's boyfriend...\n");
		messagePrint("Youngjin", 12, "???\n");
		messagePrint("Seo simyoung", 12, "I'm sorry, but Youngjin is mine. Don't even look at it.\n");
		messagePrint("Youngjin", 12, "??????\n");
		messagePrint("NULL", NULL, "I don't think Youngjin understood it alone..\n");
		messagePrint("NULL", NULL, "The two boys around Youngjin ... What is their fate??\n");
		_getch();
		E_Real_Intro();
	}
}

void K_menu() {
	printf("  �ڿ������� �����\n\n");

	printf(" 1. ����\n");
	printf(" 2. ����\n");
	printf(" 3. ����\n");
	printf(" 4. ������\n");
	printf(" 5. ��� ����\n");
	printf(" 6. ������\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0) {
		system("cls");
		K_start();
	}
	else if (strcmp(nInput, "2") == 0) {
		system("cls");
		K_explanation();
	}
	else if (strcmp(nInput, "3") == 0) {
		system("cls");
		K_option();
	}
	else if (strcmp(nInput, "4") == 0) {
		system("cls");
		K_developer();
	}
	else if (strcmp(nInput, "5") == 0) {
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0) {
		system("cls");
		_getch();
		End();
	}
	else {
		printf("  �ùٸ� ���� �Է��� �ּ���.\n\n");
		K_menu();
	}
}

void K_start() {
	messagePrint("NULL", NULL, "20XX�� XX�� XX��\n");
	messagePrint("NULL", NULL, "�����̴� ���õ� �б��� �ʾ �޸��� �ִ�.\n");
	messagePrint("NULL", NULL, "�����̴� ���� �ڹ̵��� ���ΰ�ó�� �Կ��� �Ļ��� ���� �޸��� �ִ�.\n");
	messagePrint("NULL", NULL, "�׸��� ���� ���ϰԵ� �����̴� �ٴٰ� �ڳʿ��� �������� �ε�����.\n");
	messagePrint("NULL", NULL, "�׸��� �Ļ��� ��������.\n");
	messagePrint("NULL", NULL, "������ ���� ���� �ڹ̵𿡼� �׷��� ������ ������ �Ļ��� �Ʊ�� ���� �ʾҴ�.\n");
	messagePrint("???", 12, "�ƾ߾�.....\n");
	messagePrint("����", 12, "��!�˼��մϴ�!\n");
	messagePrint("����", 12, "��? �ʴ�?\n");
	messagePrint("NULL", NULL, "�װ��� �� �ִ� ���� ���� �� ģ�� �ɿ���(��).\n");
	messagePrint("NULL", NULL, "�׷���. �׿��� ���� �ڹ̵�� ��ȭ�� �̾߱��̴�.\n");
	messagePrint("�ɿ���", 12, "�ƿ� �̷� �Ϲٰ��� ���� ����.\n");
	messagePrint("NULL", NULL, "�׿� �Կ��� ���� ���� �Ʊ��� \"�ƾ߾�...\"��� �ߴ� ����̶�� ������ �� ���� ���̾���.\n");
	messagePrint("NULL", NULL, "���� ���� �ұ�?\n\n", 10);

	K_choices();
}

void K_explanation() {
	printf("  ���۹�: ���ڸ� �Է��Ͽ� �������� �����մϴ�.\n\n");

	printf("  ���� ����: �� ������ �ڿ����̶�� �ҳ�� �迵����� ����� �̾߱�� �� ���ӿ� ���� ������ ��� �㱸�̸�,���� �ι����� ���谡 �����ϴ�.\n\n");
	printf("  �ڿ����� �迵�� ��� ������ ����߽��ϴ�.\n\n");

	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		K_menu();
	}
	else {
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_explanation();
	}
}

void K_option() {
	printf("        404\n\n  ������ �� �����ϴ�.\n\n");

	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		K_menu();
	}
	else {
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_option();
	}
}

void K_developer() {
	printf("  [�Ѱ�]\n  ������\n\n");
	printf("  [���丮]\n  ������\n\n");
	printf("  [������ �� ���]\n  ������\n  ������\n  �赵��\n  �迵��\n\n");
	printf("  [�⿬]\n  ������\n  �迵��\n  �ڿ���\n\n");
	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0) {
		system("cls");
		K_menu();
	}
	else {
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_developer();
	}
}

void K_choices() {
	printf("  1. �� ��ģ���� �� ���� ������\n");
	printf("  2. �̷� �Ϲٰ��� ���� ���� �� ���� ������\n");
	printf("  3. ��� ������ ���� �߸��� ���� ������ �� ���� �ʹ� ������ �ʴ�?\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0) {
		system("cls");
		messagePrint("NULL", NULL, "�׳� �����̴� �������� �߸��� ���� �� ��� �ٳ��.\n");
		messagePrint("NULL", NULL, "BAD END1\n  �������� ���ߴ�.\n\n");
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0) {
		system("cls");
		messagePrint("NULL", NULL, "�׳� �����̴� �������� ó���� �߸��� ���� �� ��� �ٳ��.\n");
		messagePrint("NULL", NULL, "BAD END2\n  �ΰ��� ���� ��.\n\n");
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "3") == 0) {
		system("cls");
		messagePrint("�ɿ���", 12, "�ƴ� �ϰ� �׷��� ���ϸ� ���� ���۳� ���ݾ� �� �Ϲٰ��� ���� ���...\n");
		messagePrint("NULL", NULL, "������ ��� �𸣰� ���� ������ �־���.\n");
		messagePrint("NULL", NULL, "������ ��ġ ���� �츮�� ���ΰ� �ɿ���...\n");
		messagePrint("NULL", NULL, "�װ� ��� ���� ��������....\n");
		messagePrint("NULL", NULL, ".....\n");
		messagePrint("NULL", NULL, "\n");
		messagePrint("�ɿ���", 12, "��... �׷��� �Ǵ� �ǰ�?\n");
		messagePrint("�ɿ���", 12, "����.....\n");
		messagePrint("�ɿ���", 12, "��? ���� ����־�?\n");
		messagePrint("NULL", NULL, "���� ���� �ڸ޵��� ���� ���ΰ��� ������ ���� ���� ����...\n");
		messagePrint("NULL", NULL, "���� ���� �ڸ޵��� ����...\n");
		messagePrint("NULL", NULL, "���ο� ���̹� ����\n");
		messagePrint("???", 12, "�� ���� �����̶� ���ϴ� �ž�?\n");
		messagePrint("�ɿ���", 12, "��...? �ɿ���...\n");
		messagePrint("���ɿ�", 12, "�� ���� �����̶� ���ϴ� �ž�!\n");
		messagePrint("NULL", NULL, "���� �����̶� ���� �־� ���̴� �ҳ� ����...\n");
		messagePrint("�ɿ���", 12, "�ʱ��� �������� ����ģ��...\n");
		messagePrint("�ɿ���", 12, "???\n");
		messagePrint("���ɿ�", 12, "�̾������� �����̴� ������ ���� ��������\n");
		messagePrint("�ɿ���", 12, "??????\n");
		messagePrint("NULL", NULL, "�ƹ����� ������ ȥ�� ���� �� �Ѱ� ����.\n");
		messagePrint("NULL", NULL, "�����̸� �ѷ��� �� ���� �ҳ��... �� ���� �����?\n");
		_getch();
		system("cls");
		Real_Intro();
	}
}

int main() {
	Intro();
	Mode();
}