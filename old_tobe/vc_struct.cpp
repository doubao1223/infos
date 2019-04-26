
//-----------------------------------------------------------------
struct MSGMAP_ETRY {
    UINT nMessage; //消息
    LONG (*pfn) (HWND, UINT, WPARAM, LPARAM); //消息的处理函数
};

#define dim(x) (sizeof(x) / sizeof(x[0]))


//-----------------------------------------------------------------
struct MSGMAP_ENTRY _messageEntries[] =
{
    WM_CREATE,   OnCreate,
    WM_PAINT,    OnPaint,
    WM_SIZE,     OnSize,
    WM_COMMAND,  OnCommand,
    WM_SETFOCUS, OnSetFocus,
    WM_CLOSE,    OnClose,
    WM_DESTORY,  OnDestory,
};


//-----------------------------------------------------------------
struct MSGMAP_ENTRY _commandEntries =
{
    ID_APP_ABOUT,    OnAbout,
    ID_APP_FILEOPEN, OnFileOpen,
    ID_APP_SAVE_AS,  OnSaveAs,
};


