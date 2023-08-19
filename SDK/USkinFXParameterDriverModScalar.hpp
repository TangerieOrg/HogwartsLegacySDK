#pragma once
#include <cstdint>
#include "FSkinFXMaterialScalarProperty.hpp"
#include "USkinFXParameterDriverMod.hpp"
#pragma pack(push, 1)
class USkinFXParameterDriverModScalar : public USkinFXParameterDriverMod {
public:
    FSkinFXMaterialScalarProperty ModByParameter; // 0x30
    float DefaultValue; // 0x38
    bool bUseDefaultValue; // 0x3c
    char pad_3d[0x3];
    static USkinFXParameterDriverModScalar* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
