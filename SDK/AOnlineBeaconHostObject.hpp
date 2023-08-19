#pragma once
#include <cstdint>
#include "AActor.hpp"
class UClass;
class AOnlineBeaconClient;
#pragma pack(push, 1)
class AOnlineBeaconHostObject : public AActor {
public:
    FString BeaconTypeName; // 0x248
    UClass* ClientBeaconActorClass; // 0x258
    TArray<AOnlineBeaconClient*> ClientActors; // 0x260
    static AOnlineBeaconHostObject* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
