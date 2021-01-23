king_terak = Creature:new {
	objectName = "@mob/creature_names:king_terak",
	socialGroup = "endor_marauder",
	faction = "endor_marauder",
	level = 100,
	chanceHit = 1,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 9429,
	baseHAM = 24000,
	baseHAMmax = 30000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK,
	optionsBitmask = INVULNERABLE + CONVERSABLE,
	diet = HERBIVORE,
	scale = 1.2,

	templates = {"object/mobile/king_terak.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "theme_park_marauder_szingo_terak_mission_giver_convotemplate",
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(king_terak, "king_terak")
