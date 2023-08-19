#pragma once
#include <cstdint>
#include "FTTTrackBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FTTEventTrack : public FTTTrackBase {
    FName FunctionName; // 0x18
    UCurveFloat* CurveKeys; // 0x20
}; // Size: 0x28
#pragma pack(pop)
