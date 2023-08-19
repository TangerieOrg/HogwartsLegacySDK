#pragma once
#include <cstdint>
#include "UBaseMediaSource.hpp"
#pragma pack(push, 1)
class UTimeSynchronizableMediaSource : public UBaseMediaSource {
public:
    bool bUseTimeSynchronization; // 0x88
    char pad_89[0x3];
    int32_t FrameDelay; // 0x8c
    double TimeDelay; // 0x90
    static UTimeSynchronizableMediaSource* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
