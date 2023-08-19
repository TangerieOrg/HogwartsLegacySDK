#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchSpecificNPC : public UActorMeshSetupMatch {
public:
    FDbSingleColumnInfo NPCKey; // 0x28
    FName NPCKeyName; // 0xb0
    static UActorMeshSetupMatchSpecificNPC* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
