set(photomanager_SRCS
   photomanager.cpp
   main.cpp
 )

kde4_add_kcfg_files(photomanager_SRCS settings.kcfgc )

kde4_add_executable(photomanager ${photomanager_SRCS})

target_link_libraries(photomanager ${KDE4_KDEUI_LIBS} )

install(TARGETS photomanager ${INSTALL_TARGETS_DEFAULT_ARGS} )


########### install files ###############

install( PROGRAMS photomanager.desktop  DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES photomanager.kcfg  DESTINATION  ${KCFG_INSTALL_DIR} )
install( FILES photomanagerui.rc  DESTINATION  ${DATA_INSTALL_DIR}/photomanager )
