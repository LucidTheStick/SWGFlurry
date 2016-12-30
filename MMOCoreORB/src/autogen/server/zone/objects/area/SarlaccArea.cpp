/*
 *	autogen/server/zone/objects/area/SarlaccArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "SarlaccArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SarlaccAreaStub
 */

enum {RPC_UPDATEERUPTTIME__ = 3561429432,RPC_NOTIFYENTER__SCENEOBJECT_};

SarlaccArea::SarlaccArea() : ActiveArea(DummyConstructorParameter::instance()) {
	SarlaccAreaImplementation* _implementation = new SarlaccAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SarlaccArea");
}

SarlaccArea::SarlaccArea(DummyConstructorParameter* param) : ActiveArea(param) {
	_setClassName("SarlaccArea");
}

SarlaccArea::~SarlaccArea() {
}



void SarlaccArea::updateEruptTime() {
	SarlaccAreaImplementation* _implementation = static_cast<SarlaccAreaImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEERUPTTIME__);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateEruptTime();
	}
}

void SarlaccArea::notifyEnter(SceneObject* player) {
	SarlaccAreaImplementation* _implementation = static_cast<SarlaccAreaImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyEnter(player);
	}
}

DistributedObjectServant* SarlaccArea::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SarlaccArea::_getImplementationForRead() const {
	return _impl;
}

void SarlaccArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SarlaccAreaImplementation
 */

SarlaccAreaImplementation::SarlaccAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


SarlaccAreaImplementation::~SarlaccAreaImplementation() {
}


void SarlaccAreaImplementation::finalize() {
}

void SarlaccAreaImplementation::_initializeImplementation() {
	_setClassHelper(SarlaccAreaHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SarlaccAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SarlaccArea*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* SarlaccAreaImplementation::_getStub() {
	return _this.get();
}

SarlaccAreaImplementation::operator const SarlaccArea*() {
	return _this.get();
}

void SarlaccAreaImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SarlaccAreaImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SarlaccAreaImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SarlaccAreaImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SarlaccAreaImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SarlaccAreaImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SarlaccAreaImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SarlaccAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("SarlaccArea");

}

void SarlaccAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SarlaccAreaImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SarlaccAreaImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ActiveAreaImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x4b12ba33: //SarlaccArea.lastErupt
		TypeInfo<Time >::parseFromBinaryStream(&lastErupt, stream);
		return true;

	}

	return false;
}

void SarlaccAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SarlaccAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SarlaccAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ActiveAreaImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x4b12ba33; //SarlaccArea.lastErupt
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Time >::toBinaryStream(&lastErupt, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

SarlaccAreaImplementation::SarlaccAreaImplementation() : ActiveAreaImplementation() {
	_initializeImplementation();
}

void SarlaccAreaImplementation::updateEruptTime() {
	// server/zone/objects/area/SarlaccArea.idl():  		lastErupt.updateToCurrentTime();
	(&lastErupt)->updateToCurrentTime();
}

/*
 *	SarlaccAreaAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SarlaccAreaAdapter::SarlaccAreaAdapter(SarlaccArea* obj) : ActiveAreaAdapter(obj) {
}

void SarlaccAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_UPDATEERUPTTIME__:
		{
			
			updateEruptTime();
			
		}
		break;
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		{
			SceneObject* player = static_cast<SceneObject*>(inv->getObjectParameter());
			
			notifyEnter(player);
			
		}
		break;
	default:
		ActiveAreaAdapter::invokeMethod(methid, inv);
	}
}

void SarlaccAreaAdapter::updateEruptTime() {
	(static_cast<SarlaccArea*>(stub))->updateEruptTime();
}

void SarlaccAreaAdapter::notifyEnter(SceneObject* player) {
	(static_cast<SarlaccArea*>(stub))->notifyEnter(player);
}

/*
 *	SarlaccAreaHelper
 */

SarlaccAreaHelper* SarlaccAreaHelper::staticInitializer = SarlaccAreaHelper::instance();

SarlaccAreaHelper::SarlaccAreaHelper() {
	className = "SarlaccArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void SarlaccAreaHelper::finalizeHelper() {
	SarlaccAreaHelper::finalize();
}

DistributedObject* SarlaccAreaHelper::instantiateObject() {
	return new SarlaccArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* SarlaccAreaHelper::instantiateServant() {
	return new SarlaccAreaImplementation();
}

DistributedObjectAdapter* SarlaccAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SarlaccAreaAdapter(static_cast<SarlaccArea*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

