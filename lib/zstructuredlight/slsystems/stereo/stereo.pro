include(../../../../NEUVision.pri)

TEMPLATE      = lib
CONFIG       += plugin
QT           -= gui
QT           += widgets concurrent
TARGET        = $$qtLibraryTarget(zslstereoplugin)
DESTDIR       = $$Z3D_BUILD_DIR/plugins/structuredlight
VERSION       = $$Z3D_VERSION

HEADERS       = \
    zdualcamerastereosls.h \
    zsinglecamerastereosls.h \
    zstereosls.h \
    zstereoslsplugin.h \
    zstereosystemimpl.h \

SOURCES       = \
    zdualcamerastereosls.cpp \
    zsinglecamerastereosls.cpp \
    zstereosls.cpp \
    zstereoslsplugin.cpp \
    zstereosystemimpl.cpp \

FORMS        +=



###############################################################################
# Core
include($$PWD/../../../zcore/zcore.pri)

###############################################################################
# Structured light system
include($$PWD/../../zstructuredlight.pri)

###############################################################################
# Point cloud
include($$PWD/../../../zpointcloud/zpointcloud.pri)

###############################################################################
# Camera acquisition
include($$PWD/../../../zcameraacquisition/zcameraacquisition.pri)

###############################################################################
# Camera calibrations
include($$PWD/../../../zcameracalibration/zcameracalibration.pri)

###############################################################################
# Calibrated camera
include($$PWD/../../../zcalibratedcamera/zcalibratedcamera.pri)

###############################################################################
# Camera calibrator
include($$PWD/../../../zcameracalibrator/zcameracalibrator.pri)

###############################################################################
# OpenCV
include($$PWD/../../../../3rdparty/opencv.pri)
