#pragma once
#include <cstdint>
#include "AkCodecId.hpp"
class UAkExternalMediaAsset;
#pragma pack(push, 1)
struct FAkExternalSourceInfo {
    FString ExternalSrcName; // 0x0
    AkCodecId CodecID; // 0x10
    char pad_11[0x7];
    FString Filename; // 0x18
    UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
    bool IsStreamed; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
