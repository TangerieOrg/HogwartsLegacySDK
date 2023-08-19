#pragma once
#include <cstdint>
#include "USkinFXParameterDriverMod.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class USkinFXParameterDriverAutoFXBoolMod : public USkinFXParameterDriverMod {
public:
    UFXAutoTriggerBool* AutoTriggerBool; // 0x30
    float ModIfFalse; // 0x38
    float ModIfTrue; // 0x3c
    static USkinFXParameterDriverAutoFXBoolMod* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
