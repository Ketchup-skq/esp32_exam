#include <stdio.h>
#include "esp32_s3_szp.h"
#include "ble_hidd_demo.h"
void app_main(void)
{
    bsp_i2c_init(); // I2C初始化
    pca9557_init(); // IO扩展芯片初始化
    // bsp_lcd_init();                                        // 液晶屏初始化
    // lcd_draw_pictrue(0, 0, 240, 240, logo_en_240x240_lcd); // 显示乐鑫logo图片
    // // lcd_draw_pictrue(0, 0, 320, 240, gImage_yingwu); // 显示3只鹦鹉图片

    // bsp_camera_init();
    // app_camera2LCD();
    bsp_lvgl_start();
    app_hid_ctrl();
}