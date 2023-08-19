#pragma once
#include <cstdint>
#include "EHDRCaptureGamut.hpp"
#include "UImageSequenceProtocol.hpp"
#pragma pack(push, 1)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol {
public:
    bool bCompressed; // 0xd8
    EHDRCaptureGamut CaptureGamut; // 0xd9
    char pad_da[0xe];
    static UImageSequenceProtocol_EXR* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
