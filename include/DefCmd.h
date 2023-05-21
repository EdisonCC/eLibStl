#pragma region 命令添加到这
#define ALL_E_LIB_CMD \
rnd_ex,/*取随机数Ex*/\
L,/*unicode_base*/\
fint_text_a,/*寻找文本A*/\
find_text_w,/*寻找文本W*/\
strlen_a,/*取文本长度A*/\
wcslen_w,/*取文本长度W*/\
ator,/*弧度到角度*/\
rtoa,/*角度到弧度*/\
prime,/*是否素数*/\
message_box_w,/*延迟信息框W*/\
read_file_a,/*读入文件A*/\
read_file_w,/*读入文件W*/\
write_file_a,/*写到文件A*/\
write_file_w,/*写到文件W*/\
task_dialog_w,/*高级信息框W*/\
set_clip_board_text_w,/*置剪辑板文本W*/\
get_clip_board_text_w,/*取剪辑板文本W*/\
to_upper_w,/*到大写W*/\
to_lower_w,/*到小写W*/\
to_full_w,/*到全角W*/\
to_half_w,/*到半角W*/\
in_str_rev_w,/*倒找文本W*/\
split_w,/*分割文本W*/\
get_character_w,/*字符W*/\
get_char_code_w,/*取代码W*/\
ltrim_w,/*删收空W*/\
rtrim_w,/*删尾空W*/\
trim_w,/*删首尾空W*/\
trim_all_w,/*删全部空W*/\
left_text_t,/*取文本左边W*/\
right_text_w,/*取文本右边W*/\
mid_text_w,/*取文本中间W*/\
open_console,/*打开控制台*/\
set_console_title,/*置控制台标题W*/\
read_console_w,/*标准输入W*/\
cout_w,/*标准输出W*/\
get_console_locale,/*取控制台编码*/\
set_console_locale,/*置控制台编码*/\
get_net_work_types_w,/*枚举网络类型W*/\
Server_GetData,/*取回数据*/\
Server_GetCline,/*取回客户*/\
Server_CloseClient,/*断开客户*/\
Server_start,/*启动*/\
Server_close,/*关闭*/\
Server_is_open,/*是否已启动*/\
Server_Send,/*发送数据*/\
Clinet_connect,/*连接*/\
Clinet_close,/*关闭*/\
Clinet_GetData,/*取回数据*/\
Clinet_Send,/*发送数据*/\
Fn_EditAddText,/*编辑框.加入文本*/\
clear_folder_W,/*磁盘操作→清空目录*/\
create_dir_W,/*创建目录W*/\
remove_dir_W,/*删除目录W*/\
remove_file_W,/*删除文件W*/\
current_path_W,/*取运行目录W*/\
get_complete_path_W,/*取完整路径W*/\
normalization_path_W,/*规范化路径W*/\
get_exe_name_W,/*取执行文件名W*/\
get_cmdline_W,/*取命令行W*/\
get_env_W,/*读环境变量W*/\
set_env_W,/*写环境变量W*/\
get_special_folder_path_W,/*取特定目录W*/\
prevent_duplicate_execution_W,/*禁止程序重复运行W*/\
atomic_increment,/*原子递增*/\
atomic_exchange,/*原子赋值*/\
atomic_decrement,/*原子递减*/\
atomic_addition,/*原子运算*/\
create_coroutine,/*创建协程*/\
switch_coroutine,/*切换协程*/\
is_valid_hCoprocess,/*协程句柄是否有效*/\
delete_coroutine,/*销毁协程*/\
get_h_coroutine,/*取当前函数所在协程*/\
free_console,/*分离控制台*/\
get_ip_this,/*取本机ip*/\
kill_process,/*结束进程*/\
is_64_bit,/*是否位64位系统*/\
Media_structure,/*媒体播放构造*/\
Media_copy,/*媒体播放复制*/\
Media_destruct,/*媒体播放析构*/\
Media_open,/*媒体播放打开*/\
Media_IsVideo,/*是否为视频*/\
Media_GetHwnd,/*取句柄*/\
Media_SetHwnd,/*置句柄*/\
Media_GetMode,/*取状态*/\
Media_GetLength,/*取长度*/\
Media_GetPosition,/*取位置*/\
Media_GetTotalSec,/*取总时间*/\
Media_GetFrameRate,/*取比率*/\
Media_Play,/*播放*/\
Media_Pause,/*暂停*/\
Media_Stop,/*停止*/\
Media_GetMCIAlias,/*取别名*/\
Media_Close,/*关闭*/\
Media_SetVolume,/*置音量*/\
Media_GetVolume,/*取音量*/\
Media_continue,/*继续*/\
Media_GetChannel,/*取媒体声道*/\
Media_SetChannel,/*置媒体声道*/\
Media_GetFrames,/*取帧数*/\
Media_GetMediaVolume,/*取媒体音量*/\
Media_SetMediaVolume,/*置媒体音量*/\
Media_SetPlaySpeed,/*置播放速度*/\
Media_GetPlaySpeed,/*取播放速度*/\
Media_SetPos,/*置位置*/\
Media_SetFrame,/*跳到指定帧*/\
Media_IsOpen,/*是否已打开*/\
is_connect_to_internet,/*是否已联网*/\
check_port,/*端口是否可用*/\
send_net_msg,/*发送网络消息*/\
Fn_EditCharFromPos,/*编辑框.取坐标处字符*/\
e_coroutine_close,/*释放协程调度器*/\
e_coroutine_open,/*创建协程调度器*/\
e_hCoi2h,/*指针到调度器*/\
analog_press,/*模拟按下*/\
analog_up,/*模拟弹起*/\
replace_substring_w,/*取CPU当前使用率*/\
get_cpu_id,/*获取CPU序列号*/\
network_post/*网页访问*/\
,capitalize_first_letter/*首字母大写*/\
,Fn_BtnGetIdealSize/*按钮.取理想尺寸*/\
,Fn_UpDownSetAccel/*调节器.置加速度*/\
,e_debugput/*调试*/\
,e_CallEfun/*执行函数*/\
,_e_delay/*延迟Ex*/\
,e_GetTickCount_ex/*取启动时间Ex*/\
,e_eLibCallEfun/*调用易库函数*/\
,e_Open_File_Dialog_A/*文件选择夹*/\
,e_Open_File_Dialog_W/*文件选择夹W*/\
,e_BrowseForFolder_W/*文件浏览夹W*/\
,e_BrowseForFolder_A/*文件浏览夹*/\
,e_lib_CreateEbds/*文件浏览夹*/\
,edbs_ex_structure/*EDBS构造*/\
,edbs_ex_copy/*EDB复制*/\
,edbs_ex_destruct/*析构*/\
,edbs_ex_open/*打开*/\
,edbs_get_row_num/*取记录数*/\
,edbs_ex_addpendnop/*加空记录*/\
,edbs_set_current/*跳到*/\
,edbs_read/*读*/\
,edbs_write/*写*/\
, edbs_close/*关闭*/\
,edbs_next/*EDB.下一行*/\
,edbs_previous/*EDB.上一行*/\
,edbs_clean/*EDB.清空*/\
,edbs_begin/*EDB.开启事务*/\
,edbs_commit/*EDB.提交事务*/\
,edbs_get_current/*EDB.当前行*/\
,edbs_get_column_name/*EDB.字段名*/\
,edbs_get_column_num/*EDB.字段数*/\
,edbs_set_column_name/*EDB.置字段名*/\
,Fn_EditCanUndo/*编辑框.是否可撤销*/\
,Fn_EditEmptyUndoBuf/*编辑框.清空撤销队列*/\
,Fn_EditGetFirstLine/*编辑框.取第一可见行*/\
,Fn_EditGetLineCount/*编辑框.取行数*/\
,Fn_EditGetModify/*编辑框.取修改标志*/\
,Fn_EditHideBallloonTip/*编辑框.隐藏气球提示*/\
,Fn_EditLineLength/*编辑框.取某行长度*/\
,Fn_EditGetLine/*编辑框.取行文本*/\
,Fn_EditGetMargins/*编辑框.取边距*/\
,Fn_EditGetRect/*编辑框.取显示矩形*/\
,Fn_EditLineFromChar/*编辑框.字符位置到行数*/\
,Fn_EditLineIndex/*编辑框.取某行第一字符位置*/\
,Fn_EditScroll/*编辑框.滚动*/\
,Fn_EditLineScroll/*编辑框.滚动行*/\
,Fn_EditPosFromChar/*编辑框.取字符坐标*/\
,Fn_EditReplaceSel/*编辑框.替换选中文本*/\
,Fn_EditSetMargins/*编辑框.置边距*/\
,Fn_EditSetModify/*编辑框.置修改标志*/\
,Fn_EditSetRect/*编辑框.置显示矩形*/\
,Fn_EditSetTabStop/*编辑框.置制表位*/\
,Fn_EditSetBallloonTip/*编辑框.弹出气球提示*/\
,Fn_EditUndo/*编辑框.撤销*/\
,Fn_EditPaste/*编辑框.粘贴*/\
,Fn_EditCopy/*编辑框.复制*/\
,Fn_EditSelAll/*编辑框.全选*/\
,eto_wstring/*到文本W*/\
,e_malloc/*内存申请*/\
,e_free/*内存释放*/\
,clearConsole/*清空控制台*/\
,e_WriteMem/*写入内存*/\
,Fn_UpDownGetAccel/*调节器.取加速度*/\
,g_trim_leading_zeros/*删文本左侧无效零*/\
,g_extract_shortest_matching_text/*取中间文本*/\
, g_byte_array_to_string/*字节集到十进制文本A*/\
, g_byte_array_to_wstring/*字节集到十进制文本W*/\
,g_concatenate_wstrings/*拼接文本W*/\
,g_is_inside_virtual_machine/*是否运行在虚拟机*/\
,g_get_all_py/*取所有发音W*/\
,g_get_py_count/*取发音数量W*/\
,g_get_py/*取拼音W*/\
,g_get_py_sm/*取声母W*/\
,g_get_py_ym/*取韵母W*/\
,Fn_SendLabelMsg/*调用标签反馈事件*/\
,e_debugput_img/*调试图片*/\
,e_debugput_w/*调试宽字符*/\
,Fn_MenuConstructor/*菜单.构造*/\
,Fn_MenuDestructor/*菜单.析构*/\
,Fn_MenuCopy/*菜单.复制*/\
,Fn_MenuAttach/*菜单.依附句柄*/\
,Fn_MenuInsertItem/*菜单.插入项目*/\
,Fn_MenuDetach/*菜单.拆离句柄*/\
,Fn_MenuSetDelFlag/*菜单.置回收标志*/\
,Fn_MenuCreatePopupMenu/*菜单.创建弹出式菜单*/\
,Fn_MenuGetCurrentMenu/*菜单.取当前菜单*/\
,Fn_MenuDeleteItem/*菜单.删除项目*/\
,Fn_MenuGetCount/*菜单.取项目数*/\
,Fn_MenuGetCaption/*菜单.取标题*/\
,Fn_MenuSetCheck/*菜单.置选中状态*/\
,Fn_MenuGetCheck/*菜单.取选中状态*/\
,Fn_MenuSetRadioCheck/*菜单.置单选状态*/\
,Fn_MenuGetRadioCheck/*菜单.取单选状态*/\
,Fn_MenuSetDefault/*菜单.置默认状态*/\
,Fn_MenuGetDefault/*菜单.取默认状态*/\
,Fn_MenuSetDisable/*菜单.置禁止状态*/\
,Fn_MenuGetDisable/*菜单.取禁止状态*/\
,Fn_MenuSetHilite/*菜单.置高亮状态*/\
,Fn_MenuGetHilite/*菜单.取高亮状态*/\
,Fn_MenuTrackPopupMenu/*菜单.弹出跟踪式菜单*/\
,Fn_MenuSetCaption/*菜单.置标题*/\
,Fn_MenuCreateMenu/*菜单.创建水平菜单*/\
,Fn_MenuSetMenu/*菜单.置窗口菜单*/\
,Fn_MenuGetMenu/*菜单.取窗口菜单*/\
,Fn_MenuReset/*菜单.重置*/\
,Fn_MenuSetEventReceiver/*菜单.置事件接收器*/\
,Fn_InputBox/*输入框*/\









/*此下两个完全没必要*/
/*,g_comp_py_code/*输入字比较W*/
/*,g_comp_py/*发音比较W*/

#pragma endregion





#pragma region 对象添加到这
#define ALL_E_LIB_CLASS \
CtButtonW,/*按钮W*/\
CtEdit,/*编辑框W*/\
severex,/*服务器Ex*/\
clinetex,/*客户端Ex*/\
hCoprocessD,/*协程句柄*/\
media_play_ex,/*媒体播放*/\
TaskDialog_Button_Type,/*高级信息框按钮*/\
UpDown,/*调节器*/\
hCoroutine,/*协程调度器*/\
edbs_ex,/*edbs*/\
CtCheckButtonW,/*选择框*/\
CtCommandLink/*命令链接*/\
,CtLabelW/*标签W*/\
,ClMenu/*菜单*/\
,CtListBoxW/*列表框*/\




#pragma endregion