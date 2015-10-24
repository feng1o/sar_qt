#　　　PC与信号处理机之间的通信协议说明    
**待完善:**  
 　1.界面美化  
 　2.菜单栏实现类似按钮功能   
 　3.socket通信优化。  
    
    通信命令及协议格式如下：  
        1、状态回传命令  
          命令：SAR_STATE?:   
          说明：16进制发送5个word  
          回复命令：SAR_STATE：XXXX  
          说明：16进制回复7个word，XXXX为当前信号处理机的工作状态。  
        2、射频参数设置命令  
          文件格式：  
          文件名：RF_parameter.txt
          文件内容：start：
          1 中心频率(单位MHz)
          2 带宽(单位MHz)
          3 脉冲重复频率
          4 脉冲宽度
          5 衰减器dB
          6调谐频率(NCO)
          endx(结束)
          回复：RF_RESET_S (成功)或者RF_RESET_F（失败）
          
        3、数据读取
            数据存储是使用基带数据、时间、姿态信息打包以文件方式按PRF连续存入。
          3.1文件列表读取命令：READ_FILELIST
            说明：文件列表读取命令由READ_ FILELIST独立组成,用于读取存储数据文件中的所有文件名称及文件总数;
            返回值: FILELIST+文件数量(2个word)+所有文件名称(文件名之间用空格分开)+ENDLIST(结束符);
        3.2文件读取命令：
            单个文件读取命令：READ_FILE:XXXXXX ENDX(有空格)
            多个文件读取命令：READ_FILE:XXXXXX ALLX(有空格)
            说明：1）读取单个文件命令由READ_FILE:命令+文件名（XXXXXX）+结束符(ENDX)，
                   其中XXXXXX代表文件名(出现在文件列表中的文件)，ENDX代表结束符；
                  2）读取多个文件命令由READ_FILE:命令+文件名（XXXXXX）+全部标识(ALLX)，
            其中XXXXXX代表文件名(出现在文件列表中的文件)，ALLX代表以XXXXXX文件名为开始的之后的所有文件；
            回复：STDING 
        		….（传输文件并按指定路径存储）
        	  RDfinished
        
        3.3文件删除命令：
            DELETE_FILE:XXXXXX-XXXXXX
            说明：删除文件命令由DELETE_FILE:命令+参数（XXXXXX-XXXXXX），
             其中XXXXXX-XXXXXX代表时间:XX时XX分XX秒- XX时XX分XX秒文件，缺省不删除；
            为ALL时，全部删除；
            回复：DELETE_SUCCESS （删除成功）或者DELETE_failed(删除失败)
        3.4格式化命令：
             FORMAT_FILE 
             说明：格式化命令：将格式化文件存放的文件夹
             回复：FORMAT _SUCCESS （格式化成功）或者FORMAT _failed(格式化失败)
        
        4、界面风格说明
              上位机环境如下：
              操作系统：Windows XP、WIN7
            	编译环境：vs2012 qt  
　　　　　　　![](https://github.com/feng1o/sar_qt/raw/pic/tu/tu.jpg)
           
        图1 测试界面及部分菜单栏               图2 文件读取界面图
         
        图3 测试命令界面图
          说明:
               1、	初级版本界面由菜单栏、绘图区和状态栏构成；绘图区主要绘制读取到的文件数据中的数据；
               2、	图2显示了文件读取界面中的简单信息；
               3、	图3显示了调试时的测试命令界面。
                  在控制命令菜单栏中，第一个系统参数配置命令将存储在文件中的配置参数文件传输到数据处理器中对下位机系统进行配置；点击第二个菜单项弹出参数设置测试命令界面。
        
