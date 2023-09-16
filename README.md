# PokeClassic modded by ecopsychologer

Thank you danenders for creating this amazing game and making the source code available!

## Change Log
Start the game with more money (new_game.c - NewGameInitData)

Can use HM's without pokemon learning them

Dynamic Wild Pokemon Levels (https://www.pokecommunity.com/showpost.php?p=10100138) (wild_encounter.c - ChooseWildMonLevel)

Made Partner Pikachu stronger and changed default moveset to be stronger (base_stats.h - SPECIES_PIKACHU_PARTNER) (level_up_learnsets.h - sPikachuPartnerLevelUpLearnset)

Removed RTC error message on startup for non-rtc carts (main_menu.c - Task_MainMenuCheckBattery)

Added rare items to the PC for ease of gameplay (player_pc.c - sNewGamePCItems)

Trying to make berry trees grow instantly upon watering (berry.c - ObjectEventInteractionWaterBerryTree)

Trying to make berry trees infinite because I have no RTC in my cart (berry.c - RemoveBerryTree)

Allow running indoors (bike.c - IsRunningDisallowed)

Dynamically set trainer levels (modified the code from Diego Mertens) (battle_main.c - CreateNPCTrainerParty)

Lower opposing trainer IV's (battle_main.c - CreateNPCTrainerParty -> MAX_PER_STAT_IVS)

Add PC access from pokenav based on (https://github.com/pret/pokeemerald/wiki/Add-PC-Access-in-PokeNav)
- changed max menu items in pokenav.h to accomodate largest menu (unnecessary now)
- edit Task_WaitFadeAccessPC to fit this hack

Enable dexnav from start

changes to battle_config.h

changed pokeball pricing (items.h - Pokeballs)

changed wild_encounter.c and battle_main.c to balance levels of wild and trainer pokemon 

# Original Author's ReadMe

PokeClassic is a recreation of Pokemon Yellow, recreated in the Pokemon Emerald engine. Revisit your classic adventures through Kanto with new features, questlines, and post game content!

## Getting PokeClassic
This repository builds the following ROM:

* pokeemerald.gba `sha1: 8C19F2555E10DFF32A9914CEAC360B018AF42E6C`

To compile this rom yourself, see [Pret's Installation Guide](https://github.com/pret/pokeemerald/blob/master/INSTALL.md) on how to get started with the decompilations. Then, clone this branch and build the rom.

Otherwise, patch files will occasionaly be released here. These will be slower to release than pulling updates yourself. To patch this game, you will need to provide your own rom.

## Credits
Special thanks to  Hyo Oppa, Wolf, Solo993, Bushbugger, PokeMerp, Lunos, TheXaman, Ghoulslash, citrusbolt, asparaguseduardo, exposeed, surskitty, GriffinR, & the Pret Discord.
