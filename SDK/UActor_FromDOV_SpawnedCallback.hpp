#pragma once
#include <cstdint>
#include "UObject.hpp"
class UActor_FromDOV;
class AActor;
#pragma pack(push, 1)
class UActor_FromDOV_SpawnedCallback : public UObject {
public:
    UObject* Caller; // 0x28
    UActor_FromDOV* Provider; // 0x30
    static UActor_FromDOV_SpawnedCallback* StaticClass();
    void ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0x38
#pragma pack(pop)
