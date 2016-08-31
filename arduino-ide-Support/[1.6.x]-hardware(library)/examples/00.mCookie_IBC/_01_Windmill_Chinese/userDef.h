#define DEBUG       0       //串口调试功能  打开/关闭.
#define PIN_LED     12      //彩灯引脚.
#define PIN_MIC     A6      //麦克风引脚.
#define VOICE_MAX   1023    //声音检测的最大值.
#define LED_NUM     2       //彩灯的数量

//=================================自己动手修改参数!========================================//
//示例: 将 "#define BRIGHT_MAX 128" 修改成 "#define BRIGHT_MAX 180".                        //
//         意味着LED彩灯的显示亮度会变亮.                                                   //
//                                                                                          //
//提示: 参数修改完后，记得将代码重新上传到mBattery模块！                                    //
//==========================================================================================//
#define VOICE_MIN 400           //启动风车的声音触发值，增大该值意味着需要更大的声音去驱动风车


#define MOTOR_SPEED_MAX 100     //风车转动时的转速，设置范围-255~255，-255对应最快的转速，255对应反方向的最快速度，0对应停止
                                //注意：设置255时，风车转动较快，注意安全！ 
                                
#define TIME_RUN  10*1000       //风车启动后，电机和LED彩灯的持续工作时间。将数字“10”修改成“20”，意味着声音启动风车后，风车会工作20秒钟，然后停止
                                //数字“1000”表示1000毫秒，即计时单位是1秒，请不要修改这个“数字”.

#define BRIGHT_MAX  128         //LED彩灯显示的最大亮度。最大亮度是255，最小亮度是0

