# 实验报告1
##1.实现姓名学号输出：
###输入：  
姓名：lvkesi   
学号：2012019010013   
输出频率：3   
持续时间：30   
###输出：   

![输出截图1](http://ww4.sinaimg.cn/mw1024/d81f7056gw1f4renwchxpj20vt08ojxu.jpg)
###分析：
程序成功地读入了我们设置的参数（姓名，学号等），并且根据输入的参数得出了相应的结果。
如输出带有姓名和学号，没3ns输出一次，在30ns时仿真结束。
##2.通过grep语句来实现信息提取：
###结果如图：
![输出截图2](http://ww2.sinaimg.cn/mw1024/d81f7056gw1f4renzj7a9j20zh05o79i.jpg)   
![输出截图3](http://ww4.sinaimg.cn/mw1024/d81f7056gw1f4reo1b6twj20y6032q59.jpg)
###分析：
通过grep命令，完成了对特定信息的抓取。
##3.通过wc来统计输出总次数
###结果如图：
![输出截图3](http://ww4.sinaimg.cn/mw1024/d81f7056gw1f4reo35jmsj20xv01qgm9.jpg)
###分析：
由于程序在仿真时，会有4行的仿真过程信息输出，且我在系统开始仿真时设置输出“start“，占了一行。   
所以再用wc命令统计总行数是5+10=15行。   
由于每次输出都是一样的，所以通过grep输出信息后，再用wc来统计行数。
![输出截图3](http://ww4.sinaimg.cn/mw1024/d81f7056gw1f4rkpk4ym9j20k401n3z5.jpg)
可见输出了10次，与每3ns输出一次，仿真30ns相符。