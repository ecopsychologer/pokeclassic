const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },

    //Emerald
    [TRAINER_STEVEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("Steven"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Steven),
        .party = {.ItemCustomMoves = sParty_Steven},
    },

    //Frontier Brains
    [TRAINER_ANABEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("Anabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Anabel),
        .party = {.NoItemDefaultMoves = sParty_Anabel},
    },

    [TRAINER_TUCKER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Tucker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Tucker),
        .party = {.NoItemDefaultMoves = sParty_Tucker},
    },

    [TRAINER_SPENSER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("Spenser"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Spenser),
        .party = {.NoItemDefaultMoves = sParty_Spenser},
    },

    [TRAINER_GRETA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("Greta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Greta),
        .party = {.NoItemDefaultMoves = sParty_Greta},
    },

    [TRAINER_NOLAND] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("Noland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Noland),
        .party = {.NoItemDefaultMoves = sParty_Noland},
    },

    [TRAINER_LUCY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("Lucy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Lucy),
        .party = {.NoItemDefaultMoves = sParty_Lucy},
    },

    [TRAINER_BRANDON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brandon),
        .party = {.NoItemDefaultMoves = sParty_Brandon},
    },

//Elite Four
[TRAINER_LORELEI] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LORELEI,
        .trainerName = _("Lorelei"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_EliteFourLorelei),
        .party = {.ItemCustomMoves = sParty_EliteFourLorelei}
    },
    [TRAINER_BRUNO] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_BRUNO,
        .trainerName = _("Bruno"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_EliteFourBruno),
        .party = {.ItemCustomMoves = sParty_EliteFourBruno}
    },
    [TRAINER_AGATHA] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AGATHA,
        .trainerName = _("Agatha"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_EliteFourAgatha),
        .party = {.ItemCustomMoves = sParty_EliteFourAgatha}
    },
    [TRAINER_LANCE] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_LANCE,
        .trainerName = _("Lance"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_EliteFourLance),
        .party = {.ItemCustomMoves = sParty_EliteFourLance}
    },

//Rival Battles
    [TRAINER_RIVAL_FIRST_BATTLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_RivalFirstBattle),
        .party = {.NoItemDefaultMoves = sParty_RivalFirstBattle},
    },

    [TRAINER_RIVAL_OPTIONAL_BATTLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_RivalOptionalBattle),
        .party = {.NoItemDefaultMoves = sParty_RivalOptionalBattle},
    },

    [TRAINER_RIVAL_CERULEAN_CITY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_RivalCeruleanCity),
        .party = {.NoItemDefaultMoves = sParty_RivalCeruleanCity},
    },

    [TRAINER_RIVAL_SS_ANNE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_RivalSSAnne),
        .party = {.ItemDefaultMoves = sParty_RivalSSAnne},
    },

    [TRAINER_RIVAL_POKEMON_TOWER_JOLTEON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPokemonTowerJolteon),
        .party = {.ItemCustomMoves = sParty_RivalPokemonTowerJolteon},
    },

    [TRAINER_RIVAL_POKEMON_TOWER_FLAREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPokemonTowerFlareon),
        .party = {.ItemCustomMoves = sParty_RivalPokemonTowerFlareon},
    },

    [TRAINER_RIVAL_POKEMON_TOWER_VAPOREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPokemonTowerVaporeon),
        .party = {.ItemCustomMoves = sParty_RivalPokemonTowerVaporeon},
    },

    [TRAINER_RIVAL_SILPH_CO_JOLTEON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalSilphCoJolteon),
        .party = {.ItemCustomMoves = sParty_RivalSilphCoJolteon},
    },

    [TRAINER_RIVAL_SILPH_CO_FLAREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalSilphCoFlareon),
        .party = {.ItemCustomMoves = sParty_RivalSilphCoFlareon},
    },

    [TRAINER_RIVAL_SILPH_CO_VAPOREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalSilphCoVaporeon),
        .party = {.ItemCustomMoves = sParty_RivalSilphCoVaporeon},
    },

    [TRAINER_RIVAL_ROUTE22_JOLTEON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalRoute22Jolteon),
        .party = {.ItemCustomMoves = sParty_RivalRoute22Jolteon},
    },

    [TRAINER_RIVAL_ROUTE22_FLAREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalRoute22Flareon),
        .party = {.ItemCustomMoves = sParty_RivalRoute22Flareon},
    },

    [TRAINER_RIVAL_ROUTE22_VAPOREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalRoute22Vaporeon),
        .party = {.ItemCustomMoves = sParty_RivalRoute22Vaporeon},
    },

    [TRAINER_RIVAL_CHAMPION_JOLTEON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalChampionJolteon),
        .party = {.ItemCustomMoves = sParty_RivalChampionJolteon},
    },

    [TRAINER_RIVAL_CHAMPION_FLAREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalChampionFlareon),
        .party = {.ItemCustomMoves = sParty_RivalChampionFlareon},
    },

    [TRAINER_RIVAL_CHAMPION_VAPOREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalChampionVaporeon),
        .party = {.ItemCustomMoves = sParty_RivalChampionVaporeon},
    },

    [TRAINER_RIVAL_POSTGAME_JOLTEON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPostGameJolteon),
        .party = {.ItemCustomMoves = sParty_RivalPostGameJolteon},
    },

    [TRAINER_RIVAL_POSTGAME_FLAREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPostGameFlareon),
        .party = {.ItemCustomMoves = sParty_RivalPostGameFlareon},
    },

    [TRAINER_RIVAL_POSTGAME_VAPOREON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RIVAL,
        .trainerPic = TRAINER_PIC_BLUE,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_POTION, ITEM_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_RivalPostGameVaporeon),
        .party = {.ItemCustomMoves = sParty_RivalPostGameVaporeon},
    },

