#pragma once
#include <cstdint>
#include "UObject.hpp"
class UActor_SpawnFromDOVBase;
class AActor;
#pragma pack(push, 1)
class UActorSpawnFromDOVCallback : public UObject {
public:
    UObject* Caller; // 0x28
    UActor_SpawnFromDOVBase* Provider; // 0x30
    static UActorSpawnFromDOVCallback* StaticClass();
    void ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0x38
#pragma pack(pop)
