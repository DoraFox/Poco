include(CMakeFindDependencyMacro)
find_dependency(PocoFoundation)
if(ON)
	if(CMAKE_VERSION VERSION_LESS "3.10")
		list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/V39")
	endif()
	find_dependency(EXPAT REQUIRED)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/PocoXMLTargets.cmake")