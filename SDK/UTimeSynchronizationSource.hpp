#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeSynchronizationSource : public UObject {
public:
    bool bUseForSynchronization; // 0x28
    char pad_29[0x3];
    int32_t FrameOffset; // 0x2c
    static UTimeSynchronizationSource* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
