/*
 *	autogen/server/zone/objects/creature/conversation/DeliverMissionConversationObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef DELIVERMISSIONCONVERSATIONOBSERVER_H_
#define DELIVERMISSIONCONVERSATIONOBSERVER_H_

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
#include "server/zone/objects/creature/conversation/ConversationObserver.h"

#include "server/zone/objects/creature/conversation/ConversationTemplate.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/conversation/screenhandlers/DeliverMissionScreenHandler.h"

#include "server/zone/objects/creature/conversation/screenhandlers/ScreenHandler.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class DeliverMissionConversationObserver : public ConversationObserver {
public:
	DeliverMissionConversationObserver(unsigned int convoTemplateCRC);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DeliverMissionConversationObserver(DummyConstructorParameter* param);

	virtual ~DeliverMissionConversationObserver();

	friend class DeliverMissionConversationObserverHelper;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class DeliverMissionConversationObserverImplementation : public ConversationObserverImplementation {
	DeliverMissionScreenHandler deliverMissionScreenHandler;

public:
	DeliverMissionConversationObserverImplementation(unsigned int convoTemplateCRC);

	DeliverMissionConversationObserverImplementation(DummyConstructorParameter* param);

	WeakReference<DeliverMissionConversationObserver*> _this;

	operator const DeliverMissionConversationObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DeliverMissionConversationObserverImplementation();

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

	friend class DeliverMissionConversationObserver;
};

class DeliverMissionConversationObserverAdapter : public ConversationObserverAdapter {
public:
	DeliverMissionConversationObserverAdapter(DeliverMissionConversationObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class DeliverMissionConversationObserverHelper : public DistributedObjectClassHelper, public Singleton<DeliverMissionConversationObserverHelper> {
	static DeliverMissionConversationObserverHelper* staticInitializer;

public:
	DeliverMissionConversationObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DeliverMissionConversationObserverHelper>;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

#endif /*DELIVERMISSIONCONVERSATIONOBSERVER_H_*/
