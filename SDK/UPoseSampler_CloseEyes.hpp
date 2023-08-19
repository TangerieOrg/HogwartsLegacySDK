#pragma once
#include <cstdint>
#include "UPoseSampler.hpp"
#pragma pack(push, 1)
class UPoseSampler_CloseEyes : public UPoseSampler {
public:
    char pad_28[0x60];
    static UPoseSampler_CloseEyes* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
