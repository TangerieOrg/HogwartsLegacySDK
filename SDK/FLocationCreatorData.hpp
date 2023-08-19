#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
class AStation;
class ADynamicObjectVolume;
#pragma pack(push, 1)
struct FLocationCreatorData {
    FDbSingleColumnInfo LocationID; // 0x0
    FString LocationSchedule; // 0x88
    AStation* LocationStation; // 0x98
    TArray<ADynamicObjectVolume*> LocationSpawners; // 0xa0
}; // Size: 0xb0
#pragma pack(pop)
