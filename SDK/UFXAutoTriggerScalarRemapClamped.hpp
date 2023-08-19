#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarRemapClamped : public UFXAutoTriggerScalarSingleParam {
public:
    FVector2D InputRange; // 0x30
    FVector2D OutputRange; // 0x38
    static UFXAutoTriggerScalarRemapClamped* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
