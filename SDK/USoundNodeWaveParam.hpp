#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeWaveParam : public USoundNode {
public:
    FName WaveParameterName; // 0x48
    static USoundNodeWaveParam* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
