#pragma once
#include <cstdint>
#include "UPoseSampler.hpp"
#pragma pack(push, 1)
class UPoseSampler_BlinkEyes : public UPoseSampler {
public:
    char pad_28[0x70];
    static UPoseSampler_BlinkEyes* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