//Viridian Forest
    [TRAINER_BUG_CATCHER_RICK] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Rick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherRick),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherRick}
    },
    [TRAINER_BUG_CATCHER_DOUG] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Doug"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherDoug),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherDoug}
    },
    [TRAINER_BUG_CATCHER_SAMMY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Sammy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherSammy),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherSammy}
    },
    [TRAINER_BUG_CATCHER_ANTHONY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Anthony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherAnthony),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherAnthony}
    },
    [TRAINER_BUG_CATCHER_CHARLIE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Charlie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherCharlie),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherCharlie}
    },

//Pewter Gym
    [TRAINER_CAMPER_LIAM] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Liam"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperLiam),
        .party = {.NoItemCustomMoves = sParty_CamperLiam}
    },

    [TRAINER_LEADER_BROCK] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BROCK,
        .trainerName = _("Brock"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_LeaderBrock),
        .party = {.NoItemCustomMoves = sParty_LeaderBrock}
    },

//Route 3
    [REMATCHABLE_TRAINER_LASS_JANICE_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Janice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassJanice1),
        .party = {.NoItemDefaultMoves = sParty_LassJanice1}
    },
    [REMATCHABLE_TRAINER_LASS_JANICE_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Janice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassJanice2),
        .party = {.NoItemDefaultMoves = sParty_LassJanice2}
    },
    [REMATCHABLE_TRAINER_LASS_JANICE_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Janice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassJanice3),
        .party = {.NoItemDefaultMoves = sParty_LassJanice3}
    },
    [TRAINER_BUG_CATCHER_COLTON] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Colton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherColton),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherColton}
    },
    [REMATCHABLE_TRAINER_YOUNGSTER_BEN_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterBen),
        .party = {.NoItemDefaultMoves = sParty_YoungsterBen}
    },
    [REMATCHABLE_TRAINER_YOUNGSTER_BEN_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterBen2),
        .party = {.NoItemDefaultMoves = sParty_YoungsterBen2}
    },
    [REMATCHABLE_TRAINER_YOUNGSTER_BEN_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterBen3),
        .party = {.NoItemDefaultMoves = sParty_YoungsterBen3}
    },
    [TRAINER_BUG_CATCHER_GREG] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Greg"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherGreg),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherGreg}
    },
    [TRAINER_YOUNGSTER_CALVIN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterCalvin),
        .party = {.NoItemDefaultMoves = sParty_YoungsterCalvin}
    },
    [TRAINER_LASS_SALLY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Sally"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassSally),
        .party = {.NoItemDefaultMoves = sParty_LassSally}
    },    
    [TRAINER_BUG_CATCHER_JAMES] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherJames),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherJames}
    },
    [TRAINER_LASS_ROBIN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Robin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassRobin),
        .party = {.NoItemDefaultMoves = sParty_LassRobin}
    },

