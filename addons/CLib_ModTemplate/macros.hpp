#define PREFIX tc
#define PATH CLib_ModTemplate
#define MOD CLib_ModTemplate

// define Version Information
#define MAJOR 0
#define MINOR 1
#define PATCHLVL 0
#define BUILD 1

#ifdef VERSION
    #undef VERSION
#endif
#ifdef VERSION_AR
    #undef VERSION_AR
#endif
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD

#define ISDEV

#include "\tc\CLib\addons\CLib\macros.hpp"
