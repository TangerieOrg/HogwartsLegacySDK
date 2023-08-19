#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UPostProcessingVarColorBase.hpp"
#pragma pack(push, 1)
class UPostProcessingVarColorConstant : public UPostProcessingVarColorBase {
public:
    FLinearColor Value; // 0x30
    static UPostProcessingVarColorConstant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
