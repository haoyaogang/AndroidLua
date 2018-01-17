//
// Created by Administrator on 2018/1/17.
//

#ifndef ANDROIDLUA_SHELL_COMMAND_H
#define ANDROIDLUA_SHELL_COMMAND_H
#define CMD_HOME  "input event 4"
#define CMD_INPUT_TEXT  "am broadcast -a ADB_INPUT_TEXT --es msg "
#define USER  "--user 0"
#define contact(x, y) x##y

int press_home();

int input_text(char *content);

int run_app(char *package_name);

int kill_app(char *package_name);

#endif //ANDROIDLUA_SHELL_COMMAND_H