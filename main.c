#include <stdio.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

void lua_example_dofile(void) {
	// TO DO: do some magic
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);			// include lua library in lua script
	luaL_dofile(L,"/Users/BURL1/Documents/CProject/CProject/CProject_Test/myscript.lua");
	lua_close(L);
}


int main(int argc, char **argv)
{
    
    lua_example_dofile();
	printf("hello world\n");
    
	return 0;
}