//Route 4
    [TRAINER_LASS_CRISSY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Crissy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassCrissy),
        .party = {.NoItemDefaultMoves = sParty_LassCrissy}
    },

//Mt Moon
    [TRAINER_HIKER_MARCOS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Marcos"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerMarcos),
        .party = {.NoItemDefaultMoves = sParty_HikerMarcos}
    },
    [TRAINER_YOUNGSTER_JOSH] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Josh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterJosh),
        .party = {.NoItemDefaultMoves = sParty_YoungsterJosh}
    },
    [TRAINER_LASS_MIRIAM] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Miriam"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassMiriam),
        .party = {.NoItemDefaultMoves = sParty_LassMiriam}
    },
    [TRAINER_LASS_IRIS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Iris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassIris),
        .party = {.NoItemDefaultMoves = sParty_LassIris}
    },
    [TRAINER_SUPER_NERD_JOVAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Jovan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SuperNerdJovan),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdJovan}
    },
    [TRAINER_BUG_CATCHER_KENT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Kent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherKent),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherKent}
    },
    [TRAINER_BUG_CATCHER_ROBBY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Robby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherRobby),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherRobby}
    },
    [TRAINER_TEAM_ROCKET_GRUNT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt}
    },
    [TRAINER_TEAM_ROCKET_GRUNT_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt2),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt2}
    },
    [TRAINER_TEAM_ROCKET_GRUNT_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt3),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt3}
    },
    [TRAINER_TEAM_ROCKET_GRUNT_4] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt4),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt4}
    },
    [TRAINER_SUPER_NERD_MIGUEL] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SuperNerdMiguel),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdMiguel}
    },
    [TRAINER_ROCKET_DUO_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ROCKET_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_DUO,
        .trainerName = _("Duo"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE || AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_RocketDuo1),
        .party = {.NoItemDefaultMoves = sParty_RocketDuo1}
    },
//Cerulean City
    [TRAINER_TEAM_ROCKET_GRUNT_5] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt5),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt5}
    },
    [TRAINER_PICNICKER_DIANA] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerDiana),
        .party = {.NoItemDefaultMoves = sParty_PicnickerDiana}
    },
    [TRAINER_SWIMMER_MALE_LUIS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Luis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SwimmerMaleLuis),
        .party = {.NoItemDefaultMoves = sParty_SwimmerMaleLuis}
    },
    [TRAINER_LEADER_MISTY] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_MISTY,
        .trainerName = _("Misty"),
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_LeaderMisty),
        .party = {.NoItemCustomMoves = sParty_LeaderMisty}
    },
