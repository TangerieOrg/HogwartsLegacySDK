#pragma once
#include <cstdint>
#include "EARAltitudeSource.hpp"
#include "FARSessionPayload.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FARGeoAnchorUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    char pad_18[0x8];
    FTransform WorldTransform; // 0x20
    float Longitude; // 0x50
    float Latitude; // 0x54
    float AltitudeMeters; // 0x58
    EARAltitudeSource AltitudeSource; // 0x5c
    char pad_5d[0x3];
    FString AnchorName; // 0x60
}; // Size: 0x70
#pragma pack(pop)
