#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet {
public:
    float SineWaveFrequency; // 0x60
    float SineWavePhaseShift; // 0x64
    FVector SineWaveDirection; // 0x68
    char pad_74[0x4];
    static UDisplaceMeshSineWaveProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
