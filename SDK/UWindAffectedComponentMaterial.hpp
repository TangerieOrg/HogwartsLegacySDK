#pragma once
#include <cstdint>
#include "FWindAffectedParameters.hpp"
#include "UWindAffectedComponentRefresh.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UWindAffectedComponentMaterial : public UWindAffectedComponentRefresh {
public:
    UMaterialInstanceDynamic* WindAffectedMaterial; // 0x250
    FWindAffectedParameters WindAffectedParameters; // 0x258
    char pad_27c[0x4];
    static UWindAffectedComponentMaterial* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
