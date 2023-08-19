#pragma once
#include <cstdint>
#include "FRemapScalarRange.hpp"
#include "USkinFXParameterDriverMod.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class USkinFXParameterDriverAutoFXScalarMod : public USkinFXParameterDriverMod {
public:
    UFXAutoTriggerScalar* AutoTriggerScalar; // 0x30
    FRemapScalarRange RemapScalarRange; // 0x38
    bool bUseRemapScalarRange; // 0x48
    char pad_49[0x7];
    static USkinFXParameterDriverAutoFXScalarMod* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
