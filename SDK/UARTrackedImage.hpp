#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UARTrackedGeometry.hpp"
class UARCandidateImage;
#pragma pack(push, 1)
class UARTrackedImage : public UARTrackedGeometry {
public:
    FVector2D EstimatedSize; // 0x100
    char pad_108[0x8];
    static UARTrackedImage* StaticClass();
    FVector2D GetEstimateSize();
    UARCandidateImage* GetDetectedImage();
}; // Size: 0x110
#pragma pack(pop)
