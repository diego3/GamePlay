#ifndef LUA_HEIGHTFIELD_H_
#define LUA_HEIGHTFIELD_H_

namespace gameplay
{

// Lua bindings for HeightField.
int lua_HeightField__gc(lua_State* state);
int lua_HeightField_addRef(lua_State* state);
int lua_HeightField_getArray(lua_State* state);
int lua_HeightField_getColumnCount(lua_State* state);
int lua_HeightField_getHeight(lua_State* state);
int lua_HeightField_getRefCount(lua_State* state);
int lua_HeightField_getRowCount(lua_State* state);
int lua_HeightField_release(lua_State* state);
int lua_HeightField_static_create(lua_State* state);
int lua_HeightField_static_createFromImage(lua_State* state);
int lua_HeightField_static_createFromRAW(lua_State* state);

void luaRegister_HeightField();

}

#endif
