#ifndef MIME_H 
#define MIME_H 
/*=========================================================================*\
* Mime support functions
* LuaSocket toolkit
*
* This module provides functions to implement transfer content encodings
* and formatting conforming to RFC 2045. It is used by mime.lua, which
* provide a higher level interface to this functionality. 
*
* RCS ID: $Id$
\*=========================================================================*/
#include <lua.h>

/*-------------------------------------------------------------------------*\
* This macro prefixes all exported API functions
\*-------------------------------------------------------------------------*/
#ifndef MIME_API
#define MIME_API extern
#endif

MIME_API int luaopen_mime(lua_State *L);

/*-------------------------------------------------------------------------*\
* Library's namespace
\*-------------------------------------------------------------------------*/
#ifndef MIME_LIBNAME
#define MIME_LIBNAME "mime"
#endif

#endif /* MIME_H */
