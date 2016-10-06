#include "list_macros.hpp"
#define FACTIONIZE(var) class O_##var: B_##var {}; class I_##var: B_##var {};


class Loadouts {
    baseDelay = 1;
    handleRadios = 1;

    #include "node_modules\grad-factions\factions\BW.hpp"
    #include "node_modules\grad-factions\factions\US.hpp"
    #include "node_modules\grad-factions\factions\RUS.hpp"
    #include "node_modules\grad-factions\factions\Rebels.hpp"
};

class CfgFunctions {
    #include "node_modules\grad-loadout\CfgFunctions.hpp"
};
