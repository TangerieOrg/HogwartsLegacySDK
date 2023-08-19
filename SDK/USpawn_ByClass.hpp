#pragma once
#include <cstdint>
#include "UActorSpawner.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class USpawn_ByClass : public UActorSpawner {
public:
    UClass* ActorClass; // 0x48
    AActor* ActorTemplate; // 0x50
    static USpawn_ByClass* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
