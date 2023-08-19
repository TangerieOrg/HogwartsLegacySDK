#pragma once
#include <cstdint>
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_TimeOfTheDay : public UWorldEventCondition {
public:
    int32_t StartHour; // 0x38
    int32_t StartMinute; // 0x3c
    int32_t StartSeconds; // 0x40
    int32_t EndHour; // 0x44
    int32_t EndMinute; // 0x48
    int32_t EndSeconds; // 0x4c
    bool bDespawnOnConditionFail; // 0x50
    char pad_51[0xf];
    static UWorldEventCondition_TimeOfTheDay* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
