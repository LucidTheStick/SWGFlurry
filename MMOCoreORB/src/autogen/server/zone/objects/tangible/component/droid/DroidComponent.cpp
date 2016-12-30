/*
 *	autogen/server/zone/objects/tangible/component/droid/DroidComponent.cpp generated by engine3 IDL compiler 0.60
 */

#include "DroidComponent.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	DroidComponentStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 662433442,};

DroidComponent::DroidComponent() : Component(DummyConstructorParameter::instance()) {
	DroidComponentImplementation* _implementation = new DroidComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DroidComponent");
}

DroidComponent::DroidComponent(DummyConstructorParameter* param) : Component(param) {
	_setClassName("DroidComponent");
}

DroidComponent::~DroidComponent() {
}



void DroidComponent::initializeTransientMembers() {
	DroidComponentImplementation* _implementation = static_cast<DroidComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void DroidComponent::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	DroidComponentImplementation* _implementation = static_cast<DroidComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void DroidComponent::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	DroidComponentImplementation* _implementation = static_cast<DroidComponentImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

bool DroidComponent::isSocketCluster() {
	DroidComponentImplementation* _implementation = static_cast<DroidComponentImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->isSocketCluster();
	}
}

DistributedObjectServant* DroidComponent::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DroidComponent::_getImplementationForRead() const {
	return _impl;
}

void DroidComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DroidComponentImplementation
 */

DroidComponentImplementation::DroidComponentImplementation(DummyConstructorParameter* param) : ComponentImplementation(param) {
	_initializeImplementation();
}


DroidComponentImplementation::~DroidComponentImplementation() {
}


void DroidComponentImplementation::finalize() {
}

void DroidComponentImplementation::_initializeImplementation() {
	_setClassHelper(DroidComponentHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DroidComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DroidComponent*>(stub);
	ComponentImplementation::_setStub(stub);
}

DistributedObjectStub* DroidComponentImplementation::_getStub() {
	return _this.get();
}

DroidComponentImplementation::operator const DroidComponent*() {
	return _this.get();
}

void DroidComponentImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DroidComponentImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DroidComponentImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DroidComponentImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DroidComponentImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DroidComponentImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DroidComponentImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DroidComponentImplementation::_serializationHelperMethod() {
	ComponentImplementation::_serializationHelperMethod();

	_setClassName("DroidComponent");

}

void DroidComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DroidComponentImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DroidComponentImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ComponentImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc991b943: //DroidComponent.quality
		TypeInfo<float >::parseFromBinaryStream(&quality, stream);
		return true;

	case 0x1dea5410: //DroidComponent.durability
		TypeInfo<float >::parseFromBinaryStream(&durability, stream);
		return true;

	case 0x86b6725b: //DroidComponent.surveyDroid
		TypeInfo<bool >::parseFromBinaryStream(&surveyDroid, stream);
		return true;

	}

	return false;
}

void DroidComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DroidComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DroidComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc991b943; //DroidComponent.quality
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&quality, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x1dea5410; //DroidComponent.durability
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&durability, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x86b6725b; //DroidComponent.surveyDroid
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&surveyDroid, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

DroidComponentImplementation::DroidComponentImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/component/droid/DroidComponent.idl():  		Logger.setLoggingName("DroidComponent");
	Logger::setLoggingName("DroidComponent");
	// server/zone/objects/tangible/component/droid/DroidComponent.idl():  		quality = 0;
	quality = 0;
	// server/zone/objects/tangible/component/droid/DroidComponent.idl():  		durability = 0;
	durability = 0;
	// server/zone/objects/tangible/component/droid/DroidComponent.idl():  		surveyDroid = false;
	surveyDroid = false;
}

/*
 *	DroidComponentAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DroidComponentAdapter::DroidComponentAdapter(DroidComponent* obj) : ComponentAdapter(obj) {
}

void DroidComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	default:
		ComponentAdapter::invokeMethod(methid, inv);
	}
}

void DroidComponentAdapter::initializeTransientMembers() {
	(static_cast<DroidComponent*>(stub))->initializeTransientMembers();
}

/*
 *	DroidComponentHelper
 */

DroidComponentHelper* DroidComponentHelper::staticInitializer = DroidComponentHelper::instance();

DroidComponentHelper::DroidComponentHelper() {
	className = "DroidComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void DroidComponentHelper::finalizeHelper() {
	DroidComponentHelper::finalize();
}

DistributedObject* DroidComponentHelper::instantiateObject() {
	return new DroidComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* DroidComponentHelper::instantiateServant() {
	return new DroidComponentImplementation();
}

DistributedObjectAdapter* DroidComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DroidComponentAdapter(static_cast<DroidComponent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

