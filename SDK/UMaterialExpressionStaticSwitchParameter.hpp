#pragma once
#include <cstdint>
#include "UMaterialExpressionStaticBoolParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter {
public:
    static UMaterialExpressionStaticSwitchParameter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
