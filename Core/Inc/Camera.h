#include "main.h"
#include "ov5640.h"
#include "ov5640_reg.h"

#define imgSize 9600

extern DCMI_HandleTypeDef hdcmi;
extern DMA_HandleTypeDef hdma_dcmi;
extern UART_HandleTypeDef huart2;
extern I2C_HandleTypeDef hi2c3;

#ifndef INC_CAMERA_H_
#define INC_CAMERA_H_

uint32_t img[imgSize];
void Camera_init();
#endif /* INC_CAMERA_H_ */
