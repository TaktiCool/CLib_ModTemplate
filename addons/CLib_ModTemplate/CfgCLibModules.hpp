#include "\tc\CLib\addons\CLib\ModuleMacros.hpp"

class CfgCLibModules {
    class CLib_ModTemplate {
        path = "\PREFIX\MODName\addons\MODName";
        dependency[] = {"CLib"};

        MODULE(Common) {
            dependency[] = {"CLib"};
            FNC(init);
        };
    };
};
