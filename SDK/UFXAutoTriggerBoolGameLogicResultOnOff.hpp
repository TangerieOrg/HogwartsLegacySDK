#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameLogicResultOnOff : public UFXAutoTriggerScalar {
public:
    FName_GameLogicBoolResult Result; // 0x28
    static UFXAutoTriggerBoolGameLogicResultOnOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
