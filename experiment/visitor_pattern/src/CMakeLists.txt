add_library(procedural SHARED
    DrawAllShapes.cpp
    DrawCircle.cpp
    DrawSquare.cpp
    DrawTriangle.cpp
)

target_include_directories(procedural
    PUBLIC ${PROJECT_SOURCE_DIR}\\experiment\\visitor_pattern\\procedural\\include
)

set_target_properties(procedural PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

target_compile_definitions(procedural PRIVATE PROCEDURAL_EXPORTS)