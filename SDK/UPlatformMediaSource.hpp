#pragma once
#include <cstdint>
#include "UMediaSource.hpp"
#pragma pack(push, 1)
class UPlatformMediaSource : public UMediaSource {
public:
    UMediaSource* MediaSource; // 0x80
    static UPlatformMediaSource* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
