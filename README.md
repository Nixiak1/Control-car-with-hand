# Control-car-with-hand
# 基于opencv的手势识别小车

## 环境：windows+python3.10+opencv+serial
PC端+stm32端
stm32端：主控采用stm32f103c8t6，蓝牙使用HC05，使用L298N电机驱动
PC端：利用Python中的pyserial库控制接在电脑上的HC05和stm32端的HC05进行通信（双蓝牙通信），根据手势的不同控制小车的移动

效果：“右手”手心向前，小车-->前进
      “右手”手心向后，小车-->后退
      “右手”拇指向右，小车-->右转
      “右手”拇指向左，小车-->左转
      “右手”握拳，    小车-->停止
