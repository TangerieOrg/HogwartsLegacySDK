#pragma once
#include <cstdint>
#include "UWindEnvelopeController.hpp"
#pragma pack(push, 1)
class UWindEnvelopeControllerASR : public UWindEnvelopeController {
public:
    float Delay; // 0x28
    float Attack; // 0x2c
    float Sustain; // 0x30
    float Release; // 0x34
    float Amplitude; // 0x38
    bool bLoop; // 0x3c
    char pad_3d[0x3];
    static UWindEnvelopeControllerASR* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
