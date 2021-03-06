##
# @file
# @author Emiliano Bergamaschini <ebergamaschini@mect.it>
#
# @section LICENSE
# Copyright Mect s.r.l. 2013
#
# @brief Project file for qmake
#

include(./template.pri)

HEADERS += \
    automation.h \
    page100.h \
    page200.h \
    page300.h \
    page400.h \
    page401.h \
    page402.h \
    page403.h \
    page404.h \
    page405.h \
    page201.h


FORMS += \
    page100.ui \
    page200.ui \
    page300.ui \
    page400.ui \
    page401.ui \
    page402.ui \
    page403.ui \
    page404.ui \
    page405.ui \
    page201.ui


SOURCES += \
    automation.cpp \
    page100.cpp \
    page200.cpp \
    page300.cpp \
    page400.cpp \
    page401.cpp \
    page402.cpp \
    page403.cpp \
    page404.cpp \
    page405.cpp \
    page201.cpp


RESOURCES += \
    resources.qrc


OTHER_FILES += \
    recipes/TP1043_01_A/1.csv \
    recipes/TP1043_01_A/2.csv \
    recipes/TP1043_01_B/1.csv \
    recipes/TP1043_01_B/2.csv \
    recipes/TP1057_01_A/1.csv \
    recipes/TP1057_01_A/2.csv \
    recipes/TP1057_01_B/1.csv \
    recipes/TP1057_01_B/2.csv \
    recipes/TP1070_01_A/1.csv \
    recipes/TP1070_01_A/2.csv \
    recipes/TP1070_01_B/1.csv \
    recipes/TP1070_01_B/2.csv \
    recipes/TP1070_01_C/1.csv \
    recipes/TP1070_01_C/2.csv \
    recipes/TPAC1006/1.csv \
    recipes/TPAC1006/2.csv \
    recipes/TPAC1007_03/1.csv \
    recipes/TPAC1007_03/2.csv \
    recipes/TPAC1007_LV/1.csv \
    recipes/TPAC1007_LV/2.csv \
    recipes/TPAC1007_04_AA/1.csv \
    recipes/TPAC1007_04_AA/2.csv \
    recipes/TPAC1007_04_AB/1.csv \
    recipes/TPAC1007_04_AB/2.csv \
    recipes/TPAC1007_04_AC/1.csv \
    recipes/TPAC1007_04_AC/2.csv \
    recipes/TPAC1008_01/1.csv \
    recipes/TPAC1008_01/2.csv \
    recipes/TPAC1008_02_AA/1.csv \
    recipes/TPAC1008_02_AA/2.csv \
    recipes/TPAC1008_02_AB/1.csv \
    recipes/TPAC1008_02_AB/2.csv \
    recipes/TPAC1008_02_AD/1.csv \
    recipes/TPAC1008_02_AD/2.csv \
    recipes/TPAC1008_02_AE/1.csv \
    recipes/TPAC1008_02_AE/2.csv \
    recipes/TPAC1008_02_AF/1.csv \
    recipes/TPAC1008_02_AF/2.csv \
    recipes/TPLC100_01_AA/1.csv \
    recipes/TPLC100_01_AA/2.csv \
    recipes/TPLC100_01_AB/1.csv \
    recipes/TPLC100_01_AB/2.csv \
    recipes/TPAC1008_03_AC/1.csv \
    recipes/TPAC1008_03_AC/2.csv \
    recipes/Values/1.csv \
    recipes/Values/2.csv \
    recipes/Zeroes/0.csv

recipes_TP1043_01_A.files = recipes/TP1043_01_A/1.csv recipes/TP1043_01_A/2.csv
recipes_TP1043_01_A.path = /local/data/recipe/TP1043_01_A

recipes_TP1043_01_B.files = recipes/TP1043_01_B/1.csv recipes/TP1043_01_B/2.csv
recipes_TP1043_01_B.path = /local/data/recipe/TP1043_01_B

recipes_TP1057_01_A.files = recipes/TP1057_01_A/1.csv recipes/TP1057_01_A/2.csv
recipes_TP1057_01_A.path = /local/data/recipe/TP1057_01_A

recipes_TP1057_01_B.files = recipes/TP1057_01_B/1.csv recipes/TP1057_01_B/2.csv
recipes_TP1057_01_B.path = /local/data/recipe/TP1057_01_B

recipes_TP1070_01_A.files = recipes/TP1070_01_A/1.csv recipes/TP1070_01_A/2.csv
recipes_TP1070_01_A.path = /local/data/recipe/TP1070_01_A

recipes_TP1070_01_B.files = recipes/TP1070_01_B/1.csv recipes/TP1070_01_B/2.csv
recipes_TP1070_01_B.path = /local/data/recipe/TP1070_01_B

recipes_TP1070_01_C.files = recipes/TP1070_01_C/1.csv recipes/TP1070_01_C/2.csv
recipes_TP1070_01_C.path = /local/data/recipe/TP1070_01_C

