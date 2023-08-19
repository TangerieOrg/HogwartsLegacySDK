#pragma once
#include <cstdint>
#include "FTTPropertyTrack.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
struct FTTLinearColorTrack : public FTTPropertyTrack {
    UCurveLinearColor* CurveLinearColor; // 0x20
}; // Size: 0x28
#pragma pack(pop)
