#pragma once
#include <cstdint>
#include "FRemapScalarRange.hpp"
#include "FSkinFXMaterialScalarProperty.hpp"
#include "USkinFXParameterDriver.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class USkinFXParameterDriverAutoFXScalar : public USkinFXParameterDriver {
public:
    FSkinFXMaterialScalarProperty Parameter; // 0x28
    UFXAutoTriggerScalar* AutoTriggerScalar; // 0x30
    FRemapScalarRange RemapScalarRange; // 0x38
    bool bUseRemapScalarRange; // 0x48
    char pad_49[0x7];
    static USkinFXParameterDriverAutoFXScalar* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
