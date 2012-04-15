# add sources
SET(Hax_Bulk_SRCS

  ${CMAKE_SOURCE_DIR}/include/Hax/Archiver.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Connection.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Event.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/EventListener.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/EventManager.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Identifiable.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Loggable.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/LuaExporter.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Hax.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Exception.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Log.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Platform.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/ScriptEngine.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/Utility.hpp

  ${CMAKE_SOURCE_DIR}/include/Hax/log4cpp/FileLayout.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/log4cpp/SyslogLayout.hpp
  ${CMAKE_SOURCE_DIR}/include/Hax/log4cpp/VanillaLayout.hpp

  Hax.cpp
  FileManager.cpp
  LogManager.cpp
  Configurator.cpp
  Configurable.cpp
  
  Event.cpp
  EventListener.cpp
  EventManager.cpp
  
  Identifiable.cpp
  ScriptEngine.cpp
  
  log4cpp/VanillaLayout.cpp
  log4cpp/FileLayout.cpp
  log4cpp/SyslogLayout.cpp

  binreloc/binreloc.c  
)

SET(USING_TOLUAPP 1)

# using tolua++ for Lua bindings
if(USING_TOLUAPP)
  # command for generating the bindings
  ADD_CUSTOM_COMMAND(
    OUTPUT  ${CMAKE_CURRENT_SOURCE_DIR}/tolua++/wrappers/Hax_wrap.cxx
    COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/tolua++/generate_wrappers.sh ${CMAKE_CURRENT_SOURCE_DIR}/tolua++
    COMMENT "Generating Hax tolua++ bindings")

  LIST(APPEND Hax_Bulk_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/tolua++/wrappers/Hax_wrap.cxx)
endif()

# on Windows we use a static version of the library
IF(WIN32)
  SET(LIB_TYPE STATIC)
ELSE()
  SET(LIB_TYPE SHARED)
ENDIF()

IF(UNIX AND NOT APPLE)
ENDIF()

IF(APPLE)
  set_target_properties(Hax
     PROPERTIES BUILD_WITH_INSTALL_RPATH 1
     INSTALL_NAME_DIR "@executable_path/../Plugins")
ENDIF()

IF(USING_TOLUAPP)
  ADD_CUSTOM_TARGET(HaxLua DEPENDS tolua++/wrappers/Hax_wrap.cxx)
  IF(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/tolua++/wrappers/Hax_wrap.cxx")
    MESSAGE(STATUS "Lua bindings are not yet generated, forcing generation. Generate manually using make HaxLua")
    ADD_DEPENDENCIES(Hax HaxLua)
  ENDIF()
  SET_SOURCE_FILES_PROPERTIES(${CMAKE_CURRENT_SOURCE_DIR}/tolua++/wrappers/Hax_wrap.cxx PROPERTIES GENERATED 1)
ENDIF()


# the library
ADD_LIBRARY(Hax ${LIB_TYPE} ${Hax_Bulk_SRCS})