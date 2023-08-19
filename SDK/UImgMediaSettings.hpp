#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UImgMediaSettings : public UObject {
public:
    FFrameRate DefaultFrameRate; // 0x28
    float CacheBehindPercentage; // 0x30
    float CacheSizeGB; // 0x34
    int32_t CacheThreads; // 0x38
    int32_t CacheThreadStackSizeKB; // 0x3c
    float GlobalCacheSizeGB; // 0x40
    bool UseGlobalCache; // 0x44
    char pad_45[0x3];
    uint32_t ExrDecoderThreads; // 0x48
    char pad_4c[0x4];
    FString DefaultProxy; // 0x50
    bool UseDefaultProxy; // 0x60
    char pad_61[0x7];
    static UImgMediaSettings* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
