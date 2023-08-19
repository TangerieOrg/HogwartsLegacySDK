#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UAsyncSpawnedActorDestroyWatcher : public UObject {
public:
    char pad_28[0x8];
    static UAsyncSpawnedActorDestroyWatcher* StaticClass();
    void OnActorDestroy(AActor* DestroyedActor);
}; // Size: 0x30
#pragma pack(pop)
