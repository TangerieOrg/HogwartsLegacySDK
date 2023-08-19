#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class UClass;
#pragma pack(push, 1)
class UAIPerformTaskAblAbility : public UAIPerformTaskBase {
public:
    FName AbilityChannelName; // 0xe0
    bool bPlayPartialBodyAnimation; // 0xe8
    char pad_e9[0x7];
    static UAIPerformTaskAblAbility* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
