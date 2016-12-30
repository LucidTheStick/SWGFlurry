/*
 *	autogen/server/chat/room/ChatRoom.h generated by engine3 IDL compiler 0.60
 */

#ifndef CHATROOM_H_
#define CHATROOM_H_

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace chat {

class ChatManager;

} // namespace chat
} // namespace server

using namespace server::chat;

#include "system/thread/ReadWriteLock.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "engine/service/proto/BaseMessage.h"

namespace server {
namespace chat {
namespace room {

class ChatRoom : public ManagedObject {
public:
	static const int DEFAULT = 0;

	static const int AUCTION = 1;

	static const int GUILD = 2;

	static const int GROUP = 3;

	static const int PLANET = 4;

	static const int CUSTOM = 5;

	ChatRoom();

	void init(ZoneServer* serv, ChatRoom* parent, const String& roomName);

	void sendTo(CreatureObject* player);

	void sendDestroyTo(CreatureObject* player);

	void addSubRoom(const String& name, unsigned int roomID);

	void removeSubRoom(const String& channel);

	unsigned int getSubRoom(int i);

	unsigned int getSubRoom(const String& name);

	int getSubRoomsSize();

	void addPlayer(CreatureObject* player);

	void removePlayer(CreatureObject* player, bool disconnecting = false);

	void removeAllPlayers();

	int getPlayerSize();

	CreatureObject* getPlayer(int idx);

	bool hasPlayer(CreatureObject* player);

	bool hasPlayer(const String& name);

	void addModerator(CreatureObject* player);

	void removeModerator(CreatureObject* player);

	void removeAllModerators();

	int getModeratorSize();

	String getModeratorName(int idx);

	bool hasModerator(CreatureObject* player);

	void addInvited(CreatureObject* player);

	void removeInvited(CreatureObject* player);

	void removeAllInvited();

	int getInvitedSize();

	String getInvitedName(int idx);

	bool hasInvited(CreatureObject* player);

	void addBanned(CreatureObject* player);

	void removeBanned(CreatureObject* player);

	void removeAllBanned();

	int getBannedSize();

	String getBannedName(int idx);

	bool hasBanned(CreatureObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessageCheckIgnore(BaseMessage* msg, const String& senderName);

	int checkEnterPermission(CreatureObject* player);

	void broadcastMessages(Vector<BaseMessage*>* messages);

	Reference<ChatRoom* > getParent();

	void setPrivate();

	void setPublic();

	bool isPublic();

	bool isPrivate();

	bool canEnter() const;

	void setCanEnter(bool value);

	bool subroomsAllowed() const;

	void setAllowSubrooms(bool value);

	bool isModerated() const;

	void setModerated(bool moderate);

	void setName(const String& Name);

	String getName() const;

	void setFullPath(const String& newPath);

	String getFullPath() const;

	void setOwnerID(unsigned long long objectID);

	unsigned long long getOwnerID() const;

	void setOwnerName(const String& name);

	String getOwnerName() const;

	void setCreator(const String& name);

	String getCreator();

	void setTitle(const UnicodeString& uniTitle);

	UnicodeString getTitle() const;

	unsigned int getLastJoinTime();

	String getGalaxyName();

	void setRoomID(unsigned int id);

	unsigned int getRoomID() const;

	void setZoneServer(ZoneServer* srv);

	ZoneServer* getZoneServer();

	void setChatManager(ChatManager* mgr);

	void setChatRoomType(int type);

	int getChatRoomType() const;

	bool hasPersistentParent() const;

	void setParentIsPersistent(bool value);

	void setParentRoomID(unsigned int value);

	void setDisabled(bool value);

	bool isDisabled();

	bool isPersistent();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ChatRoom(DummyConstructorParameter* param);

	virtual ~ChatRoom();

	friend class ChatRoomHelper;
};

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

namespace server {
namespace chat {
namespace room {

class ChatRoomImplementation : public ManagedObjectImplementation {
protected:
	ManagedReference<ZoneServer* > server;

	ManagedReference<ChatManager* > manager;

	String name;

	String fullPath;

	unsigned long long ownerID;

	String ownerName;

	String creator;

	UnicodeString title;

	unsigned int roomID;

	bool parentIsPersistent;

	unsigned int parentRoomID;

	bool isPublicRoom;

	bool moderated;

	bool canEnterRoom;

	bool allowSubrooms;

	bool disabled;

	int roomType;

private:
	Time lastJoin;

protected:
	VectorMap<String, unsigned int> subRooms;

	ReadWriteLock subRoomsMutex;

	VectorMap<String, ManagedReference<CreatureObject* > > playerList;

	SortedVector<unsigned long long> moderatorList;

	SortedVector<unsigned long long> invitedList;

	SortedVector<unsigned long long> bannedList;

public:
	static const int DEFAULT = 0;

	static const int AUCTION = 1;

	static const int GUILD = 2;

	static const int GROUP = 3;

	static const int PLANET = 4;

	static const int CUSTOM = 5;

	ChatRoomImplementation();

	ChatRoomImplementation(DummyConstructorParameter* param);

	void init(ZoneServer* serv, ChatRoom* parent, const String& roomName);

	void sendTo(CreatureObject* player);

	void sendDestroyTo(CreatureObject* player);

	void addSubRoom(const String& name, unsigned int roomID);

	void removeSubRoom(const String& channel);

	unsigned int getSubRoom(int i);

	unsigned int getSubRoom(const String& name);

	int getSubRoomsSize();

	void addPlayer(CreatureObject* player);

	void removePlayer(CreatureObject* player, bool disconnecting = false);

	void removeAllPlayers();

	int getPlayerSize();

	CreatureObject* getPlayer(int idx);

