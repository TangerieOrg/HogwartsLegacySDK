#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput Input; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionTangentOutput* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
