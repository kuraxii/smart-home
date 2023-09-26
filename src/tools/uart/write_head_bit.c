/****************************************************************************************************
Description:                    写入头部数据的函数
Input parameters:               参数1：传入存放命令36个字节的地址
Output parameters:              
                                填入相应的头部数据

Created by:                     彭梁    (2023-9-19)
Modified by:                            (2023-3-2): 修改原因
                                        (2023-3-3):     
*******************************************************************************************************/


#include "write_head_bit.h"

void write_head_bit(unsigned char *head_data)
{
    head_data[0] = 0xdd;        //命令
    head_data[1] = 0x07;        //id
    head_data[2] = 0x24;        //数据长度
    head_data[3] = 0x00;        //保留位
}
