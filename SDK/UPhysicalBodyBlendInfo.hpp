#pragma once
#include <cstdint>
#include "EPhysicalBodyBlendState.hpp"
#include "FAlphaBlend.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPhysicalBodyBlendInfo : public UObject {
public:
    TArray<float> SourceBodyWeights; // 0x28
    TArray<float> DestBodyWeights; // 0x38
    EPhysicalBodyBlendState BlendState; // 0x48
    char pad_49[0x7];
    FAlphaBlend BlendFilter; // 0x50
    int32_t ChannelIndex; // 0x80
    bool bContinuous; // 0x84
    bool bMarkedForDestroy; // 0x85
    char pad_86[0x2];
    static UPhysicalBodyBlendInfo* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
