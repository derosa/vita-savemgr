#ifndef __DISPLAY_H__
#define __DISPLAY_H__

enum {
    CANCEL = 0,
    CONFIRM = 1,
};

void init_console();
int confirm(const char *msg, float zoom);
int alert(const char *msg, float zoom);
void clear_screen();
void init_progress(int max);
void init_progress_title(int max, char* title);
void incr_progress();

#endif
