#include "list_macros.hpp"
#define FACTIONIZE(var) class O_##var: B_##var {}; class I_##var: B_##var {};

#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY node_modules
#endif

class Loadouts {
    baseDelay = 1;
    handleRadios = 1;

    #include "MODULES_DIRECTORY\grad-factions\factions\BW.hpp"
    #include "MODULES_DIRECTORY\grad-factions\factions\US.hpp"
    #include "MODULES_DIRECTORY\grad-factions\factions\RUS.hpp"
    #include "MODULES_DIRECTORY\grad-factions\factions\Rebels.hpp"
};

class CfgFunctions {
    #include "MODULES_DIRECTORY\grad-loadout\CfgFunctions.hpp"
};
