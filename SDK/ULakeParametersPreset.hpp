#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class ULakeParameterGenerator;
#pragma pack(push, 1)
class ULakeParametersPreset : public UDataAsset {
public:
    ULakeParameterGenerator* ParametersGenerator; // 0x30
    static ULakeParametersPreset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
