#pragma once
#include <cstdint>
#include "EFXAutoTriggerZLocation.hpp"
#include "EFXAutoTriggerZType.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarPlayerWorldZ : public UFXAutoTriggerScalar {
public:
    EFXAutoTriggerZLocation Location; // 0x28
    EFXAutoTriggerZType Type; // 0x29
    char pad_2a[0x6];
    static UFXAutoTriggerScalarPlayerWorldZ* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
