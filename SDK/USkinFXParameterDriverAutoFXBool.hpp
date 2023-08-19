#pragma once
#include <cstdint>
#include "FSkinFXMaterialScalarProperty.hpp"
#include "USkinFXParameterDriver.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class USkinFXParameterDriverAutoFXBool : public USkinFXParameterDriver {
public:
    FSkinFXMaterialScalarProperty Parameter; // 0x28
    UFXAutoTriggerBool* AutoTriggerBool; // 0x30
    float ValueIfFalse; // 0x38
    float ValueIfTrue; // 0x3c
    static USkinFXParameterDriverAutoFXBool* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
