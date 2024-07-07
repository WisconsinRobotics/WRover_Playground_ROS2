# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_wrover_mock_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED wrover_mock_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(wrover_mock_FOUND FALSE)
  elseif(NOT wrover_mock_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(wrover_mock_FOUND FALSE)
  endif()
  return()
endif()
set(_wrover_mock_CONFIG_INCLUDED TRUE)

# output package information
if(NOT wrover_mock_FIND_QUIETLY)
  message(STATUS "Found wrover_mock: 0.0.0 (${wrover_mock_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'wrover_mock' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT wrover_mock_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(wrover_mock_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${wrover_mock_DIR}/${_extra}")
endforeach()