//Route 24
    [REMATCHABLE_TRAINER_CAMPER_SHANE_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperShane1),
        .party = {.NoItemDefaultMoves = sParty_CamperShane1}
    },
    [REMATCHABLE_TRAINER_CAMPER_SHANE_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperShane2),
        .party = {.NoItemDefaultMoves = sParty_CamperShane2}
    },
    [REMATCHABLE_TRAINER_CAMPER_SHANE_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperShane3),
        .party = {.NoItemDefaultMoves = sParty_CamperShane3}
    },
    [TRAINER_BUG_CATCHER_CALE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Cale"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherCale),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherCale}
    },
    [TRAINER_LASS_ALI] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Ali"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassAli),
        .party = {.NoItemDefaultMoves = sParty_LassAli}
    },
    [TRAINER_YOUNGSTER_TIMMY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Timmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterTimmy),
        .party = {.NoItemDefaultMoves = sParty_YoungsterTimmy}
    },
    [TRAINER_LASS_RELI] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Reli"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassReli),
        .party = {.NoItemDefaultMoves = sParty_LassReli}
    },
    [TRAINER_CAMPER_ETHAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperEthan),
        .party = {.NoItemDefaultMoves = sParty_CamperEthan}
    },
    [TRAINER_TEAM_ROCKET_GRUNT_6] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TeamRocketGrunt6),
        .party = {.NoItemDefaultMoves = sParty_TeamRocketGrunt6}
    },
    [TRAINER_ROCKET_DUO_NB] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ROCKET_DUO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_DUO,
        .trainerName = _("Duo"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE || AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_RocketDuoNuggetBridge),
        .party = {.NoItemDefaultMoves = sParty_RocketDuoNuggetBridge}
    },
//Route 25
    [REMATCHABLE_TRAINER_HIKER_FRANKLIN_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Franklin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerFranklin1),
        .party = {.NoItemDefaultMoves = sParty_HikerFranklin1}
    },
    [REMATCHABLE_TRAINER_HIKER_FRANKLIN_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Franklin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerFranklin2),
        .party = {.NoItemDefaultMoves = sParty_HikerFranklin2}
    },
    [REMATCHABLE_TRAINER_HIKER_FRANKLIN_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Franklin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerFranklin3),
        .party = {.NoItemDefaultMoves = sParty_HikerFranklin3}
    },
    [TRAINER_YOUNGSTER_JOEY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterJoey),
        .party = {.NoItemDefaultMoves = sParty_YoungsterJoey}
    },
    [TRAINER_HIKER_WAYNE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Wayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerWayne),
        .party = {.NoItemDefaultMoves = sParty_HikerWayne}
    },
    [TRAINER_YOUNGSTER_DAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Dan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterDan),
        .party = {.NoItemDefaultMoves = sParty_YoungsterDan}
    },
    [TRAINER_PICNICKER_KELSEY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Kelsey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerKelsey),
        .party = {.NoItemDefaultMoves = sParty_PicnickerKelsey}
    },
    [TRAINER_HIKER_NOB] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerNob),
        .party = {.NoItemDefaultMoves = sParty_HikerNob}
    },
    [TRAINER_CAMPER_FLINT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Flint"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperFlint),
        .party = {.NoItemDefaultMoves = sParty_CamperFlint}
    },
    [TRAINER_YOUNGSTER_CHAD] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Chad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterChad),
        .party = {.NoItemDefaultMoves = sParty_YoungsterChad}
    },
    [TRAINER_LASS_HALEY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassHaley),
        .party = {.NoItemDefaultMoves = sParty_LassHaley}
    },
//Route 6
    [REMATCHABLE_TRAINER_BUG_CATCHER_KEIGO_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Keigo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherKeigo1),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherKeigo1}
    },
    [REMATCHABLE_TRAINER_BUG_CATCHER_KEIGO_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Keigo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherKeigo2),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherKeigo2}
    },
    [REMATCHABLE_TRAINER_BUG_CATCHER_KEIGO_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Keigo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherKeigo3),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherKeigo3}
    },
    [TRAINER_CAMPER_RICKY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ricky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperRicky),
        .party = {.NoItemDefaultMoves = sParty_CamperRicky}
    },
    [TRAINER_PICNICKER_NANCY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Nancy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerNancy),
        .party = {.NoItemDefaultMoves = sParty_PicnickerNancy}
    },
    [TRAINER_BUG_CATCHER_ELIJAH] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Elijah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherElijah),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherElijah}
    },
    [TRAINER_PICNICKER_ISABELLE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Isabelle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerIsabelle),
        .party = {.NoItemDefaultMoves = sParty_PicnickerIsabelle}
    },
    [TRAINER_CAMPER_JEFF] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Jeff"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperJeff),
        .party = {.NoItemDefaultMoves = sParty_CamperJeff}
    },

