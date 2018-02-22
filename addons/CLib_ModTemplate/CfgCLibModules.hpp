#include "\tc\CLib\addons\CLib\ModuleMacros.hpp"

class CfgCLibModules {
    class BSO {
        path = "\PREFIX\MODName\addons\MODName";
        dependency[] = {"CLib"};

        MODULE(Common) {
            dependency[] = {"CLib"};
            FNC(AchillesLoaded);
            FNC(clientInit);
            FNC(flattenArray);
            FNC(init);
            FNC(isNearBase);
            FNC(messageBox);
            FNC(serverInit);
            FNC(speedModifier);
            FNC(teamColours);
            FNC(VOIP);
            FNC(whitelist);
        };
    };
};
