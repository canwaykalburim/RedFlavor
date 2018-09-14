#include "common.h"
#include "ctgmlib.h"

#define UnderTaleIntro "C:\\Users\\DSM2018\\Desktop\\소스 코드\\_C\\Youngjin's_Story\\Music\\UnderTaleIntro.wav"

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
	char *act = "옛날 옛적 공산당과 민주당 두 종족이 살고 있었습니다.";
	char *act2 = "어느날... 두 종족간에 전쟁이 발발했습니다.";
	char *act3 = "치열한 전투 끝에, 민주당이 전투에서 승리했습니다.";
	char *act4 = "승리한 민주당은 마법 주문을 이용하여 공산당을 땅속에 봉인했습니다.";
	char *act5 = "많은 시간이 흐른 뒤...\n\n   20XX년 대한민국...";
	char *act6 = "전설에 따르면 철조망을 넘은 이는 절대로 돌아오지 못한다고 한다.";
	char *act7 = "탕... 탕... 탕...";
	char *act8 = ". . . . .";

	Muse();

	printf("\n   ");
	for (int i = 0; i < 53; i++) {
		printf("%c", *(act + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 43; i++) {
		printf("%c", *(act2 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 50; i++) {
		printf("%c", *(act3 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 67; i++) {
		printf("%c", *(act4 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 45; i++) {
		printf("%c", *(act5 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 64; i++) {
		printf("%c", *(act6 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
	_getch();
	_getch();
	system("cls");
	printf("\n   ");
	for (int i = 0; i < 18; i++) {
		printf("%c", *(act7 + i));
		Delay(220);
	}
	Delay(300);
	printf(" ▼ ");
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
	printf("\n   영 진 테 일");
	_getch();
	_getch();
	system("cls");
	printf("\n   BY 서동영");
	_getch();
	_getch();
	system("cls");
}

void GameExplain2() {
	char exp[12] = "영 진 테 일";

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
		printf("\n   [가위 바위 보]");
		printf("\n\n   가위: 1번 \n   바위: 2번 \n   보  : 3번\n\n   ⇒ ");
		scanf("%d", &nInput);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		if (nInput == a) {

			if (a == 1) {
				system("cls");
				printf("\n   당신: 가위\n   컴퓨터: 가위\n\n   막상막하 그 결과는?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else if (a == 2) {
				system("cls");
				printf("\n   당신: 바위\n   컴퓨터: 바위\n\n   막상막하 그 결과는?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
			else {
				system("cls");
				printf("\n   당신: 보자기\n   컴퓨터: 보자기\n\n   막상막하 그 결과는?\n");
				draw++;
				_getch();
				_getch();
				system("cls");
			}
		}
		else if (nInput == 0) {
			system("cls");
			printf("\n   종료하겠습니다.\n");
			break;
		}
		else if (nInput != a && nInput < 5) {

			if (nInput == 1 && a == 3) {
				system("cls");
				printf("\n   당신: 가위\n   컴퓨터: 보\n\n   이겼소 동무!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 2 && a == 1) {
				system("cls");
				printf("\n   당신: 바위\n   컴퓨터: 가위\n\n   이겼소 동무!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 3 && a == 2) {
				system("cls");
				printf("\n   당신: 보자기\n   컴퓨터: 바위\n\n   이겼소 동무!\n");
				win++;
				_getch();
				_getch();
				system("cls");
			}
			else if (nInput == 1 && a == 2) {
				system("cls");
				printf("\n   당신: 가위\n   컴퓨터: 바위\n\n   패배하였습니다.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 2 && a == 3) {
				system("cls");
				printf("\n   당신: 바위, 컴퓨터: 보\n\n   패배하였습니다.\n");
				lose++;
				_getch();
				_getch();
				system("cls");
				cont++;
				break;
			}
			else if (nInput == 3 && a == 1) {
				system("cls");
				printf("\n   당신: 보자기\n   컴퓨터: 가위\n\n   패배하였습니다.\n");
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
			printf("\n   다른 수를 입력해 주세요.\n");
			cont--;
			_getch();
			_getch();
			system("cls");
		}
		cont++;
		printf("\n   0을 입력하면 종료합니다.\n");
	}
	printf("\n\n   게임의 결과 : %d전 %d승 %d무 %d패\n", cont, win, draw, lose);
	_getch();
	_getch();
	system("cls");
	Special();
}

void Special() {
	char mInput[5];
	system("cls");
	printf("\n   축하합니다.\n\n   미니 게임을 실행 하시겠습니까?\n\n   Yes/No\n\n   ⇒ ");
	scanf("%s", mInput);

	if (!strcmp(mInput, "yes") || !strcmp(mInput, "Yes")) {
		system("cls");
		MiniGame();
	}
	else if (!strcmp(mInput, "no") || !strcmp(mInput, "No")) {
		printf("\n   메인 메뉴로 돌아가겠습니다.");
		_getch();
		_getch();
		Menu();
	}
	else {
		printf("\n   다시 입력하여 주세요.");
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
		printf("\n  영 진 테 일\n\n  [ 게임 설명 ]\n\n  이 게임은 영진이가 땅굴에 빠져 공산당 사람들을 만나며 벌어지는 일들에 대한 이야기입니다.\n\n  그 외에 것은 readme파일을 참고하세요.\n\n");
		printf("  돌아가시려면 아무 키나 누르세요.\n");
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

	MessagePrint("NULL", 0, "어떻게 할까?\n\n");
	_getch();
	printf("  1. 기다린다.\n\n  2. 주변을 찾아본다.\n\n  ⇒ ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		printf("\n\n   ");
		for (int i = 0; i < 6; i++) {
			printf(". ");
			Delay(500);
		}
		MessagePrint("NULL", 0, "아무일도 없었다.\n");
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
	char *act9 = "귀 찮 은 녀 석";
	char *act10 = "죽 어 라";
	char *act11 = "죽거나 죽이거나";

	MessagePrint("NULL", 0, "어떻게 할까?\n\n");
	_getch();
	printf("  1. 마신다\n\n  2. 마시지 않는다\n\n  ⇒ ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		MessagePrint("NULL", 0, "당신은 한번 마셔보기로 했다\n");
		_getch();
		MessagePrint("NULL", 0, "당신은 정신이 혼미해 진다\n");
		_getch();
		MessagePrint("파르한", 14, "멍청한 녀석!\n");
		_getch();
		MessagePrint("파르한", 14, "세상은\n");
		_getch();
		MessagePrint("파르한", 14, "");
		for (int i = 0; i < 16; i++) {
			printf("%c", *(act11 + i));
			Delay(250);
		}
		_getch();
		_getch();
		system("cls");
		MessagePrint("파르한", 14, "둘 중 하나야\n");
		_getch();
		MessagePrint("파르한", 14, "고마워~\n\n  덕분에 손쉽게 경험치를 수급할 수 있겠네~\n");
		_getch();
		break;
	case 2:
		switch (coun) {
		case 0:
			system("cls");
			MessagePrint("파르한", 14, "뭐야 마시지 않는거야?\n\n  힘들잖아! 마셔봐!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 1:
			system("cls");
			MessagePrint("파르한", 14, "괜찮아 마셔도 돼!\n\n  마셔봐!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 2:
			system("cls");
			MessagePrint("파르한", 14, "마셔! 마시라고!\n");
			coun++;
			_getch();
			system("cls");
			Select2();
			break;
		case 3:
			system("cls");
			MessagePrint("파르한", 14, "");
			for (int i = 0; i < 15; i++) {
				printf("%c", *(act9 + i));
				Delay(250);
			}
			_getch();
			_getch();
			system("cls");
			MessagePrint("파르한", 14, "");
			for (int i = 0; i < 9; i++) {
				printf("%c", *(act10 + i));
				Delay(250);
			}
		}
	}
}

void Select3() {
	int nInput;

	MessagePrint("NULL", 0, "어떻게 할까?\n\n");
	_getch();
	printf("  1. 싸운다\n\n  2. 싸우지 않는다\n\n  ⇒ ");
	scanf("%d", &nInput);
	switch (nInput) {
	case 1:
		system("cls");
		MessagePrint("NULL", 0, "당신은 온몸에 전율이 퍼져나갔다\n");
		_getch();
		MessagePrint("NULL", 0, "당신은 의지가 가득찼다\n");
		_getch();
		MessagePrint("NULL", 0, "당신은 싸우기로 결심했다\n");
		_getch();
		system("cls");
		break;

	case 2:
		system("cls");
		MessagePrint("NULL", 0, "당신은 싸움을 포기했다\n");
		_getch();
		MessagePrint("NULL", 0, "그는 기쁜 얼굴이었다\n");
		_getch();
		MessagePrint("태현", 9, "그래 잘 생각했구나\n\n  그럼 나는 문을 부수고 올라갈 테니 가서 기다리렴");
		_getch();
		MessagePrint("NULL", 0, "당신은 돌아가려 했지만 무엇인가 발목을 잡았다\n");
		_getch();
		MessagePrint("NULL", 0, "당신은 돌아갈 수 없었다\n");
		_getch();
		_getch();
		system("cls");
		Select3();
		break;
	}
}

void StartGame() {
	_getch();
	MessagePrint("영진", 10, ".....\n");
	_getch();
	MessagePrint("영진", 10, "으으으...\n");
	_getch();
	MessagePrint("영진", 10, "여긴... 어디지?\n");
	_getch();
	MessagePrint("영진", 10, ".....\n");
	_getch();
	Select();
	MessagePrint("영진", 10, "다리는 멀쩡하고...\n");
	_getch();
	MessagePrint("영진", 10, "일단은 주변을 살펴보자\n");
	_getch();
	MessagePrint("???", 14, "헤이! 안녕?\n");
	_getch();
	MessagePrint("영진", 10, "???\n");
	_getch();
	MessagePrint("영진", 10, "누구야?\n");
	_getch();
	MessagePrint("???", 14, "안녕? 내 이름은 파르한이야\n");
	_getch();
	MessagePrint("파르한", 14, "너처럼 이곳에 오게 된 사람들을 도와주는 사람이지~\n");
	_getch();
	MessagePrint("파르한", 14, "너 이곳은 처음이지?\n");
	_getch();
	MessagePrint("파르한", 14, "여기는 폐광이야.\n\n  이 세계에서 잘못한 사람들을 끌고와 일을 시켰던 곳이지\n");
	_getch();
	MessagePrint("파르한", 14, "조금 지쳐보이네? 여기\n");
	_getch();
	MessagePrint("NULL", 0, "파르한은 붉은 물약을 던졌다\n");
	_getch();
	Select2();
	MessagePrint("파르한", 14, "이 빛은 뭐야???\n");
	_getch();
	MessagePrint("파르한", 14, "으아아아악!!!\n");
	_getch();
	MessagePrint("NULL", 0, "파르한은 갑작스러운 공격을 맞고 사라졌다\n");
	_getch();
	MessagePrint("???", 9, "어휴... 어떤 나쁜 놈이 저렇게 작고 연약한 꼬마를 공격한담~\n");
	_getch();
	MessagePrint("???", 9, "꼬마야 보아하니 이곳은 처음인 것 같구나\n");
	_getch(); 
	MessagePrint("???", 9, "내 이름은 태현\n\n  이 폐광에서 혹시 너 같은 사람들을 만나면 도와주고 있지\n");
	_getch(); 
	MessagePrint("태현", 9, "일단 여기는 위험하니 우리 집으로 가도록 하자\n");
	_getch(); 
	MessagePrint("NULL", 0, "지친 당신은 착해보이는 그를 따라가기로 했다\n");
	_getch();
	GameExplain();
	_getch();
	StageOne();
}

void StageOne() {
	_getch();
	MessagePrint("NULL", 0, "당신은 가면서 그와 폐광에 대해 이야기 하였다\n");
	_getch();
	MessagePrint("태현", 9, "이곳은 폐광이 들어올 수 있는 유일한 입구야\n");
	_getch();
	MessagePrint("태현", 9, "그리고 나가는 곳은 단 한 곳 밖에 없지...\n");
	_getch();
	MessagePrint("태현", 9, "하지만 바깥에는 괴물과 함정이 많아서 네가 나가기는 힘들 것 같구나\n");
	_getch();
	MessagePrint("태현", 9, "이렇게 된 김에 우리 집에서 같이 살자꾸나\n");
	_getch();
	MessagePrint("태현", 9, "나는 예전부터 아이들을 키우는 것이 꿈이었단다\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 일단 알겠다고 대답하였다\n");
	_getch();
	MessagePrint("태현", 9, "자~ 여기가 앞으로 너와 내가 살게 될 곳이야\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 집 안으로 들어갔다\n");
	_getch();
	MessagePrint("태현", 9, "여기가 앞으로 니 방이란다\n");
	_getch();
	MessagePrint("태현", 9, "자 피곤할 테니 일단 자렴\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 지친 몸을 휴식하기 위해 침대에 올랐다\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 잠이 들었다\n");
	_getch();
	MessagePrint("영진", 10, ".....\n");
	_getch();
	MessagePrint("영진", 10, ".....\n");
	_getch();
	MessagePrint("영진", 10, "집에... 가야겠어...\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 태현에게 갔다\n");
	_getch();
	MessagePrint("태현", 9, "어머? 일어났니? 곧 식사를 준비해 오마\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 그럴 필요가 없다고 했다\n");
	_getch();
	MessagePrint("태현", 9, "그게... 무슨 소리니...?\n");
	_getch();
	MessagePrint("태현", 9, "배가 고프지 않은거니?\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 집으로 돌아가고 싶다고 말했다\n");
	_getch();
	MessagePrint("태현", 9, ".....\n");
	_getch();
	MessagePrint("태현", 9, "대체 왜니?\n");
	_getch();
	MessagePrint("태현", 9, "이곳에서의 생활이 마음에 안 들었니?\n");
	_getch();
	MessagePrint("태현", 9, "아니면 방이 마음에 안 들었니?\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 아무말도 하지 않았다\n");
	_getch();
	MessagePrint("태현", 9, "사실... 이렇게 될 건 알고 있었지만...\n");
	_getch();
	MessagePrint("NULL", 0, "그녀가 자리에서 일어났다\n");
	_getch();
	MessagePrint("태현", 9, "미안... 잠시 어디 좀 다녀와야겠어\n");
	_getch();
	MessagePrint("NULL", 0, "당신은 그녀를 따라갔다\n");
	_getch();
	MessagePrint("태현", 9, "이 문을 지나가면 밖으로 나갈 수 있단다\n");
	_getch();
	MessagePrint("태현", 9, "그리고 나는 이 문을 부숴 버릴거야\n");
	_getch();
	MessagePrint("태현", 9, "네가 밖으로 나가고 싶다면 증명해봐\n");
	_getch();
	MessagePrint("영진", 10, ".....\n");
	_getch();
	Select3();
}

void Menu() {
	int ch;

	system("cls");
	printf("\n   원하시는 번호를 고르세요.\n");
	printf("\n   1. 게임시작\n\n   2. 게임설명\n\n   3. 게임종료\n\n  ⇒ ");
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
		printf("\n  게임을 종료하겠습니다.\n");
		_getch();
		_getch();
		exit(0);
	default:
		system("cls");
		printf("\n   올바른 번호를 입력하여 주세요.");
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