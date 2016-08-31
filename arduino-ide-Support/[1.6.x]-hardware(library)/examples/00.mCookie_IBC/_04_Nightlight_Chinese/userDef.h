#define DEBUG       0       //串口调试功能  打开/关闭.
#define PIN_KEY     6       //碰撞传感器引脚.
#define PIN_LED     12      //蜂鸣器引脚.
#define PIN_LIGHT   A2      //光照传感器引脚.
#define PIN_MIC     A6      //声音传感器引脚.
#define VOICE_MAX   1023    //声音检测的触发值
#define LED_NUM     2       //彩灯数量
#define LIGHT_MIN   0       

//=================================自己动手修改参数!========================================//
//示例: 将 "#define BRIGHT_MAX 128" 修改成 "#define BRIGHT_MAX 180".                        //
//         意味着LED彩灯的显示亮度会变亮.                                                   //
//                                                                                          //
//提示: 参数修改完后，记得将代码重新上传到mBattery模块！                                    //
//==========================================================================================//
#define BRIGHT_MAX  128     //LED彩灯显示的最大亮度。最大亮度是255，最小亮度是0.

#define VOICE_MIN   400      //打开路灯的声音触发值，增大该值意味着需要更大的声音去打开路灯

#define LIGHT_MAX   200     //光照检测的触发值。大于该值，即认为是亮；小于该值，即认为是暗。
                            //如果你想在周围变暗一些后就能够打开路灯，尝试把这个数值调大一些.

#define TIME_ON     10 * 1000   //打开路灯后，LED灯的持续工作时间。将数字“10”修改成“20”，意味着路灯点亮后，路灯会持续亮20秒钟，然后关闭
                                //数字“1000”表示1000毫秒，即计时单位是1秒，请不要修改这个“数字”.
