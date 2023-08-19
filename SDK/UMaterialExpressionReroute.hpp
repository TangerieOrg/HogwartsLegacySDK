#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionRerouteBase.hpp"
#pragma pack(push, 1)
class UMaterialExpressionReroute : public UMaterialExpressionRerouteBase {
public:
    FExpressionInput Input; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionReroute* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
