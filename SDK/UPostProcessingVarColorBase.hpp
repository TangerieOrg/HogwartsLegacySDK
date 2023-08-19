#pragma once
#include <cstdint>
#include "EPostProcessingVarColor.hpp"
#include "UPostProcessingVar.hpp"
#pragma pack(push, 1)
class UPostProcessingVarColorBase : public UPostProcessingVar {
public:
    EPostProcessingVarColor Var; // 0x28
    char pad_29[0x7];
    static UPostProcessingVarColorBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
