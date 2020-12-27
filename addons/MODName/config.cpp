#include "macros.hpp"
class CfgPatches {
    class ModName {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.56;
        author = "";
        authors[] = {""};
        authorUrl = "";
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
        requiredAddons[] = {"CLib"};
    };
};

#include "CfgCLibModules.hpp"

class CfgCLibSettings {
};
