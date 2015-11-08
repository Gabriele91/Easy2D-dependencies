#ifndef EASY2DLUA_H
#define EASY2DLUA_H

#if defined(USE_LUA)  
	#include <lua/lua.hpp>
#elif defined(USE_LUA_JIT)
	#error "LuaJIT not support"
#else
	#error "Error, must to be define USE_LUA or USE_LUA_JIT"
#endif


namespace Easy2D
{
#include <LuaBridge/LuaBridge.h>
#include <LuaBridge/RefCountedObject.h>
#if defined(USE_LUABRIDGE_PTR)
    #include <LuaBridge/RefCountedPtr.h>
#endif
};

#endif
