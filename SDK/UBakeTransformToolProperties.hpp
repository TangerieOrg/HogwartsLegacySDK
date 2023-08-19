#pragma once
#include <cstdint>
#include "EBakeScaleMethod.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBakeTransformToolProperties : public UInteractiveToolPropertySet {
public:
    bool bBakeRotation; // 0x60
    EBakeScaleMethod BakeScale; // 0x61
    bool bRecenterPivot; // 0x62
    char pad_63[0x5];
    static UBakeTransformToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
