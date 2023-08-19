#pragma once
#include <cstdint>
#include "ULakeParameterGeneratorBase.hpp"
class ULakeParametersPreset;
#pragma pack(push, 1)
class ULakeParameterPresetGenerator : public ULakeParameterGeneratorBase {
public:
    ULakeParametersPreset* Preset; // 0x28
    static ULakeParameterPresetGenerator* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