//Vermilion City
    [TRAINER_SAILOR_DWAYNE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Dwayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorDwayne),
        .party = {.NoItemDefaultMoves = sParty_SailorDwayne}
    },
    [TRAINER_ENGINEER_BAILY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("Baily"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_EngineerBaily),
        .party = {.NoItemDefaultMoves = sParty_EngineerBaily}
    },
    [TRAINER_GENTLEMAN_TUCKER] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Tucker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GentlemanTucker),
        .party = {.NoItemDefaultMoves = sParty_GentlemanTucker}
    },
    [TRAINER_LEADER_SURGE] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SURGE,
        .trainerName = _("LT. Surge"),
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_LeaderLtSurge),
        .party = {.NoItemCustomMoves = sParty_LeaderLtSurge}
    },
//SS Anne - Deck
    [TRAINER_SAILOR_EDMOND] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Edmond"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorEdmond),
        .party = {.NoItemDefaultMoves = sParty_SailorEdmond}
    },
    [TRAINER_SAILOR_TREVOR] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Trevor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorTrevor),
        .party = {.NoItemDefaultMoves = sParty_SailorTrevor}
    },

//SS Anne - First floor
    [TRAINER_LASS_ANN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Ann"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LassAnn),
        .party = {.NoItemDefaultMoves = sParty_LassAnn}
    },
    [TRAINER_YOUNGSTER_TYLER] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Tyler"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterTyler),
        .party = {.NoItemDefaultMoves = sParty_YoungsterTyler}
    },
    [TRAINER_GENTLEMAN_ARTHUR] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Arthur"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_GentlemanArthur),
        .party = {.NoItemDefaultMoves = sParty_GentlemanArthur}
    },
    [TRAINER_GENTLEMAN_THOMAS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Thomas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GentlemanThomas),
        .party = {.NoItemDefaultMoves = sParty_GentlemanThomas}
    },
//SS Anne - Second Floor
    [TRAINER_FISHERMAN_DALE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Dale"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanDale),
        .party = {.NoItemDefaultMoves = sParty_FishermanDale}
    },
    [TRAINER_GENTLEMAN_BROOKS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Brooks"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GentlemanBrooks),
        .party = {.NoItemDefaultMoves = sParty_GentlemanBrooks}
    },
    [TRAINER_LADY_DAWN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Dawn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LadyDawn),
        .party = {.NoItemDefaultMoves = sParty_LadyDawn}
    },
    [TRAINER_GENTLEMAN_LAMAR] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Lamar"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GentlemanLamar),
        .party = {.NoItemDefaultMoves = sParty_GentlemanLamar}
    },
//SS ANNE - B1F
    [TRAINER_FISHERMAN_BARNY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Barny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanBarny),
        .party = {.NoItemDefaultMoves = sParty_FishermanBarny}
    },
    [TRAINER_SAILOR_PHILLIP] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Phillip"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorPhillip),
        .party = {.NoItemDefaultMoves = sParty_SailorPhillip}
    },
    [TRAINER_SAILOR_HUEY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Huey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorHuey),
        .party = {.NoItemDefaultMoves = sParty_SailorHuey}
    },
    [TRAINER_SAILOR_DYLAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorDylan),
        .party = {.NoItemDefaultMoves = sParty_SailorDylan}
    },
    [TRAINER_SAILOR_LEONARD] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Leonard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorLeonard),
        .party = {.NoItemDefaultMoves = sParty_SailorLeonard}
    },
    [TRAINER_SAILOR_DUNCAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Duncan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_SailorDuncan),
        .party = {.NoItemDefaultMoves = sParty_SailorDuncan}
    },
