#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMaterial;
class UMaterialFunction;
#pragma pack(push, 1)
class UMaterialExpression : public UObject {
public:
    UMaterial* Material; // 0x28
    UMaterialFunction* Function; // 0x30
    uint8_t bIsParameterExpression : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    static UMaterialExpression* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
