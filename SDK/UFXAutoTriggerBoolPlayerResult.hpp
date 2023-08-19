#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolPlayerResult : public UFXAutoTriggerBool {
public:
    FName_GameLogicBoolResult PlayerResult; // 0x28
    static UFXAutoTriggerBoolPlayerResult* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
