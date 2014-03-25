// gchat macros
//
#define GIF_LOGIN_MSG 1			//用户登录
#define GIF_CALL_MSG 2			//用户呼叫
#define GIF_ADDRLIST_MSG 3		//更新联系人列表信息
#define GIF_ADD_CONTACTS_MSG 4		//添加连接信息
#define GIF_DELETE_CONTACTS_MSG 5	//删除连接信息
#define GIF_CHAT_MSG 6			//聊天信息
#define GIF_DISCONNECT_MSG 7		//用户下线信息
#define GIF_SUCCESS_N_ERROR_MSG 8	//消息请求成功或失败信息
#define GIF_OFFLINE_REQUEST_MSG 9	//发送离线消息
#define GIF_OFFLINE_MSG 10		//离线消息
#define GIF_OFFLINE_DELETE_MSG 11	//删除离线消息

// macros user with Success and Error messages
#define GIF_ERROR_LOGIN_INCORRECT 101		//错误的登录信息
#define GIF_SUCCESS_ADD_CONTACTS 102		//添加连接信息成功
#define GIF_ERROR_ADD_CONTACTS 103		//添加连接信息错误
#define GIF_SUCCESS_DELETE_CONTACTS 104		//删除连接信息成功
#define GIF_ERROR_DELETE_CONTACTS_NOT_A_CONTACT 105	//用户离线
#define GIF_ERROR_DELETE_CONTACTS_NOT_A_MEMBER 106	//无指定用户


// ginterface header
//
typedef struct _gifhdr_t
{
	unsigned int type;	//消息类型
	unsigned int length;	//消息的长度，以字节为单位
	char sender[10];	//发送方
	char receiver[10];	//接收方
	unsigned int reserved;
}gifhdr_t;


// ginterface, user status structure
//
typedef struct _user_status_t
{	
	char loginid[20];
	unsigned int status;
}user_status_t;


// ginterface, the structure used in the linked list to maintain the individual contact person's window id
//
typedef struct _contacts_chat_window_id_t
{
	char contacts_name[20];
	unsigned int window_id;
	unsigned int window_open;	//used as boolean variable(opened or not)
	struct _contacts_chat_window_id_t *next;
}contacts_chat_window_id_t;


// ginterface, structure used while sending the offline messages
//
typedef struct _offline_msgs_send_t
{
	char sender[20];
	char dateserial[20];
	unsigned int new;
	unsigned int length;
}offline_msgs_send_t;

