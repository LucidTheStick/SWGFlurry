/*
 *	autogen/server/zone/objects/structure/StructureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef STRUCTUREOBJECT_H_
#define STRUCTUREOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace structure {
namespace events {

class StructureMaintenanceTask;

} // namespace events
} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure::events;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace pathfinding {

class NavMeshRegion;

} // namespace pathfinding
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::pathfinding;

#include "templates/SharedObjectTemplate.h"

#include "server/zone/objects/structure/StructurePermissionList.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/util/u3d/AABBTree.h"

#include "engine/util/u3d/AABBNode.h"

#include "engine/util/u3d/Vector3.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace structure {

class StructureObject : public TangibleObject {
public:
	StructureObject();

	void initializeTransientMembers();

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Gets called when this objects is loaded from database
	 * @pre { this locked }
	 * @post { this locked }
	 */
	void notifyLoadFromDatabase();

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void notifyInsertToZone(Zone* zone);

	void createChildObjects();

	/**
	 * Gets called when the structure has been created;
	 */
	int notifyStructurePlaced(CreatureObject* creature);

	bool checkRequisitesForPlacement(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	/**
	 * Schedules the event that will be fired when maintenance is due to run out.
	 * This method calls updateStructureStatus before running.
	 */
	void scheduleMaintenanceExpirationEvent();

	/**
	 * Schedules the maintenance task.
	 * @param timeFromNow the time till the task should be run.
	 */
	void scheduleMaintenanceTask(int timeFromNow);

	/**
	 * This method should be called anytime a method needs up to date information about
	 * maintenance, power, and condition of the structure.
	 */
	void updateStructureStatus();

	/**
	 * Checks if the player is on the admin list.
	 * @param player The creo of the player to check for admin permission.
	 * @return Returns true if the player has admin permissions.
	 */
	bool isOnAdminList(CreatureObject* player);

	/**
	 * Checks if the player/guild is on the admin list.
	 * For PermissionsListModify command
	 * @param objectID The oid of the player/guild to check for admin permission.
	 * @return Returns true if the player/guild has admin permissions.
	 */
	bool isOnAdminList(unsigned const long long objectID);

	/**
	 * Checks if the player is on the entry list.
	 * @param player The creo of the player to check for entry permission.
	 * @return Returns true if the player has entry permissions.
	 */
	bool isOnEntryList(CreatureObject* player);

	/**
	 * Checks if the player is on the ban list.
	 * @param player The creo of the player to check for ban permission.
	 * @return Returns true if the player has ban permissions.
	 */
	bool isOnBanList(CreatureObject* player);

	/**
	 * Checks if the player/guild is on the ban list.
	 * For PermissionsListModify command
	 * @param objectID The oid of the player/guild to check for ban permission.
	 * @return Returns true if the player/guild has ban permissions.
	 */
	bool isOnBanList(unsigned const long long objectID);

	/**
	 * Checks if the player is on the hopper list.
	 * @param player The creo of the player to check for hopper permission.
	 * @return Returns true if the player has hopper permissions.
	 */
	bool isOnHopperList(CreatureObject* player);

	/**
	 * Checks if the player is the on the specified permission list.
	 * @param listName The name of the list to check.
	 * @param player The creo of the player to check.
	 * @return Returns true if the player was found on the list.
	 */
	bool isOnPermissionList(const String& listName, CreatureObject* player);

	/**
	 * Checks if the player/guild is the on the specified permission list.
	 * For PermissionsListModify command
	 * @param listName The name of the list to check.
	 * @param objectID The oid of the player/guild to check.
	 * @return Returns true if the player/guild was found on the list.
	 */
	bool isOnPermissionList(const String& listName, unsigned const long long objectID);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, unsigned const long long objectID);

	int grantPermission(const String& listName, unsigned const long long objectID);

	int revokePermission(const String& listName, unsigned const long long objectID);

	int revokeAllPermissions(unsigned const long long objectID);

	void revokeAllPermissions();

	/**
	 * Returns the cost to redeed this building. The redeed cost is 50 times the hourly maintenance rate.
	 * @return int The cost to redeed this building.
	 */
	int getRedeedCost();

	CreatureObject* getOwnerCreatureObject();

	unsigned long long getOwnerObjectID() const;

	unsigned long long getDeedObjectID() const;

	int getLotSize();

	void setMaintenanceReduced(bool value);

	float getMaintenanceRate();

	String getMaintenanceMods();

	int getBaseMaintenanceRate();

	int getBasePowerRate();

	int getSurplusMaintenance() const;

	int getSurplusPower() const;

	bool isPublicStructure();

	bool isPrivateStructure();

	void setOwner(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(float add);

	void subtractMaintenance(float subtract);

	/**
	 * Withdraws maintenance from payer and deposits it in the structure
	 * maintenance pool. Updates maintenance modifier depending on skill
	 * of payer.
	 * @pre payer and structure objects are locked.
	 * @post payer and structure objects are locked.
	 * @param maintenance maintenance amount to deposit.
	 * @param payer payer object.
	 * @param cashFirst Indicates if the amount should be withdrawn from
	 * the player's cash or bank account first.
	 */
	void payMaintenance(int maintenance, CreatureObject* payer, bool cashFirst);

	void setSurplusPower(int surplus);

	void addPower(float add);

	bool isDecaying();

	bool isDecayed();

	int getDecayPercentage();

	bool isCondemned();

	void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isCampStructure();

	bool isRedeedable();

	/**
	 * Adds this object's skill mod map to the target object's skill mod map
	 * @param targetObject The targeted object containing the SkillModMap which will be affected.
	 */
	void addTemplateSkillMods(TangibleObject* targetObject);

	void removeTemplateSkillMods(TangibleObject* tangibleObject);

	String getRedeedMessage();

	bool isCivicStructure();

	bool isCityHall();

	bool isCommercialStructure();

	bool isGuildHall();

	void migratePermissions();

	NavMeshRegion* getNavMeshRegion();

	bool hasNavmesh();

	void createNavRegion();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StructureObject(DummyConstructorParameter* param);

	virtual ~StructureObject();

	friend class StructureObjectHelper;
};

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {
namespace objects {
namespace structure {

class StructureObjectImplementation : public TangibleObjectImplementation {
protected:
	Reference<StructureMaintenanceTask* > structureMaintenanceTask;

	ManagedReference<NavMeshRegion* > navmeshRegion;

	StructurePermissionList structurePermissionList;

	Time lastMaintenanceTime;

	Time maintenanceExpires;

	Time powerExpires;

	unsigned long long ownerObjectID;

	unsigned long long deedObjectID;

	float surplusMaintenance;

	float surplusPower;

	bool maintenanceReduced;

	bool permissionsFixed;

public:
	StructureObjectImplementation();

	StructureObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void finalize();

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Gets called when this objects is loaded from database
	 * @pre { this locked }
	 * @post { this locked }
	 */
	void notifyLoadFromDatabase();

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void notifyInsertToZone(Zone* zone);

	void createChildObjects();

	/**
	 * Gets called when the structure has been created;
	 */
	virtual int notifyStructurePlaced(CreatureObject* creature);

	virtual bool checkRequisitesForPlacement(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	/**
	 * Schedules the event that will be fired when maintenance is due to run out.
	 * This method calls updateStructureStatus before running.
	 */
	void scheduleMaintenanceExpirationEvent();

	/**
	 * Schedules the maintenance task.
	 * @param timeFromNow the time till the task should be run.
	 */
	void scheduleMaintenanceTask(int timeFromNow);

	/**
	 * This method should be called anytime a method needs up to date information about
	 * maintenance, power, and condition of the structure.
	 */
	virtual void updateStructureStatus();

	/**
	 * Checks if the player is on the admin list.
	 * @param player The creo of the player to check for admin permission.
	 * @return Returns true if the player has admin permissions.
	 */
	bool isOnAdminList(CreatureObject* player);

	/**
	 * Checks if the player/guild is on the admin list.
	 * For PermissionsListModify command
	 * @param objectID The oid of the player/guild to check for admin permission.
	 * @return Returns true if the player/guild has admin permissions.
	 */
	bool isOnAdminList(unsigned const long long objectID);

	/**
	 * Checks if the player is on the entry list.
	 * @param player The creo of the player to check for entry permission.
	 * @return Returns true if the player has entry permissions.
	 */
	bool isOnEntryList(CreatureObject* player);

	/**
	 * Checks if the player is on the ban list.
	 * @param player The creo of the player to check for ban permission.
	 * @return Returns true if the player has ban permissions.
	 */
	bool isOnBanList(CreatureObject* player);

	/**
	 * Checks if the player/guild is on the ban list.
	 * For PermissionsListModify command
	 * @param objectID The oid of the player/guild to check for ban permission.
	 * @return Returns true if the player/guild has ban permissions.
	 */
	bool isOnBanList(unsigned const long long objectID);

	/**
	 * Checks if the player is on the hopper list.
	 * @param player The creo of the player to check for hopper permission.
	 * @return Returns true if the player has hopper permissions.
	 */
	bool isOnHopperList(CreatureObject* player);

	/**
	 * Checks if the player is the on the specified permission list.
	 * @param listName The name of the list to check.
	 * @param player The creo of the player to check.
	 * @return Returns true if the player was found on the list.
	 */
	bool isOnPermissionList(const String& listName, CreatureObject* player);

	/**
	 * Checks if the player/guild is the on the specified permission list.
	 * For PermissionsListModify command
	 * @param listName The name of the list to check.
	 * @param objectID The oid of the player/guild to check.
	 * @return Returns true if the player/guild was found on the list.
	 */
	bool isOnPermissionList(const String& listName, unsigned const long long objectID);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, unsigned const long long objectID);

	int grantPermission(const String& listName, unsigned const long long objectID);

	int revokePermission(const String& listName, unsigned const long long objectID);

	int revokeAllPermissions(unsigned const long long objectID);

	void revokeAllPermissions();

	/**
	 * Returns the cost to redeed this building. The redeed cost is 50 times the hourly maintenance rate.
	 * @return int The cost to redeed this building.
	 */
	int getRedeedCost();

	CreatureObject* getOwnerCreatureObject();

	unsigned long long getOwnerObjectID() const;

	unsigned long long getDeedObjectID() const;

	int getLotSize();

	void setMaintenanceReduced(bool value);

	float getMaintenanceRate();

	String getMaintenanceMods();

	int getBaseMaintenanceRate();

	virtual int getBasePowerRate();

	int getSurplusMaintenance() const;

	int getSurplusPower() const;

	virtual bool isPublicStructure();

	virtual bool isPrivateStructure();

	void setOwner(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(float add);

	void subtractMaintenance(float subtract);

	/**
	 * Withdraws maintenance from payer and deposits it in the structure
	 * maintenance pool. Updates maintenance modifier depending on skill
	 * of payer.
	 * @pre payer and structure objects are locked.
	 * @post payer and structure objects are locked.
	 * @param maintenance maintenance amount to deposit.
	 * @param payer payer object.
	 * @param cashFirst Indicates if the amount should be withdrawn from
	 * the player's cash or bank account first.
	 */
	void payMaintenance(int maintenance, CreatureObject* payer, bool cashFirst);

	void setSurplusPower(int surplus);

	void addPower(float add);

	bool isDecaying();

	bool isDecayed();

	int getDecayPercentage();

	virtual bool isCondemned();

	virtual void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isCampStructure();

	bool isRedeedable();

	/**
	 * Adds this object's skill mod map to the target object's skill mod map
	 * @param targetObject The targeted object containing the SkillModMap which will be affected.
	 */
	void addTemplateSkillMods(TangibleObject* targetObject);

	void removeTemplateSkillMods(TangibleObject* tangibleObject);

	virtual String getRedeedMessage();

	bool isCivicStructure();

	bool isCityHall();

	bool isCommercialStructure();

	bool isGuildHall();

	void migratePermissions();

	NavMeshRegion* getNavMeshRegion();

	bool hasNavmesh();

	virtual void createNavRegion();

	WeakReference<StructureObject*> _this;

	operator const StructureObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StructureObjectImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class StructureObject;
};

class StructureObjectAdapter : public TangibleObjectAdapter {
public:
	StructureObjectAdapter(StructureObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	void notifyLoadFromDatabase();

	void destroyObjectFromWorld(bool sendSelfDestroy);

	void notifyInsertToZone(Zone* zone);

	void createChildObjects();

	int notifyStructurePlaced(CreatureObject* creature);

	bool checkRequisitesForPlacement(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	void scheduleMaintenanceExpirationEvent();

	void scheduleMaintenanceTask(int timeFromNow);

	void updateStructureStatus();

	bool isOnAdminList(CreatureObject* player);

	bool isOnAdminList(unsigned const long long objectID);

	bool isOnEntryList(CreatureObject* player);

	bool isOnBanList(CreatureObject* player);

	bool isOnBanList(unsigned const long long objectID);

	bool isOnHopperList(CreatureObject* player);

	bool isOnPermissionList(const String& listName, CreatureObject* player);

	bool isOnPermissionList(const String& listName, unsigned const long long objectID);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, unsigned const long long objectID);

	int grantPermission(const String& listName, unsigned const long long objectID);

	int revokePermission(const String& listName, unsigned const long long objectID);

	int revokeAllPermissions(unsigned const long long objectID);

	void revokeAllPermissions();

	int getRedeedCost();

	CreatureObject* getOwnerCreatureObject();

	unsigned long long getOwnerObjectID() const;

	unsigned long long getDeedObjectID() const;

	int getLotSize();

	void setMaintenanceReduced(bool value);

	float getMaintenanceRate();

	String getMaintenanceMods();

	int getBaseMaintenanceRate();

	int getBasePowerRate();

	int getSurplusMaintenance() const;

	int getSurplusPower() const;

	bool isPublicStructure();

	bool isPrivateStructure();

	void setOwner(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(float add);

	void subtractMaintenance(float subtract);

	void payMaintenance(int maintenance, CreatureObject* payer, bool cashFirst);

	void setSurplusPower(int surplus);

	void addPower(float add);

	bool isDecaying();

	bool isDecayed();

	int getDecayPercentage();

	bool isCondemned();

	void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isCampStructure();

	bool isRedeedable();

	String getRedeedMessage();

	bool isCivicStructure();

	bool isCityHall();

	bool isCommercialStructure();

	bool isGuildHall();

	void migratePermissions();

	NavMeshRegion* getNavMeshRegion();

	bool hasNavmesh();

	void createNavRegion();

};

class StructureObjectHelper : public DistributedObjectClassHelper, public Singleton<StructureObjectHelper> {
	static StructureObjectHelper* staticInitializer;

public:
	StructureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StructureObjectHelper>;
};

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

#endif /*STRUCTUREOBJECT_H_*/
