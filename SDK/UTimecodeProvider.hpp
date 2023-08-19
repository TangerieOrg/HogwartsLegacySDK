#pragma once
#include <cstdint>
#include "ETimecodeProviderSynchronizationState.hpp"
#include "FFrameRate.hpp"
#include "FQualifiedFrameTime.hpp"
#include "FTimecode.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimecodeProvider : public UObject {
public:
    float FrameDelay; // 0x28
    char pad_2c[0x4];
    static UTimecodeProvider* StaticClass();
    FTimecode GetTimecode();
    ETimecodeProviderSynchronizationState GetSynchronizationState();
    FQualifiedFrameTime GetQualifiedFrameTime();
    FFrameRate GetFrameRate();
    FTimecode GetDelayedTimecode();
    FQualifiedFrameTime GetDelayedQualifiedFrameTime();
    bool FetchTimecode(FQualifiedFrameTime& OutFrameTime);
    void FetchAndUpdate();
}; // Size: 0x30
#pragma pack(pop)
