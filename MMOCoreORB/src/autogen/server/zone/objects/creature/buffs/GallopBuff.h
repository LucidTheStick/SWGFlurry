/*
 *	autogen/server/zone/objects/creature/buffs/GallopBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef GALLOPBUFF_H_
#define GALLOPBUFF_H_

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/buffs/PlayerVehicleBuff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class GallopBuff : public PlayerVehicleBuff {
public:
	GallopBuff(CreatureObject* creo, unsigned int buffcrc, float duration);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GallopBuff(DummyConstructorParameter* param);

	virtual ~GallopBuff();

	friend class GallopBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class GallopBuffImplementation : public PlayerVehicleBuffImplementation {

public:
	GallopBuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration);

	GallopBuffImplementation(DummyConstructorParameter* param);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

	WeakReference<GallopBuff*> _this;

	operator const GallopBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~GallopBuffImplementation();

	void finalize();

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

	friend class GallopBuff;
};

class GallopBuffAdapter : public PlayerVehicleBuffAdapter {
public:
	GallopBuffAdapter(GallopBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate(bool applyModifiers);

	void deactivate(bool applyModifiers);

};

class GallopBuffHelper : public DistributedObjectClassHelper, public Singleton<GallopBuffHelper> {
	static GallopBuffHelper* staticInitializer;

public:
	GallopBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GallopBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*GALLOPBUFF_H_*/
