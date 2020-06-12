add_library(bind_a lib/lib.cpp)

add_executable(itcppcon20_sl ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(itcppcon20_sl bind_a)
target_include_directories(itcppcon20_sl PUBLIC ${PROJECT_SOURCE_DIR}/static-lib)