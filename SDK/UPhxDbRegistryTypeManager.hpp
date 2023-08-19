#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UPhxDbRegistryTypeManager : public UObject {
public:
    char pad_28[0x80];
    static UPhxDbRegistryTypeManager* StaticClass();
    bool UnregisterSpawnWhenDestroyed(AActor* InAssetPtr);
    bool RegisterNewSpawn(AActor* InAssetPtr);
}; // Size: 0xa8
#pragma pack(pop)
