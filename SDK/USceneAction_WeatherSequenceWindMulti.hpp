#pragma once
#include <cstdint>
#include "EWindParametersTimeBase.hpp"
#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceWindMulti : public USceneAction_WeatherSequence {
public:
    float BlendInTime; // 0x88
    EWindParametersTimeBase BlendInTimeBase; // 0x8c
    char pad_8d[0x3];
    TArray<FWindDefinitionName> Definitions; // 0x90
    bool bRandomizeOrder; // 0xa0
    char pad_a1[0x7];
    static USceneAction_WeatherSequenceWindMulti* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