//Route 11
    [REMATCHABLE_TRAINER_GAMBLER_HUGO_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Hugo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerHugo1),
        .party = {.NoItemDefaultMoves = sParty_GamblerHugo1}
    },
    [REMATCHABLE_TRAINER_GAMBLER_HUGO_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Hugo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerHugo2),
        .party = {.NoItemDefaultMoves = sParty_GamblerHugo2}
    },
    [REMATCHABLE_TRAINER_GAMBLER_HUGO_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Hugo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerHugo3),
        .party = {.NoItemDefaultMoves = sParty_GamblerHugo3}
    },
    [REMATCHABLE_TRAINER_ENGINEER_BERNIE_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_EngineerBernie1),
        .party = {.NoItemDefaultMoves = sParty_EngineerBernie1}
    },
    [REMATCHABLE_TRAINER_ENGINEER_BERNIE_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_EngineerBernie2),
        .party = {.NoItemDefaultMoves = sParty_EngineerBernie2}
    },
    [REMATCHABLE_TRAINER_ENGINEER_BERNIE_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_EngineerBernie3),
        .party = {.NoItemDefaultMoves = sParty_EngineerBernie3}
    },
    [TRAINER_GAMBLER_JASPER] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Jasper"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerJasper),
        .party = {.NoItemDefaultMoves = sParty_GamblerJasper}
    },
    [TRAINER_ENGINEER_BRAXTON] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("Braxton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_EngineerBraxton),
        .party = {.NoItemDefaultMoves = sParty_EngineerBraxton}
    },
    [TRAINER_YOUNGSTER_EDDIE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Eddie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterEddie),
        .party = {.NoItemDefaultMoves = sParty_YoungsterEddie}
    },
    [TRAINER_YOUNGSTER_DILLON] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Dillon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterDillon),
        .party = {.NoItemDefaultMoves = sParty_YoungsterDillon}
    },
    [TRAINER_YOUNGSTER_YASU] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Yasu"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterYasu),
        .party = {.NoItemDefaultMoves = sParty_YoungsterYasu}
    },
    [TRAINER_YOUNGSTER_DAVE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Dave"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungsterDave),
        .party = {.NoItemDefaultMoves = sParty_YoungsterDave}
    },
    [TRAINER_GAMBLER_DIRK] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Dirk"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerDirk),
        .party = {.NoItemDefaultMoves = sParty_GamblerDirk}
    },
    [TRAINER_GAMBLER_DARIAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GAMBLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        .trainerName = _("Darian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GamblerDarian),
        .party = {.NoItemDefaultMoves = sParty_GamblerDarian}
    },
//Route 12
    [REMATCHABLE_TRAINER_FISHERMAN_NED_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ned"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanNed1),
        .party = {.NoItemDefaultMoves = sParty_FishermanNed1}
    },
    [REMATCHABLE_TRAINER_FISHERMAN_NED_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ned"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanNed2),
        .party = {.NoItemDefaultMoves = sParty_FishermanNed2}
    },
    [REMATCHABLE_TRAINER_FISHERMAN_NED_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ned"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanNed3),
        .party = {.NoItemDefaultMoves = sParty_FishermanNed3}
    },
    [TRAINER_FISHERMAN_CHIP] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Chip"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanChip),
        .party = {.NoItemDefaultMoves = sParty_FishermanChip}
    },
    [TRAINER_FISHERMAN_HANK] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Hank"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanHank),
        .party = {.NoItemDefaultMoves = sParty_FishermanHank}
    },
    [TRAINER_FISHERMAN_ELLIOT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanElliot),
        .party = {.NoItemDefaultMoves = sParty_FishermanElliot}
    },
    [TRAINER_YOUNG_COUPLE_GIA_JES] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Gia & Jes"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_YoungCoupleGiaJes),
        .party = {.NoItemDefaultMoves = sParty_YoungCoupleGiaJes}
    },
    [REMATCHABLE_TRAINER_ROCKER_LUCA_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("Luca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_RockerLuca1),
        .party = {.NoItemDefaultMoves = sParty_RockerLuca1}
    },
    [REMATCHABLE_TRAINER_ROCKER_LUCA_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("Luca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_RockerLuca2),
        .party = {.NoItemDefaultMoves = sParty_RockerLuca2}
    },
    [REMATCHABLE_TRAINER_ROCKER_LUCA_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("Luca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_RockerLuca3),
        .party = {.NoItemDefaultMoves = sParty_RockerLuca3}
    },
    [TRAINER_CAMPER_JUSTIN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperJustin),
        .party = {.NoItemDefaultMoves = sParty_CamperJustin}
    },
    [TRAINER_FISHERMAN_ANDREW] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_FishermanAndrew),
        .party = {.NoItemDefaultMoves = sParty_FishermanAndrew}
    },
