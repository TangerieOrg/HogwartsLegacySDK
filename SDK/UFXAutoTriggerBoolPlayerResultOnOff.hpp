#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolPlayerResultOnOff : public UFXAutoTriggerScalar {
public:
    FName_GameLogicBoolResult PlayerResult; // 0x28
    static UFXAutoTriggerBoolPlayerResultOnOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
