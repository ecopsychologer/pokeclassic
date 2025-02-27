CeladonCity_DepartmentStore_2F_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel::
    .string "Super Repel keeps weak Pokémon at\n"
    .string "bay…\p"
    .string "Hmm, it's a more powerful Repel.$"

CeladonCity_DepartmentStore_2F_EventScript_Lass::
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings::
    .string "For long outings, you should buy\n"
    .string "Revive.$"

CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_2F_Text_FloorSign::
    .string "Top-Grade Items for Trainers!\p"
    .string "2F: Trainer's Market$"

CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_2F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_2F_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_2F_TMs
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_2F_TMs::
	.2byte ITEM_TM30
	.2byte ITEM_TM15
	.2byte ITEM_TM13
	.2byte ITEM_TM31
	.2byte ITEM_TM43
	.2byte ITEM_TM35
	.2byte ITEM_TM02
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_2F_EventScript_Woman::
    lock
    faceplayer
    msgbox CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes
    release
    end

CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes::
    .string "We have a customer, Lance, who\n"
    .string "occasionally comes.\p"
    .string "He always buys capes.\p"
    .string "I wonder… Does he have many\n"
    .string "identical capes at home?$"
