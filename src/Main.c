#include "/home/codeleaded/System/Static/Library/LuaLike_LS.h"

int main(int argc,char** argv){
    LuaLike_LS ll = LuaLike_LS_New("./code/Main.ll");
    LuaLike_LS_Print(&ll);
    LuaLike_LS_Free(&ll);
    return 0;
}