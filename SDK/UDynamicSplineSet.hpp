#pragma once
#include <cstdint>
#include "FDynamicSpline.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UDynamicSplineSet : public UDataAsset {
public:
    char pad_30[0x8];
    TArray<FDynamicSpline> DynamicSplines; // 0x38
    static UDynamicSplineSet* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
