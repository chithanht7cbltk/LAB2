/*
 * ex2.c
 *
 *  Created on: Oct 3, 2025
 *      Author: cthanh
 */

#include "ex10.h"

void clearAll(){
	HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin | EN3_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin | ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin | ENM6_Pin | ENM7_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin | SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, SET);
}

void ValidPin(int index){
	clearAll();
	if (index == 0){
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	}
	if (index == 1){
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	}
	if (index == 2){
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	}
	if (index == 3){
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
	}
}

void display7SEG(int num){
	switch (num){
	case 1:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 0:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		break;
	default:
		break;
	}
}

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
void update7SEG(int index){
	switch (index){
	case 0:
		ValidPin(0);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		ValidPin(1);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		ValidPin(2);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		ValidPin(3);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
int shift_index = 0;   // Biến điều khiển dịch sang trái

uint8_t matrix_buffer[8] =
{
	0x18, 0x3C, 0x66, 0x66, 0x7E, 0x7E, 0x66, 0x66
};

uint16_t Col_Pin[8] = {ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin,
					   ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin
};

void displayCol(int index){
	HAL_GPIO_WritePin(GPIOA, ENM0_Pin, (matrix_buffer[index] & 0x01) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM1_Pin, (matrix_buffer[index] & 0x02) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM2_Pin, (matrix_buffer[index] & 0x04) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM3_Pin, (matrix_buffer[index] & 0x08) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM4_Pin, (matrix_buffer[index] & 0x10) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM5_Pin, (matrix_buffer[index] & 0x20) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM6_Pin, (matrix_buffer[index] & 0x40) ? RESET : SET);
	HAL_GPIO_WritePin(GPIOA, ENM7_Pin, (matrix_buffer[index] & 0x80) ? RESET : SET);
//	for (int i = 0; i < MAX_LED_MATRIX; i++){
//		GPIO_PinState state = (matrix_buffer[index] & (1 << ((i + shift_index) % 8))) ? RESET : SET;
//		HAL_GPIO_WritePin(GPIOA, Col_Pin[i], state);
//	}
}

void shiftMatrixLeft() {
	for (int i = 0; i < MAX_LED_MATRIX; i++) {
		uint8_t lsb = (matrix_buffer[i] & 0x01) << 7;  // Lấy bit cao nhất (MSB)
		matrix_buffer[i] = lsb | (matrix_buffer[i] >> 1) ; // Dịch trái và nối bit MSB vào LSB
	}
}

void ClearMatrix(){
	HAL_GPIO_WritePin(GPIOB,
		ROW0_Pin | ROW1_Pin | ROW2_Pin | ROW3_Pin |
		ROW4_Pin | ROW5_Pin | ROW6_Pin | ROW7_Pin,
		SET);
	HAL_GPIO_WritePin(GPIOA,
		ENM0_Pin | ENM1_Pin | ENM2_Pin | ENM3_Pin |
		ENM4_Pin | ENM5_Pin | ENM6_Pin | ENM7_Pin,
		RESET);
}
void Set_Col(int index, GPIO_PinState state)
{
    HAL_GPIO_WritePin(GPIOB, Col_Pin[index], state);
}

int t[8]= {0};

void updateLEDMatrix(int index){
	ClearMatrix();
	switch (index){
	case 0:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, RESET);
		break;
	case 1:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
		break;
	case 2:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, RESET);
		break;
	case 3:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, RESET);
		break;
	case 4:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, RESET);
		break;
	case 5:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, RESET);
		break;
	case 6:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, RESET);
		break;
	case 7:
		displayCol(index);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, RESET);
		break;
	default:
		break;
	}
}

//Hàm dịch ký tự sang trái
void scrollleft()
{
    shift_index = (shift_index + 1) % 8;
}

