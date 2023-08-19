#pragma once
#include <cstdint>
#include "USoundNodeDistanceCrossFade.hpp"
#pragma pack(push, 1)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade {
public:
    FName ParamName; // 0x58
    static USoundNodeParamCrossFade* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