	bool hasPlayer(CreatureObject* player);

	bool hasPlayer(const String& name);

	void addModerator(CreatureObject* player);

	void removeModerator(CreatureObject* player);

	void removeAllModerators();

	int getModeratorSize();

	String getModeratorName(int idx);

	bool hasModerator(CreatureObject* player);

	void addInvited(CreatureObject* player);

	void removeInvited(CreatureObject* player);

	void removeAllInvited();

	int getInvitedSize();

	String getInvitedName(int idx);

	bool hasInvited(CreatureObject* player);

	void addBanned(CreatureObject* player);

	void removeBanned(CreatureObject* player);

	void removeAllBanned();

	int getBannedSize();

	String getBannedName(int idx);

	bool hasBanned(CreatureObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessageCheckIgnore(BaseMessage* msg, const String& senderName);

	int checkEnterPermission(CreatureObject* player);

	void broadcastMessages(Vector<BaseMessage*>* messages);

	Reference<ChatRoom* > getParent();

	void setPrivate();

	void setPublic();

	bool isPublic();

	bool isPrivate();

	bool canEnter() const;

	void setCanEnter(bool value);

	bool subroomsAllowed() const;

	void setAllowSubrooms(bool value);

	bool isModerated() const;

	void setModerated(bool moderate);

	void setName(const String& Name);

	String getName() const;

	void setFullPath(const String& newPath);

	String getFullPath() const;

	void setOwnerID(unsigned long long objectID);

	unsigned long long getOwnerID() const;

	void setOwnerName(const String& name);

	String getOwnerName() const;

	void setCreator(const String& name);

	String getCreator();

	void setTitle(const UnicodeString& uniTitle);

	UnicodeString getTitle() const;

	unsigned int getLastJoinTime();

	String getGalaxyName();

	void setRoomID(unsigned int id);

	unsigned int getRoomID() const;

	void setZoneServer(ZoneServer* srv);

	ZoneServer* getZoneServer();

	void setChatManager(ChatManager* mgr);

	void setChatRoomType(int type);

	int getChatRoomType() const;

	bool hasPersistentParent() const;

	void setParentIsPersistent(bool value);

	void setParentRoomID(unsigned int value);

	void setDisabled(bool value);

	bool isDisabled();

	bool isPersistent();

	WeakReference<ChatRoom*> _this;

	operator const ChatRoom*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ChatRoomImplementation();

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

	friend class ChatRoom;
};

class ChatRoomAdapter : public ManagedObjectAdapter {
public:
	ChatRoomAdapter(ChatRoom* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init(ZoneServer* serv, ChatRoom* parent, const String& roomName);

	void sendTo(CreatureObject* player);

	void sendDestroyTo(CreatureObject* player);

	void addSubRoom(const String& name, unsigned int roomID);

	void removeSubRoom(const String& channel);

	unsigned int getSubRoom(int i);

	unsigned int getSubRoom(const String& name);

	int getSubRoomsSize();

	void addPlayer(CreatureObject* player);

	void removePlayer(CreatureObject* player, bool disconnecting);

	void removeAllPlayers();

	int getPlayerSize();

	CreatureObject* getPlayer(int idx);

	bool hasPlayer(CreatureObject* player);

	bool hasPlayer(const String& name);

	void addModerator(CreatureObject* player);

	void removeModerator(CreatureObject* player);

	void removeAllModerators();

	int getModeratorSize();

	String getModeratorName(int idx);

	bool hasModerator(CreatureObject* player);

	void addInvited(CreatureObject* player);

	void removeInvited(CreatureObject* player);

	void removeAllInvited();

	int getInvitedSize();

	String getInvitedName(int idx);

	bool hasInvited(CreatureObject* player);

	void addBanned(CreatureObject* player);

	void removeBanned(CreatureObject* player);

	void removeAllBanned();

	int getBannedSize();

	String getBannedName(int idx);

	bool hasBanned(CreatureObject* player);

	void broadcastMessage(BaseMessage* msg);

	void broadcastMessageCheckIgnore(BaseMessage* msg, const String& senderName);

	int checkEnterPermission(CreatureObject* player);

	Reference<ChatRoom* > getParent();

	void setPrivate();

	void setPublic();

	bool isPublic();

	bool isPrivate();

	bool canEnter() const;

	void setCanEnter(bool value);

	bool subroomsAllowed() const;

	void setAllowSubrooms(bool value);

	bool isModerated() const;

	void setModerated(bool moderate);

	void setName(const String& Name);

	String getName() const;

	void setFullPath(const String& newPath);

	String getFullPath() const;

	void setOwnerID(unsigned long long objectID);

	unsigned long long getOwnerID() const;

	void setOwnerName(const String& name);

	String getOwnerName() const;

	void setCreator(const String& name);

	String getCreator();

	void setTitle(const UnicodeString& uniTitle);

	UnicodeString getTitle() const;

	unsigned int getLastJoinTime();

	String getGalaxyName();

	void setRoomID(unsigned int id);

	unsigned int getRoomID() const;

	void setZoneServer(ZoneServer* srv);

	ZoneServer* getZoneServer();

	void setChatManager(ChatManager* mgr);

	void setChatRoomType(int type);

	int getChatRoomType() const;

	bool hasPersistentParent() const;

	void setParentIsPersistent(bool value);

	void setParentRoomID(unsigned int value);

	void setDisabled(bool value);

	bool isDisabled();

	bool isPersistent();

};

class ChatRoomHelper : public DistributedObjectClassHelper, public Singleton<ChatRoomHelper> {
	static ChatRoomHelper* staticInitializer;

public:
	ChatRoomHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ChatRoomHelper>;
};

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

#endif /*CHATROOM_H_*/
