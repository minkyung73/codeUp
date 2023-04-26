#include <stdio.h>
#include <string.h>

typedef struct _student {
	int code;
	char name[10];
}student;

student s[100]; //student 구조체 배열 전역으로 선언
int N; //입력받을 횟수 N
int cnt = 0; //s 배열 요소 개수 n

void I(int code, char name[10]) {
    for(int i=0; i<cnt; i++)
        if(s[i].code == code) //겹치면
            return;
    s[cnt].code = code;
    strcpy(s[cnt].name, name);
    cnt++;
}

void D(int code) {
    for(int i=0; i<cnt; i++){
        if (s[i].code == code){
            for(int j=i; j<cnt-1; j++)
                s[j]=s[j+1];
            cnt--;
            return;
        }
    }
    return;
}

int main(void) {
    int l[5];

    /*입력받기*/
	scanf("%d", &N); //첫줄에 갯수 입력받기
	for(int i=0; i<N; i++) { //N줄 데이터 입력받기
		char c, name[10];
		int code;
        scanf(" %c %d %s", &c, &code, name);
		if(c == 'I')
            I(code, name);
		else if(c == 'D')
            D(code);
	}
    for(int i=0; i<5; i++) {
        scanf("%d", &l[i]);
    }

    /*Bubble Sort*/
    for(int i=cnt-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(s[j].code > s[j+1].code) {
                student tmp = s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }

    /*출력하기*/
    for(int i=0; i<5; i++)
        for(int j=0; j<cnt; j++)
            if(l[i]-1 == j)
                printf("%d %s\n", s[j].code, s[j].name);

    return 0;
}