#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMarkerSyncAnimPosition {
    FName PreviousMarkerName; // 0x0
    FName NextMarkerName; // 0x8
    float PositionBetweenMarkers; // 0x10
}; // Size: 0x14
#pragma pack(pop)
