#ifndef QEASYMOTION_GLOBAL_H
#define QEASYMOTION_GLOBAL_H

#include <QtGlobal>

#if defined(QEASYMOTION_LIBRARY)
#  define QEASYMOTIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QEASYMOTIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QEASYMOTION_GLOBAL_H

