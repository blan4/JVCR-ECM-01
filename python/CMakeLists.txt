project(JVCR-ECM-01-PYTHON C)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_executable(JVCR-ECM-01-PYTHON ${PY_SOURCES})

target_link_libraries(JVCR-ECM-01-PYTHON ${PYTHON_LIBRARIES} JVCR-ECM-01 m glfw ${OPENGL_gl_LIBRARY} ${PNG_LIBRARY})