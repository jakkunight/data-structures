# Version mímima de CMake para utilizar este archivo:
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto:
project(datastructures)

# Añade una librería al proyecto (taylor_series) del tipo indicado a continuación (STATIC)
# a partir de los siguientes archivos (headers/taylor.h y sources/taylor.cpp):
add_library(
	data_structures STATIC
	headers/data_structures.h
	sources/data_structures.cpp
	)

# Crea un ejecutable (taylor) a partir de un fichero de código (sources/main.cpp)
add_executable(ds sources/main.cpp)

# Setea el directorio de inclusion de ficheros ("${CMAKE_CURRENT_SOURCE_DIR}/headers/") para un target (taylor_series):
target_include_directories(data_structures PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers/")

# Enlaza el primer target (el ejecutable taylor) con las librerías mencionadas (taylor_series)
# como indica el segundo argumento (SHARED):
target_link_libraries(ds
	data_structures
	)

# Podemos optimizar aun más este archivo mediante el uso de listas y bucles.
# Entonces, el archivo quedaría algo así:
# set(CLASES 
#     tayler
#     )
# foreach(clase ${CLASES})
# add_library(clase STATIC
#      include_dir/clase.h
#      source_dir/clase.cpp
#     )
# endforeach(clase ${CLASES})
# foreach(clase ${CLASES})
# target_include_directories(${clase} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include_dir/")
# endforeach(clase ${CLASES})



