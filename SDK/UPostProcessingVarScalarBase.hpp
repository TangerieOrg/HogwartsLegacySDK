#pragma once
#include <cstdint>
#include "EPostProcessingVarScalar.hpp"
#include "UPostProcessingVar.hpp"
#pragma pack(push, 1)
class UPostProcessingVarScalarBase : public UPostProcessingVar {
public:
    EPostProcessingVarScalar Var; // 0x28
    char pad_29[0x7];
    static UPostProcessingVarScalarBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
