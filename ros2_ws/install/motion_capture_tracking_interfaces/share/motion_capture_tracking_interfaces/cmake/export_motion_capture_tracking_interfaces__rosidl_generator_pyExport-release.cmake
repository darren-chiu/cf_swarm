#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "motion_capture_tracking_interfaces::motion_capture_tracking_interfaces__rosidl_generator_py" for configuration "Release"
set_property(TARGET motion_capture_tracking_interfaces::motion_capture_tracking_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(motion_capture_tracking_interfaces::motion_capture_tracking_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmotion_capture_tracking_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASE "libmotion_capture_tracking_interfaces__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS motion_capture_tracking_interfaces::motion_capture_tracking_interfaces__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_motion_capture_tracking_interfaces::motion_capture_tracking_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libmotion_capture_tracking_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
