#ifndef SYSTEMRELATION_GLOBAL_H
#define SYSTEMRELATION_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SYSTEMRELATION_LIBRARY)
#  define SYSTEMRELATIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SYSTEMRELATIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SYSTEMRELATION_GLOBAL_H
