# search the source files in the current directory and store them into the variable LIB_SRCS
aux_source_directory(. LIB_SRCS)

# Create a static library
add_library(swap STATIC ${LIB_SRCS})