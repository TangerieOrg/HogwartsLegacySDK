#pragma once
#include <cstdint>
#include "FARPose3D.hpp"
#include "UARTrackedGeometry.hpp"
#pragma pack(push, 1)
class UARTrackedPose : public UARTrackedGeometry {
public:
    char pad_100[0x50];
    static UARTrackedPose* StaticClass();
    FARPose3D GetTrackedPoseData();
}; // Size: 0x150
#pragma pack(pop)
