**WIP**


## Installation

`npm install grad-factions --save`

## Configuration

If not already set, prepend `#define MODULE_DIRECTORY node_modules`

You may also set some options like this

```
//#define NIGHTVISION                                                           //Wenn Spieler Nightvision erhalten sollen, Kommentarzeichen (//) entfernen
//#define GUNLIGHTS                                                             //Wenn Spieler Waffenlampen erhalten sollen, Kommentarzeichen (//) entfernen
//#define LASERS                                                                //Wenn Spieler Waffenlaser erhalten sollen, Kommentarzeichen (//) entfernen
//#define SUPPRESSORS                                                           //Wenn Spieler Schalldämpfer erhalten sollen, Kommentarzeichen (//) entfernen

```

Below, add this:

```
#include "MODULE_DIRECTORY\grad-factions\loadouts.hpp"
```

You're done. One last thing you will have to do: define which set of factions should be used.
Somewhere in your init.sqf, for example:

`GRAD_Loadout_Chosen_Prefix = "BWFleck";`

These factions are available:

*   "BWFleck"         BLUFOR        Bundeswehr Flecktarn
*   "BWTrop"          BLUFOR        Bundeswehr Tropentarn
*   "USOCP"           BLUFOR        US Army OCP
*   "USUCP"           BLUFOR        US Army UCP
*   "USMPT"           BLUFOR        US Marines MARPAT
*   "RUFlora"         OPFOR         Russian MSV Flora
*   "RUEMR"           OPFOR         Russian MSV EMR-Summer
*   "ModerateRebels"  INDEPENDENT   Mittelmäßig bewaffnete, halbzivile Rebellen



/*  Um Standardloadouts zu erhalten müssen im Editor Vanillaeinheiten platziert werden, oder die vorplatzierten Einheiten genutzt werden.
*   Die folgenden Kategorien sind zu benutzen:
*   Blufor:         NATO >> Men
*   Opfor:          CSAT >> Men
*   Independent:    AAF >> Men
*/


/*  Von den angegebenen Kategorien haben die folgenden Einheiten ein Standardloadout:
*   Englisch:                                 Deutsch:                                          Funktion:
*   Asst. Autorifleman                        Zweiter Automatik Schütze                         Munitionsträger für LMG
*   Asst. Gunner (HMG/GMG)                    Zweiter Schütze (Mk30/GMG)                        Munitionsträger für MMG
*   Asst. Missile Specialist (AA)             Zweiter Raketenspezialist (Luftabwehr)            Munitionsträger für Luftabwehrschütze
*   Asst. Missile Specialist (AT)             Zweiter Raketenspezialist (Panzerabwehr)          Munitionsträger für Panzerabwehrschütze
*   Autorifleman                              Automatik-Schütze                                 LMG Schütze
*   Combat Life Saver                         Sanitäter                                         Sanitäter
*   Explosive Specialist                      Sprengmeister                                     Sprengmeister
*   Grenadier                                 Grenadier                                         Grenadier
*   Heavy Gunner                              Schwerer Schütze                                  MMG Schütze
*   Marksman                                  Scharfschütze (nicht DLC)                         Gruppenscharfschütze (DMR)
*   Missile Specialist (AA)                   Raketenspezialist (Luftabwehr)                    Luftabwehrschütze
*   Missile Specialist (AT)                   Raketenspezialist (Panzerabwehr)                  Panzerabwehrschütze
*   Repair Specialist                         Reparaturspezialist                               Reparaturspezialist
*   Rifleman                                  Schütze                                           Schütze
*   Rifleman (AT)                             Schütze (Panzerabwehr)                            Schütze mit leichter AT-Waffe
*   Squad Leader                              Truppführer                                       Truppführer
*   Team Leader                               Teamleader                                        Gruppenführer und Zugführer
*/
