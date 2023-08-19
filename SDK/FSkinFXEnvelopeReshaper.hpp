#pragma once
#include <cstdint>
#include "FSkinFXEnvelopeEase.hpp"
#pragma pack(push, 1)
struct FSkinFXEnvelopeReshaper {
    FSkinFXEnvelopeEase Shaping; // 0x0
    bool bReshape; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
