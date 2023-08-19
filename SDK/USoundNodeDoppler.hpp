#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeDoppler : public USoundNode {
public:
    float DopplerIntensity; // 0x48
    bool bUseSmoothing; // 0x4c
    char pad_4d[0x3];
    float SmoothingInterpSpeed; // 0x50
    char pad_54[0x4];
    static USoundNodeDoppler* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
