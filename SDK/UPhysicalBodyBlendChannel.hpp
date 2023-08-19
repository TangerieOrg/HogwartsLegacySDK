#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPhysicalBodyBlendInfo;
#pragma pack(push, 1)
class UPhysicalBodyBlendChannel : public UObject {
public:
    TArray<float> ChannelBlendedWeights; // 0x28
    TArray<float> ChannelFadeWeights; // 0x38
    TArray<UPhysicalBodyBlendInfo*> PhysicalBodyBlendArray; // 0x48
    static UPhysicalBodyBlendChannel* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
