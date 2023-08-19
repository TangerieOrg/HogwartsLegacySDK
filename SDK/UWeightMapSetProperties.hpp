#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UWeightMapSetProperties : public UInteractiveToolPropertySet {
public:
    FName WeightMap; // 0x60
    TArray<FString> WeightMapsList; // 0x68
    bool bInvertWeightMap; // 0x78
    char pad_79[0x7];
    static UWeightMapSetProperties* StaticClass();
    TArray<FString> GetWeightMapsFunc();
}; // Size: 0x80
#pragma pack(pop)
