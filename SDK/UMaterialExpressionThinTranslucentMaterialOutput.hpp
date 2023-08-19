#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput TransmittanceColor; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionThinTranslucentMaterialOutput* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
