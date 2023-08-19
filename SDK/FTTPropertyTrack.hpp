#pragma once
#include <cstdint>
#include "FTTTrackBase.hpp"
#pragma pack(push, 1)
struct FTTPropertyTrack : public FTTTrackBase {
    FName PropertyName; // 0x18
}; // Size: 0x20
#pragma pack(pop)
