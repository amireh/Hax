# Find libyajl

FIND_PATH(YAJL_INCLUDE_DIR yajl/yajl_common.h)

SET(YAJL_NAMES ${YAJL_NAMES} yajl libyajl)
FIND_LIBRARY(YAJL_LIBRARY NAMES ${YAJL_NAMES} PATH)

IF(YAJL_INCLUDE_DIR AND YAJL_LIBRARY)
	SET(YAJL_FOUND TRUE)
ENDIF(YAJL_INCLUDE_DIR AND YAJL_LIBRARY)

IF(YAJL_FOUND)
	IF(NOT Yajl_FIND_QUIETLY)
		MESSAGE(STATUS "Found Yajl: ${YAJL_LIBRARY}")
	ENDIF (NOT Yajl_FIND_QUIETLY)
ELSE(YAJL_FOUND)
	IF(Yajl_FIND_REQUIRED)
		MESSAGE(FATAL_ERROR "Could not find yajl")
	ENDIF(Yajl_FIND_REQUIRED)
ENDIF(YAJL_FOUND)
