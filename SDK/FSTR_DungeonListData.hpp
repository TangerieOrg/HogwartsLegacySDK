#pragma once
#include <cstdint>
#include "FMissionName.hpp"
#pragma pack(push, 1)
struct FSTR_DungeonListData {
    char pad_0[0x28];
    FName DungeonType_32_32860A7741956D6E50F8B0974B291743; // 0x28
    char pad_30[0x30];
    FMissionName MissionLock_44_34440BA848D5C4F6A7FD88A60954A2AD; // 0x60
    FString MissionStepLock_46_E0938961485608D96C8E5480DBB9B08E; // 0x68
    bool OpenAfterMission_45_DF4032E348372ED130F6AFB61D753C21; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
