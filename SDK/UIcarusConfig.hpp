#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UIcarusConfig : public UObject {
public:
    float BehaviorCirclingMinimumValidPointsRatio; // 0x28
    char pad_2c[0x4];
    static UIcarusConfig* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
