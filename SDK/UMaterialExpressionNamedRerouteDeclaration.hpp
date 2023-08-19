#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpressionNamedRerouteBase.hpp"
#pragma pack(push, 1)
class UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase {
public:
    FExpressionInput Input; // 0x40
    FName Name; // 0x54
    FGuid VariableGuid; // 0x5c
    char pad_6c[0x4];
    static UMaterialExpressionNamedRerouteDeclaration* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
