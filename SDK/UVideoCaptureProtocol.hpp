#pragma once
#include <cstdint>
#include "UFrameGrabberProtocol.hpp"
#pragma pack(push, 1)
class UVideoCaptureProtocol : public UFrameGrabberProtocol {
public:
    bool bUseCompression; // 0x68
    char pad_69[0x3];
    float CompressionQuality; // 0x6c
    char pad_70[0x10];
    static UVideoCaptureProtocol* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
