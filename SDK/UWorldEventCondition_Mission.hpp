#pragma once
#include <cstdint>
#include "MissionStatus.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_Mission : public UWorldEventCondition {
public:
    FName MissionName; // 0x38
    MissionStatus MissionStatusToCheck; // 0x40
    char pad_41[0xf];
    static UWorldEventCondition_Mission* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
