# Install script for directory: /home/Yiran/dde-session-shell-repack-main

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/Yiran/dde-session-shell-repack-main/build/tests/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/Yiran/dde-session-shell-repack-main/build/plugins/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/Yiran/dde-session-shell-repack-main/build/src/pam-inhibit-autologin/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/Yiran/dde-session-shell-repack-main/build/dde-lock")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/dde-lock")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/Yiran/dde-session-shell-repack-main/build/CMakeFiles/dde-lock.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/Yiran/dde-session-shell-repack-main/build/lightdm-deepin-greeter")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightdm-deepin-greeter")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/Yiran/dde-session-shell-repack-main/build/CMakeFiles/lightdm-deepin-greeter.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/Yiran/dde-session-shell-repack-main/files/snipe/deepin-greeter")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/deepin/greeters.d" TYPE PROGRAM FILES
    "/home/Yiran/dde-session-shell-repack-main/files/snipe/scripts/00-xrandr"
    "/home/Yiran/dde-session-shell-repack-main/files/snipe/scripts/10-cursor-theme"
    "/home/Yiran/dde-session-shell-repack-main/files/snipe/scripts/lightdm-deepin-greeter"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lightdm/lightdm.conf.d" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/50-deepin.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dde-session-shell/greeters.d" TYPE PROGRAM FILES "/home/Yiran/dde-session-shell-repack-main/files/pre-greeter")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dde-session-shell/translations" TYPE FILE FILES
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ady.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_af.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_af_ZA.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ak.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_am.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_am_ET.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ar.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ar_EG.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ast.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_az.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_bg.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_bn.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_bo.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_bqi.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_br.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ca.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_cgg.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_cs.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_da.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_de.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_de_CH.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_de_DE.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_el.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_el_GR.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_en.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_en_AU.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_en_GB.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_en_NO.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_en_US.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_eo.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_es.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_et.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_eu.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_fa.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_fi.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_fil.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_fr.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_gl.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_gl_ES.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_he.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_hi_IN.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_hr.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_hu.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_hy.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_id.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_id_ID.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_it.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ja.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ka.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_kab.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_kk.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_km_KH.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_kn_IN.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ko.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ku.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ku_IQ.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ky.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ky@Arab.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_la.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_lo.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_lt.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_lv.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ml.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_mn.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_mr.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ms.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_nb.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ne.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_nl.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_pa.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_pam.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_pl.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ps.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_pt.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_pt_BR.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_qu.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ro.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ru.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ru_UA.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sc.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_si.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sk.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sl.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sq.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sr.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sv.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sv_SE.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_sw.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ta.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_te.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_th.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_tr.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_tzm.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ug.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_uk.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_ur.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_uz.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_vi.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_zh_CN.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_zh_HK.qm"
    "/home/Yiran/dde-session-shell-repack-main/build/dde-session-shell_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/lightdm/deepin" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/qt-theme.ini")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/xgreeters" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/x/lightdm-deepin-greeter.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/snipe/dde-lock.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dde-session-shell" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/dde-session-shell.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/deepin-authentication/privileges" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/lightdm-deepin-greeter.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/services" TYPE FILE FILES
    "/home/Yiran/dde-session-shell-repack-main/files/snipe/org.deepin.dde.LockFront1.service"
    "/home/Yiran/dde-session-shell-repack-main/files/snipe/org.deepin.dde.ShutdownFront1.service"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dde-session-shell" TYPE FILE FILES
    "/home/Yiran/dde-session-shell-repack-main/interface/base_module_interface.h"
    "/home/Yiran/dde-session-shell-repack-main/interface/login_module_interface.h"
    "/home/Yiran/dde-session-shell-repack-main/interface/login_module_interface_v2.h"
    "/home/Yiran/dde-session-shell-repack-main/interface/tray_module_interface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/cmake/DdeSessionShell" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/cmake/DdeSessionShellConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/pam.d" TYPE FILE FILES
    "/home/Yiran/dde-session-shell-repack-main/files/pam.d/dde-lock"
    "/home/Yiran/dde-session-shell-repack-main/files/pam.d/deepin-lightdm-autologin"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/dsg/configs/org.deepin.dde.lock/org.deepin.dde.lock.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/dsg/configs/org.deepin.dde.lock" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/configs/snipe/org.deepin.dde.lock.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/dsg/configs/org.deepin.dde.lightdm-deepin-greeter/org.deepin.dde.lightdm-deepin-greeter.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/dsg/configs/org.deepin.dde.lightdm-deepin-greeter" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/configs/snipe/org.deepin.dde.lightdm-deepin-greeter.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/dsg/configs/org.deepin.dde.session-shell/org.deepin.dde.session-shell.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/dsg/configs/org.deepin.dde.session-shell" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/configs/snipe/org.deepin.dde.session-shell.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/deepin-debug-config/deepin-debug-config.d" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/deepin-debug-config/org.deepin.dde.session-shell.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/deepin-log-viewer/deepin-log.conf.d" TYPE FILE FILES "/home/Yiran/dde-session-shell-repack-main/files/deepin-log-config/org.deepin.dde.session-shell.json")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/Yiran/dde-session-shell-repack-main/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/Yiran/dde-session-shell-repack-main/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
