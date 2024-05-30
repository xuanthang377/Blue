# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/Student/Software/Espressif/frameworks/esp-idf-v5.0.2/components/bootloader/subproject"
  "E:/23-5/mcu1/build/bootloader"
  "E:/23-5/mcu1/build/bootloader-prefix"
  "E:/23-5/mcu1/build/bootloader-prefix/tmp"
  "E:/23-5/mcu1/build/bootloader-prefix/src/bootloader-stamp"
  "E:/23-5/mcu1/build/bootloader-prefix/src"
  "E:/23-5/mcu1/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/23-5/mcu1/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/23-5/mcu1/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
