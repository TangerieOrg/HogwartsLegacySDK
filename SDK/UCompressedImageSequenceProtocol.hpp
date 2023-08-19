#pragma once
#include <cstdint>
#include "UImageSequenceProtocol.hpp"
#pragma pack(push, 1)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
public:
    int32_t CompressionQuality; // 0xd8
    char pad_dc[0x4];
    static UCompressedImageSequenceProtocol* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
