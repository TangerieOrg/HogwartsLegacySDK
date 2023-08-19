#pragma once
#include <cstdint>
#include "EAkCallbackType.hpp"
#include "FAkSegmentInfo.hpp"
#include "UAkCallbackInfo.hpp"
#pragma pack(push, 1)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo {
public:
    int32_t PlayingID; // 0x30
    FAkSegmentInfo SegmentInfo; // 0x34
    EAkCallbackType MusicSyncType; // 0x58
    char pad_59[0x7];
    FString UserCueName; // 0x60
    static UAkMusicSyncCallbackInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
