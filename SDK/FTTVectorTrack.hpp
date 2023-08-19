#pragma once
#include <cstdint>
#include "FTTPropertyTrack.hpp"
class UCurveVector;
#pragma pack(push, 1)
struct FTTVectorTrack : public FTTPropertyTrack {
    UCurveVector* CurveVector; // 0x20
}; // Size: 0x28
#pragma pack(pop)
