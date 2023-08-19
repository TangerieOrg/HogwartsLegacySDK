#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class ASpawnLocation;
#pragma pack(push, 1)
class UEncounterSpawnComponent : public UActorComponent {
public:
    bool bIsEncounterSpawner; // 0xc8
    bool bIsStaticEncounterSpawner; // 0xc9
    char pad_ca[0x6];
    FString EncounterGUID; // 0xd0
    bool bDoNotInheritEncounterTag; // 0xe0
    char pad_e1[0x7];
    TArray<ASpawnLocation*> AssignedSpawnLocations; // 0xe8
    char pad_f8[0x120];
    static UEncounterSpawnComponent* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
