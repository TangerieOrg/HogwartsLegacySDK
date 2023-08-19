#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarFloorDistance : public UFXAutoTriggerScalar {
public:
    float NoFloorDistance; // 0x28
    int32_t FramesPerUpdate; // 0x2c
    static UFXAutoTriggerScalarFloorDistance* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
