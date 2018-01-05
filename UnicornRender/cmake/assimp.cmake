# Copyright (C) 2017 by Godlike
# This code is licensed under the MIT license (MIT)
# (http://opensource.org/licenses/MIT)

set(ASSIMP_DOUBLE_PRECISION OFF CACHE BOOL "Flag to override default ASSIMP_DOUBLE_PRECISION value")
set(ASSIMP_OPT_BUILD_PACKAGES OFF CACHE BOOL "Flag to override default ASSIMP_OPT_BUILD_PACKAGES value")
set(ASSIMP_ANDROID_JNIIOSYSTEM OFF CACHE BOOL "Flag to override default ASSIMP_ANDROID_JNIIOSYSTEM value")
set(ASSIMP_NO_EXPORT OFF CACHE BOOL "Flag to override default ASSIMP_NO_EXPORT value")

set(ASSIMP_BUILD_ZLIB OFF CACHE BOOL "Flag to override default ASSIMP_BUILD_ZLIB value")
set(ASSIMP_BUILD_ASSIMP_TOOLS OFF CACHE BOOL "Flag to override default ASSIMP_BUILD_ASSIMP_TOOLS value")
set(ASSIMP_BUILD_SAMPLES OFF CACHE BOOL "Flag to override default ASSIMP_BUILD_SAMPLES value")

set(ASSIMP_BUILD_TESTS OFF CACHE BOOL "Flag to override default ASSIMP_BUILD_TESTS value")
set(ASSIMP_COVERALLS OFF CACHE BOOL "Flag to override default ASSIMP_COVERALLS value")

set(ASSIMP_ROOT_DIR "${UNICORN_RENDER_ROOT}/external/assimp" CACHE STRING "Path to Assimp root directory")
set(ASSIMP_INCLUDE_DIR "${ASSIMP_ROOT_DIR}/include" CACHE STRING "Path to Assimp include directory")

set(ASSIMP_CONFIG_PATH "${CMAKE_CURRENT_BINARY_DIR}/external/assimp/include" CACHE STRING "Path to generated config file")
set(ASSIMP_INCLUDE_DIRS  ${ASSIMP_CONFIG_PATH} ${ASSIMP_INCLUDE_DIR})

set(ASSIMP_LIB "assimp" CACHE STRING "Name of Assimp library")

set(ASSIMP_BUILD_3DS_IMPORTER OFF)
set(ASSIMP_BUILD_AMF_IMPORTER OFF)
set(ASSIMP_BUILD_AC_IMPORTER OFF)
set(ASSIMP_BUILD_ASE_IMPORTER OFF)
set(ASSIMP_BUILD_ASSBIN_IMPORTER OFF)
set(ASSIMP_BUILD_ASSXML_IMPORTER OFF)
set(ASSIMP_BUILD_B3D_IMPORTER OFF)
set(ASSIMP_BUILD_BVH_IMPORTER OFF)
set(ASSIMP_BUILD_COLLADA_IMPORTER OFF)
set(ASSIMP_BUILD_CSM_IMPORTER OFF)
set(ASSIMP_BUILD_HMP_IMPORTER OFF)
set(ASSIMP_BUILD_IRRMESH_IMPORTER OFF)
set(ASSIMP_BUILD_IRR_IMPORTER OFF)
set(ASSIMP_BUILD_LWO_IMPORTER OFF)
set(ASSIMP_BUILD_LWS_IMPORTER OFF)
set(ASSIMP_BUILD_MD2_IMPORTER OFF)
set(ASSIMP_BUILD_MD3_IMPORTER OFF)
set(ASSIMP_BUILD_MD5_IMPORTER OFF)
set(ASSIMP_BUILD_MDC_IMPORTER OFF)
set(ASSIMP_BUILD_MDL_IMPORTER OFF)
set(ASSIMP_BUILD_NFF_IMPORTER OFF)
set(ASSIMP_BUILD_NDO_IMPORTER OFF)
set(ASSIMP_BUILD_IFC_IMPORTER OFF)
set(ASSIMP_BUILD_BLEND_IMPORTER OFF)
set(ASSIMP_BUILD_COB_IMPORTER OFF)
set(ASSIMP_BUILD_MS3D_IMPORTER OFF)
set(ASSIMP_BUILD_PLY_IMPORTER OFF)
set(ASSIMP_BUILD_OPENGEX_IMPORTER OFF)
set(ASSIMP_BUILD_OGRE_IMPORTER OFF)
set(ASSIMP_BUILD_XGL_IMPORTER OFF)
set(ASSIMP_BUILD_STL_IMPORTER OFF)
set(ASSIMP_BUILD_SMD_IMPORTER OFF)
set(ASSIMP_BUILD_SIB_IMPORTER OFF)
set(ASSIMP_BUILD_RAW_IMPORTER OFF)
set(ASSIMP_BUILD_Q3BSP_IMPORTER OFF)
set(ASSIMP_BUILD_Q3D_IMPORTER OFF)
set(ASSIMP_BUILD_MMD_IMPORTER OFF)
set(ASSIMP_BUILD_3MF_IMPORTER OFF)
set(ASSIMP_BUILD_X3D_IMPORTER OFF)
set(ASSIMP_BUILD_X_IMPORTER OFF)
set(ASSIMP_BUILD_3D_IMPORTER OFF)
set(ASSIMP_BUILD_TERRAGEN_IMPORTER OFF)
set(ASSIMP_BUILD_OFF_IMPORTER OFF)
set(ASSIMP_BUILD_DXF_IMPORTER OFF)

