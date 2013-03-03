#ifndef _PLAYER_H_
#define _PLAYER_H_

// ����ͷ�ļ�
#include <windows.h>

// ��������
// message
#define MSG_COREPLAYER  (WM_APP + 1)

// player status
enum {
    PLAYER_STOP,
    PLAYER_PLAY,
    PLAYER_PAUSE,
};

// render mode
enum {
    RENDER_LETTERBOX,
    RENDER_STRETCHED,
};

// param
enum {
    PARAM_VIDEO_WIDTH,
    PARAM_VIDEO_HEIGHT,
    PARAM_GET_DURATION,
    PARAM_RENDER_MODE,
    PARAM_HURRY_UP,
};

// ��������
HANDLE playeropen    (char *file, HWND hwnd);
void   playerclose   (HANDLE hplayer);
void   playerplay    (HANDLE hplayer);
void   playerpause   (HANDLE hplayer);
void   playerstop    (HANDLE hplayer);
void   playerseek    (HANDLE hplayer, DWORD sec);
void   playersetrect (HANDLE hplayer, int x, int y, int w, int h);
void   playersetparam(HANDLE hplayer, DWORD id, DWORD param);
void   playergetparam(HANDLE hplayer, DWORD id, void *param);

#endif















