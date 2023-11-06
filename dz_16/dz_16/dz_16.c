#include <stdio.h>
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(" >\n");
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * 10;
		}
	}
}

int findMin() {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}return min;
}

void multiply() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * -1;
		}
	}
}

void replace() {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("Содержимое массива:");
		printElements();
		printf("Выберите нужную вам операцию:\n");
		printf("1: Ввести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Все четные элементы массива умножить на -1\n");
		printf("5: Все элементы массива имеющие значение меньше 4 заменить на 4\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			keyboardInput();
			break;
		case 2:
			oddsX10();
			break;
		case 3:
		{
			int min = findMin();
			printf("min = % d\n", min);
		}
		break;
		case 4:
			multiply();
			break;
		case 5:
			replace();
			break;
		}
	} while (item != 0);

} 
