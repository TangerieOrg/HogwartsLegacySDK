#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMaterialExpressionNamedRerouteBase.hpp"
class UMaterialExpressionNamedRerouteDeclaration;
#pragma pack(push, 1)
class UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase {
public:
    UMaterialExpressionNamedRerouteDeclaration* Declaration; // 0x40
    FGuid DeclarationGuid; // 0x48
    static UMaterialExpressionNamedRerouteUsage* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
