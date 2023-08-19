#pragma once
#include <cstdint>
#include "UObject.hpp"
class UActor_FromDOVWithName;
class AActor;
#pragma pack(push, 1)
class UActor_FromDOVWithName_SpawnedCallback : public UObject {
public:
    UObject* Caller; // 0x28
    UActor_FromDOVWithName* Provider; // 0x30
    static UActor_FromDOVWithName_SpawnedCallback* StaticClass();
    void ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0x38
#pragma pack(pop)
