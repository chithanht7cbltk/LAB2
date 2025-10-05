/*
 * ex2.h
 *
 *  Created on: Oct 3, 2025
 *      Author: cthanh
 */

#ifndef INC_EX2_H_
#define INC_EX2_H_

#include "main.h"

int hour, minute, second;

void clearAll();
void ValidPin(int index);
void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_EX2_H_ */
