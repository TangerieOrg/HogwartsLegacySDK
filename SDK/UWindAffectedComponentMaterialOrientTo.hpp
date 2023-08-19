#pragma once
#include <cstdint>
#include "FWindAffectedParameters.hpp"
#include "UWindAffectedComponentOrientTo.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UWindAffectedComponentMaterialOrientTo : public UWindAffectedComponentOrientTo {
public:
    UMaterialInstanceDynamic* WindAffectedMaterial; // 0x250
    FWindAffectedParameters WindAffectedParameters; // 0x258
    char pad_27c[0x4];
    static UWindAffectedComponentMaterialOrientTo* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
