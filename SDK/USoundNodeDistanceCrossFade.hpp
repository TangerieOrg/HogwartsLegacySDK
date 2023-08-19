#pragma once
#include <cstdint>
#include "FDistanceDatum.hpp"
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeDistanceCrossFade : public USoundNode {
public:
    TArray<FDistanceDatum> CrossFadeInput; // 0x48
    static USoundNodeDistanceCrossFade* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
