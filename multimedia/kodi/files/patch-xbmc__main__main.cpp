--- xbmc/main/main.cpp.orig	2015-04-13 12:43:35 UTC
+++ xbmc/main/main.cpp
@@ -28,6 +28,7 @@
 #ifdef TARGET_POSIX
 #include <sys/resource.h>
 #include <signal.h>
+#include <locale.h>
 #endif
 #if defined(TARGET_DARWIN_OSX)
   #include "Util.h"
@@ -35,7 +36,6 @@
   #ifdef HAS_SDL
     #include <SDL/SDL.h>
   #endif
-#include <locale.h>
 #endif
 #ifdef HAS_LIRC
 #include "input/linux/LIRC.h"