//Route 9
    [REMATCHABLE_TRAINER_PICNICKER_ALICIA_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Alicia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerAlicia1),
        .party = {.NoItemDefaultMoves = sParty_PicnickerAlicia1}
    },
    [REMATCHABLE_TRAINER_PICNICKER_ALICIA_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Alicia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerAlicia2),
        .party = {.NoItemDefaultMoves = sParty_PicnickerAlicia2}
    },
    [REMATCHABLE_TRAINER_PICNICKER_ALICIA_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Alicia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerAlicia3),
        .party = {.NoItemDefaultMoves = sParty_PicnickerAlicia3}
    },
    [TRAINER_BUG_CATCHER_BRENT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Brent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherBrent),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherBrent}
    },
    [TRAINER_BUG_CATCHER_CONNER] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Conner"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BugCatcherConner),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherConner}
    },
    [TRAINER_CAMPER_CHRIS] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Chris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperChris),
        .party = {.NoItemDefaultMoves = sParty_CamperChris}
    },
    [TRAINER_CAMPER_DREW] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Drew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_CamperDrew),
        .party = {.NoItemDefaultMoves = sParty_CamperDrew}
    },
    [TRAINER_PICNICKER_CAITLIN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Caitlin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerCaitlin),
        .party = {.NoItemDefaultMoves = sParty_PicnickerCaitlin}
    },
    [TRAINER_HIKER_ALAN] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Alan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerAlan),
        .party = {.NoItemCustomMoves = sParty_HikerAlan}
    },
    [TRAINER_HIKER_BRICE] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Brice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerBrice),
        .party = {.NoItemDefaultMoves = sParty_HikerBrice}
    },
    [TRAINER_HIKER_JEREMY] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Jeremy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerJeremy),
        .party = {.NoItemDefaultMoves = sParty_HikerJeremy}
    },
//Route 10
    [REMATCHABLE_TRAINER_POKEMANIAC_MARK_1] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Mark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PokemaniacMark1),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacMark1}
    },
    [REMATCHABLE_TRAINER_POKEMANIAC_MARK_2] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Mark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PokemaniacMark2),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacMark2}
    },
    [REMATCHABLE_TRAINER_POKEMANIAC_MARK_3] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Mark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PokemaniacMark3),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacMark3}
    },
    [TRAINER_POKEMANIAC_HERMAN] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Herman"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PokemaniacHerman),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacHerman}
    },
    [TRAINER_PICNICKER_HEIDI] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Heidi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerHeidi),
        .party = {.NoItemDefaultMoves = sParty_PicnickerHeidi}
    },
    [TRAINER_PICNICKER_CAROL] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Carol"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_PicnickerCarol),
        .party = {.NoItemDefaultMoves = sParty_PicnickerCarol}
    },
    [TRAINER_HIKER_CLARK] = {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Clark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerClark),
        .party = {.NoItemCustomMoves = sParty_HikerClark}
    },
    [TRAINER_HIKER_TRENT] = {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_HikerTrent),
        .party = {.NoItemDefaultMoves = sParty_HikerTrent}
    },




























};