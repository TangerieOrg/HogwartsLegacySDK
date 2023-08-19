#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UActorSpawner.hpp"
class UClass;
#pragma pack(push, 1)
class USpawn_ByDBInfo : public UActorSpawner {
public:
    FSpawnSelectInfo DBInfo; // 0x48
    FDbSingleColumnInfo CharacterLookIdInfo; // 0xc8
    UClass* OverrideActorClass; // 0x150
    static USpawn_ByDBInfo* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
