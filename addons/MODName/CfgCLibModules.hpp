#include "\tc\CLib\addons\CLib\ModuleMacros.hpp"

class CfgCLibModules {
    class MODName {
        path = "\PREFIX\MODName\addons\MODName";
        dependency[] = {"CLib"};

        MODULE(Common) {
            dependency[] = {"CLib"};
            FNC(init);
        };
    };
};
