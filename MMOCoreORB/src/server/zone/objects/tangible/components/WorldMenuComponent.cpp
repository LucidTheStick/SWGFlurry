/*
 * WorldMenuComponent.cpp
 *
 *  Created on: 12/15/2019
 *      Author: TOXIC
 */


#include "WorldMenuComponent.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/ZoneServer.h"
#include "server/zone/managers/jedi/JediManager.h"
#include "server/chat/ChatManager.h"
#include "server/zone/packets/player/PlayMusicMessage.h"
#include "server/zone/managers/visibility/VisibilityManager.h"
#include "server/zone/objects/player/sui/inputbox/SuiInputBox.h"
#include "server/zone/managers/loot/LootManager.h"
#include "server/zone/managers/player/PlayerManager.h"
#include "server/chat/ChatManager.h"
#include "server/zone/packets/player/PlayMusicMessage.h"
#include "server/zone/packets/object/ObjectMenuResponse.h"
#include "server/zone/objects/building/BuildingObject.h"

void WorldMenuComponent::fillObjectMenuResponse(SceneObject* sceneObject, ObjectMenuResponse* menuResponse, CreatureObject* player) const {

	TangibleObjectMenuComponent::fillObjectMenuResponse(sceneObject, menuResponse, player);
	menuResponse->addRadialMenuItem(20, 3, "Open World Boss Crate");
}

int WorldMenuComponent::handleObjectMenuSelect(SceneObject* sceneObject, CreatureObject* player, byte selectedID) const {

	if (!sceneObject->isTangibleObject())
		return 0;

	if (!player->isPlayerCreature())
		return 0;

	if (!sceneObject->isASubChildOf(player))
		return 0;

	if (selectedID != 20)
		return 0;

	PlayerObject* ghost = player->getPlayerObject();
	if (ghost != nullptr) {
		ghost->updateworldbossKills();
		sceneObject->destroyObjectFromWorld(true);
		sceneObject->destroyObjectFromDatabase(true);
	}
	return 0;
}
