#define DEBUG       0      //串口调试功能  打开/关闭.
#define PIN_RECV    4      //红外接收引脚
#define PIN_LED     12     //彩灯引脚
#define LED_NUM     2      //彩灯的数量 

//=================================自己动手修改参数!========================================//
//示例: 将 "#define BRIGHT_MAX 128" 修改成 "#define BRIGHT_MAX 180".                        //
//         意味着LED彩灯的显示亮度会变亮.                                                   //
//                                                                                          //
//提示: 参数修改完后，记得将代码重新上传到mBattery模块！                                    //
//==========================================================================================//
#define BRIGHT_MAX  64         //LED彩灯显示的最大亮度。最大亮度是255，最小亮度是0
