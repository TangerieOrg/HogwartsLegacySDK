#pragma once
#include <cstdint>
#include "ECameraStackSplineType.hpp"
#include "FVector.hpp"
#include "UCameraStackSplineGetter.hpp"
#pragma pack(push, 1)
class UCameraStackNearbyCameraSplineGetter : public UCameraStackSplineGetter {
public:
    ECameraStackSplineType SplineType; // 0x30
    char pad_31[0x3];
    float DistanceThreshold; // 0x34
    FVector CameraTargetOffset; // 0x38
    float LookAheadDistance; // 0x44
    char pad_48[0x10];
    static UCameraStackNearbyCameraSplineGetter* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
