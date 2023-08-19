#pragma once
#include <cstdint>
#include "FTTPropertyTrack.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FTTFloatTrack : public FTTPropertyTrack {
    UCurveFloat* CurveFloat; // 0x20
}; // Size: 0x28
#pragma pack(pop)
