#pragma once
#include <cstdint>
#include "EHoleFillOpFillType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UHoleFillToolProperties : public UInteractiveToolPropertySet {
public:
    EHoleFillOpFillType FillType; // 0x60
    bool bRemoveIsolatedTriangles; // 0x61
    char pad_62[0x6];
    static UHoleFillToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