recipes_TPAC1006.files = recipes/TPAC1006/1.csv recipes/TPAC1006/2.csv
recipes_TPAC1006.path = /local/data/recipe/TPAC1006

recipes_TPAC1007_03.files = recipes/TPAC1007_03/1.csv recipes/TPAC1007_03/2.csv
recipes_TPAC1007_03.path = /local/data/recipe/TPAC1007_03

recipes_TPAC1007_LV.files = recipes/TPAC1007_LV/1.csv recipes/TPAC1007_LV/2.csv
recipes_TPAC1007_LV.path = /local/data/recipe/TPAC1007_LV

recipes_TPAC1007_04_AA.files = recipes/TPAC1007_04_AA/1.csv recipes/TPAC1007_04_AA/2.csv
recipes_TPAC1007_04_AA.path = /local/data/recipe/TPAC1007_04_AA

recipes_TPAC1007_04_AB.files = recipes/TPAC1007_04_AB/1.csv recipes/TPAC1007_04_AB/2.csv
recipes_TPAC1007_04_AB.path = /local/data/recipe/TPAC1007_04_AB

recipes_TPAC1007_04_AC.files = recipes/TPAC1007_04_AC/1.csv recipes/TPAC1007_04_AC/2.csv
recipes_TPAC1007_04_AC.path = /local/data/recipe/TPAC1007_04_AC

recipes_TPAC1008_01.files = recipes/TPAC1008_01/1.csv recipes/TPAC1008_01/2.csv
recipes_TPAC1008_01.path = /local/data/recipe/TPAC1008_01

recipes_TPAC1008_02_AA.files = recipes/TPAC1008_02_AA/1.csv recipes/TPAC1008_02_AA/2.csv
recipes_TPAC1008_02_AA.path = /local/data/recipe/TPAC1008_02_AA

recipes_TPAC1008_02_AB.files = recipes/TPAC1008_02_AB/1.csv recipes/TPAC1008_02_AB/2.csv
recipes_TPAC1008_02_AB.path = /local/data/recipe/TPAC1008_02_AB

recipes_TPAC1008_02_AD.files = recipes/TPAC1008_02_AD/1.csv recipes/TPAC1008_02_AD/2.csv
recipes_TPAC1008_02_AD.path = /local/data/recipe/TPAC1008_02_AD

recipes_TPAC1008_02_AE.files = recipes/TPAC1008_02_AE/1.csv recipes/TPAC1008_02_AE/2.csv
recipes_TPAC1008_02_AE.path = /local/data/recipe/TPAC1008_02_AE

recipes_TPAC1008_02_AF.files = recipes/TPAC1008_02_AF/1.csv recipes/TPAC1008_02_AF/2.csv
recipes_TPAC1008_02_AF.path = /local/data/recipe/TPAC1008_02_AF

recipes_TPLC100_01_AA.files = recipes/TPLC100_01_AA/1.csv recipes/TPLC100_01_AA/2.csv
recipes_TPLC100_01_AA.path = /local/data/recipe/TPLC100_01_AA

recipes_TPLC100_01_AB.files = recipes/TPLC100_01_AB/1.csv recipes/TPLC100_01_AB/2.csv
recipes_TPLC100_01_AB.path = /local/data/recipe/TPLC100_01_AB

recipes_TPAC1008_03_AC.files = recipes/TPAC1008_03_AC/1.csv recipes/TPAC1008_03_AC/2.csv
recipes_TPAC1008_03_AC.path = /local/data/recipe/TPAC1008_03_AC

recipes_Values.files = recipes/Values/1.csv recipes/Values/2.csv
recipes_Values.path = /local/data/recipe/Values

recipes_Zeroes.files = recipes/Zeroes/0.csv
recipes_Zeroes.path = /local/data/recipe/Zeroes

INSTALLS += \
    recipes_TP1043_01_A \
    recipes_TP1043_01_B \
    recipes_TP1057_01_A \
    recipes_TP1057_01_B \
    recipes_TP1070_01_A \
    recipes_TP1070_01_B \
    recipes_TP1070_01_C \
    recipes_TPAC1006 \
    recipes_TPAC1007_03 \
    recipes_TPAC1007_LV \
    recipes_TPAC1007_04_AA \
    recipes_TPAC1007_04_AB \
    recipes_TPAC1007_04_AC \
    recipes_TPAC1008_01 \
    recipes_TPAC1008_02_AA \
    recipes_TPAC1008_02_AB \
    recipes_TPAC1008_02_AD \
    recipes_TPAC1008_02_AE \
    recipes_TPAC1008_02_AF \
    recipes_TPLC100_01_AA \
    recipes_TPLC100_01_AB \
    recipes_TPAC1008_03_AC \
    recipes_Values \
    recipes_Zeroes
