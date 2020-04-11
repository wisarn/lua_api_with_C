#include <stdio.h>
#include <string.h>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#include "luaDebug.h"

int main (void) {
    char buff[256];
    int error;
    
    lua_State *L = luaL_newstate();

    lua_pushboolean(L, 1);      /* index 4 or  */
    lua_pushnumber(L, 10);      /* index 3 or  */
    lua_pushnil(L);             /* index 2 or  */
    lua_pushstring(L, "hello"); /* index 1 or -1 */
    
    /* will print: true 10 nil 'hello' */
    stackDump(L);
    
    /* will print: true 10 nil 'hello' true */
    lua_pushvalue(L, -4); stackDump(L);
    
    /* will print: true 10 true 'hello' */
    lua_replace(L, 3); stackDump(L);
    
    /* will print: true 10 true 'hello' nil nil */
    lua_settop(L, 6); stackDump(L);
    
    /* will print: true 10 nil true 'hello' nil */
    lua_rotate(L, 3, 1); stackDump(L);

    /* will print: true 10 nil 'hello' nil */
    lua_remove(L, -3); stackDump(L);
    
    /* will print: true */
    lua_settop(L, -5); stackDump(L);
    
    lua_close(L);

    return 0;
}
