custom_exar_kun_cultist = Creature:new {
	customName = "Possessed Cultist",
	socialGroup = "townsperson",
	faction = "townsperson",
	level = 1,
	chanceHit = 1,
	damageMin = 1,
	damageMax = 1,
	baseXp = 50,
	baseHAM = 1,
	baseHAMmax = 1,
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
	pvpBitmask = ATTACKABLE,
	creatureBitmask = KILLER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_fs_village_enemy_mellichae.iff"},
	lootGroups = {},
	weapons = {"mixed_force_weapons"},
	conversationTemplate = "",
	attacks = merge(pikemanmaster,brawlermaster)
}

CreatureTemplates:addCreatureTemplate(custom_exar_kun_cultist, "custom_exar_kun_cultist")
