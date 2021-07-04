#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int now = -1;

void insert(char arr[], char data) {

	if (now == strlen(arr) - 1) {
		now++;
		arr[now] = data;
	}
	else {
		for (int i = strlen(arr); i > now; i--) {
			arr[i] = arr[i - 1];
		}
		now++;
		arr[now] = data;

	}

};
void traverse_rear(char arr[]) { //�ϼ�

	if (now == 0) {
		printf("\t\t            �̹� ù��°�Դϴ�.\n");
		return;
	}
	if (now == -1) {
		printf("\t\t            �迭�� ������ϴ�. \n");
		return;
	}
	if (now < strlen(arr)) {
		now--;
	}
};
void traverse_front(char arr[]) { //�ϼ�

	if (now == strlen(arr) - 1) {
		printf("\t\t            �̹� �������Դϴ�.\n");
		return;
	}
	if (now == -1) {
		printf("\t\t            �迭�� ������ϴ�. \n");
		return;
	}
	if (now < strlen(arr)) {
		now++;
	}
};
void first() { //�ϼ�
	if (now == 0) {
		printf("\t\t            �̹� ù��°�Դϴ�.\n");
		return;
	}
	else {
		now = 0;
	}
};
void last(char arr[]) { //�ϼ�
	if (now == strlen(arr) - 1) {
		printf("\t\t            �̹� �������Դϴ�.\n");
		return;
	}
	else {
		now = strlen(arr) - 1;
	}
}
void delete(char arr[]) {
	if (now == strlen(arr) - 1) { // �� ������ ������ ��� 
		arr[now] = '\0';
		now--;
	}
	else { // �ƴ� ���
		for (int i = now; i < strlen(arr) - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[strlen(arr) - 1] = '\0';
	}
	if (strlen(arr) == 0) {
		printf("\t\t            ������ ���� �����ϴ�!\n"); //�߰�
		now = -1;
		return;
	}

};
void get_data(char arr[]) { // �ϼ�
	printf("\t\t            Return %c\n", arr[now]);
	return arr[now];
};
void replace(char arr[], char data) { // �ϼ�
	arr[now] = data;
};
void empty(char arr[]) { // �ϼ�
	if (strlen(arr) == 0) { //�߰�
		printf("\t\t            ������ ��尡 �����ϴ�!\n");
		return;
	}
	for (int i = strlen(arr); i >= 0; i--) {
		arr[i] = '\0';
	}
	now = -1;
};
void move_front(char arr[]) { //�ϼ�
	if (now == strlen(arr) - 1) {
		if (now == 0) { //�߰�
			printf("\t\t            �̵��� �� �����ϴ�!\n");

		}
		else { //�߰�
			printf("\t\t            �̹� �������Դϴ�.\n");
		}
		arr[now] = arr[now];
	}
	else {
		char swap;

		swap = arr[now];
		arr[now] = arr[now + 1];
		arr[now + 1] = swap;
	}
};
void move_rear(char arr[]) { //�ϼ�
	if (now == 0) {
		if (strlen(arr) == 1) { //�߰�
			printf("\t\t            �̵��� �� �����ϴ�!\n");

		}
		else { //�߰�
			printf("\t\t            �̹� ù ��°�Դϴ�.\n");
		}
		arr[now] = arr[now];
	}
	else {
		char swap;

		swap = arr[now - 1];
		arr[now - 1] = arr[now];
		arr[now] = swap;
	}
}
void move_end(char arr[]) { //�ϼ�
	char swap;
	if (strlen(arr) == 1) {
		printf("\t\t            �̵��� �� �����ϴ�!\n");
		return;
	}
	for (int i = now; i < strlen(arr) - 1; i++) {
		swap = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = swap;
	}
	now = strlen(arr) - 1;
}
void move_index(char arr[], int index) { //�ϼ�
	char swap;
	if (now > index) {
		for (int i = now; i > index; i--) {
			swap = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = swap;
		}
		now = index;
	}
	else if (now < index && index < strlen(arr)) {
		for (int i = now; i < index; i++) {
			swap = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = swap;
		}
		now = index;
	}
	else if (now < index && index >= strlen(arr)) {
		printf("\t\t            �ߺ� �����Դϴ�.\n");
		return;
	}
	else {
		arr[now] = arr[now];
		now = index;
	}
}
void reverse(char arr[]) { //�ϼ�
	char swap;
	for (int i = 0; i < (strlen(arr) / 2); i++) {
		swap = arr[i];
		arr[i] = arr[strlen(arr) - 1 - i];
		arr[strlen(arr) - 1 - i] = swap;
	}
};
void twice(char arr[]) { //�ϼ�
	if (strlen(arr) <= 15) {
		int length = strlen(arr);
		for (int i = 0; i < length; i++) {
			arr[length + i] = arr[i];
		}
	}
	else {
		printf("\t\t            �� ��� ���� �� �����ϴ�.");
		return;
	}

	now = strlen(arr) - 1;
};
void swap(char arr[], int index) { //�ϼ�
	if (now < index && index >= strlen(arr)) { //�߰�
		printf("\t\t            �ߺ� �����Դϴ�.\n");
		return;
	}
	char swap;
	swap = arr[now];
	arr[now] = arr[index];
	arr[index] = swap;

	now = index;

}
void print(char arr[]) { //�ϼ�
	printf("\t\t                 �� ");
	for (int i = 0; i < strlen(arr); i++)
		printf("%c ", arr[i]);
	printf("��");
	printf("\n");
}
int main() {
	char arr[100] = { 0 };
	printf("\t\t================�迭 ���α׷�================\n");
	printf("\t\t            +: Insert Data\n");//
	printf("\t\t            <: Go to First Data\n");//
	printf("\t\t            >: Go to Last Data\n");//
	printf("\t\t            -: Delete Data\n");//
	printf("\t\t            N: Go to Next Data\n");//
	printf("\t\t            P: Go to Previous Data\n");//
	printf("\t\t            @: Return Data\n");//
	printf("\t\t            =: Replace Data\n");//
	printf("\t\t            E: Empty All Data\n");//
	printf("\t\t            MN: Move Data Front\n");//
	printf("\t\t            MP: Move Data Rear\n");//
	printf("\t\t            Mn: Move Data End\n");//
	printf("\t\t            MI: Move Data Index  Ex) M3\n");
	printf("\t\t            R: Reverse Data\n");//
	printf("\t\t            T: Twice Data\n");//
	printf("\t\t            S: Swap Data  Ex) S3\n");//
	printf("\t\t            L: Print Data\n");
	printf("\t\t            X: Exit\n");//
	printf("\t\t=============================================\n\n");
	while (1) {
		char Input[30] = { 0 };
		int data = 0;
		printf("\t\t            Input:");
		gets(Input);
		if (Input[0] == 'X') {
			break;
		}
		for (int i = 0; i < strlen(Input); i++) {

			if (Input[i + 1] >= '0' && Input[i + 1] <= '9') { //�߰� //index�� 10 �̻� ���� ��
				i = i + 1;
				if (Input[i] >= '0' && Input[i] <= '9') {

					while (Input[i] >= '0' && Input[i] <= '9') {
						data = data * 10;
						data += Input[i] - 48;
						i++;
					}

				}
				i = 0;
			}
			switch (Input[i]) {
			case '+':
				insert(arr, Input[i + 1]);
				i++;
				break;
			case '-':
				delete(arr);
				break;
			case 'N':
				traverse_front(arr);
				break;
			case 'P':
				traverse_rear(arr);
				break;
			case '<':
				first();
				break;
			case '>':
				last(arr);
				break;
			case 'E':
				empty(arr);
				break;
			case '@':
				get_data(arr);
				break;
			case '=':
				replace(arr, Input[i + 1]);
				i++;
				break;
			case 'M':
				if (Input[i + 1] == 'N')
					move_front(arr);
				else if (Input[i + 1] == 'P')
					move_rear(arr);
				else if (Input[i + 1] == 'n')
					move_end(arr);
				else {
					move_index(arr, data);
					i++;
				}				
				break;
			case 'R':
				reverse(arr);
				break;
			case 'T':
				twice(arr);
				break;
			case 'S':
				swap(arr, data);
				i++;
				break;
			case 'L':
				print(arr);
				break;
			default:
				break;
			}
		}
		printf("\t\t                 ");
		for (int i = 0; i < strlen(arr); i++)
			if (i == now) {
				printf("(%c)", arr[i]);
			}
			else {
				printf("%c", arr[i]);
			}
		printf("\n");
	}

	return 0;
}