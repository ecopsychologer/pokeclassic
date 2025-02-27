CeladonCity_DepartmentStore_4F_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_4F_EventScript_Man::
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
    .string "I'm getting a present for my\n"
    .string "girlfriend.\p"
    .string "I guess a Poké Doll will be it.\n"
    .string "It's the popular thing.$"

CeladonCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
    .string "I heard something useful.\p"
    .string "If a wild Pokémon appears, you can\n"
    .string "distract it with a Poké Doll.\p"
    .string "You can run away while the wild\n"
    .string "Pokémon is distracted.$"

CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_4F_Text_FloorSign::
    .string "Express yourself with gifts!\n"
    .string "4F: Wise Man Gifts\p"
    .string "Evolution Special!\n"
    .string "Element Stones on sale now!$"

CeladonCity_DepartmentStore_4F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_Items::
	.2byte ITEM_SUN_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_POWER_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_NONE
	release
	end
