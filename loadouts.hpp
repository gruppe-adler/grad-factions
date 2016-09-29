#include "list_macros.hpp"
#include "loadouts.sqf"
#define FACTIONIZE(var) class O_##var: B_##var {}; class I_##var: B_##var {};

class Loadouts {
    baseDelay = 1;
    handleRadios = 1;

    #include "factions\BW.hpp"
    #include "factions\US.hpp"
    #include "factions\RUS.hpp"
    #include "factions\Rebels.hpp"
};
