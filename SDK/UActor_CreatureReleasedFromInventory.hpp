#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_CreatureReleasedFromInventory : public UActorProvider {
public:
    char pad_38[0x8];
    bool bGetSavedCreature; // 0x40
    char pad_41[0x7];
    FString SavedCreatureID; // 0x48
    FDbSingleColumnInfo DBInfo; // 0x58
    bool bUseExistingDOV; // 0xe0
    char pad_e1[0x7];
    UActorProvider* ExistingDOV; // 0xe8
    FName NurturingSpaceOverride; // 0xf0
    char pad_f8[0x10];
    static UActor_CreatureReleasedFromInventory* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
