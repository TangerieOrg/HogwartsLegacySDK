#pragma once
#include <cstdint>
#include "FGrainTableEntry.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMotoSynthSource : public UObject {
public:
    bool bConvertTo8Bit; // 0x28
    char pad_29[0x3];
    float DownSampleFactor; // 0x2c
    FRuntimeFloatCurve RPMCurve; // 0x30
    TArray<float> SourceData; // 0xb8
    TArray<int16_t> SourceDataPCM; // 0xc8
    int32_t SourceSampleRate; // 0xd8
    char pad_dc[0x4];
    TArray<FGrainTableEntry> GrainTable; // 0xe0
    char pad_f0[0x8];
    static UMotoSynthSource* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
