#pragma once
#include <cstdint>
#include "UPostProcessingVarScalarBase.hpp"
#pragma pack(push, 1)
class UPostProcessingVarScalarConstant : public UPostProcessingVarScalarBase {
public:
    float Value; // 0x30
    char pad_34[0x4];
    static UPostProcessingVarScalarConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
