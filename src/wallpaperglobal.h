#ifndef WALLPAPERGLOBAL_H
#define WALLPAPERGLOBAL_H

#include <QtGlobal>
#include <QLoggingCategory>

#if defined(LYCHEE_WALLPAPER)
#define LYCHEE_WALLPAPER_EXPORT Q_DECL_EXPORT
#else
#define LYCHEE_WALLPAPER_EXPORT Q_DECL_IMPORT
#endif

Q_DECLARE_LOGGING_CATEGORY(LYCHEE_WALLPAPER)

#endif // WALLPAPERGLOBAL_H