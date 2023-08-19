#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UHogsmeadeMaterialFade : public UObject {
public:
    UMaterialInstanceDynamic* Material; // 0x28
    char pad_30[0x10];
    static UHogsmeadeMaterialFade* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
