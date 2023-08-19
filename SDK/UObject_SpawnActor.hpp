#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class UClass;
#pragma pack(push, 1)
class UObject_SpawnActor : public UActorProvider {
public:
    UClass* ActorClass; // 0x38
    FName ActorName; // 0x40
    FName AlignmentSocket; // 0x48
    static UObject_SpawnActor* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
