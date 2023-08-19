#pragma once
#include <cstdint>
#include "EDisciplineType.hpp"
#include "ETransfigurationUnlockType.hpp"
#pragma pack(push, 1)
struct FTransfigurationUnlockSource {
    ETransfigurationUnlockType Type; // 0x0
    char pad_1[0x3];
    FName VendorID; // 0x4
    FName VendorLocationID; // 0xc
    char pad_14[0x4];
    FString MissionTitleTextKey; // 0x18
    char pad_28[0x18];
    EDisciplineType Discipline; // 0x40
    char pad_41[0x3];
    int32_t CurriculumYear; // 0x44
    FName ProductID; // 0x48
}; // Size: 0x50
#pragma pack(pop)
