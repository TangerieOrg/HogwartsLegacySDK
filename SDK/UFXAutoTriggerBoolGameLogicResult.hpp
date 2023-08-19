#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameLogicResult : public UFXAutoTriggerBool {
public:
    FName_GameLogicBoolResult Result; // 0x28
    static UFXAutoTriggerBoolGameLogicResult* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
