#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::DataSQLite" for configuration "Release"
set_property(TARGET Poco::DataSQLite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Poco::DataSQLite PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libPocoDataSQLite.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libPocoDataSQLite.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::DataSQLite )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::DataSQLite "${_IMPORT_PREFIX}/lib/libPocoDataSQLite.dll.a" "${_IMPORT_PREFIX}/bin/libPocoDataSQLite.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
