#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialParameterColor : public UMultiFX2_MaterialParameterBase {
public:
    FLinearColor ColorParameter; // 0x90
    static UMultiFX2_MaterialParameterColor* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
