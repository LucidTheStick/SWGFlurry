/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef PLACEBATTLEFIELDSTRUCTURECOMMAND_H_
#define PLACEBATTLEFIELDSTRUCTURECOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class PlaceBattlefieldStructureCommand : public QueueCommand {
public:

	PlaceBattlefieldStructureCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		return SUCCESS;
	}
};

#endif //PLACEBATTLEFIELDSTRUCTURECOMMAND_H_
