#pragma once
#include <cstdint>
#include "FARSessionPayload.hpp"
#include "FTransform.hpp"
#include "FVector2D.hpp"
class UARCandidateImage;
#pragma pack(push, 1)
struct FARImageUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    char pad_18[0x8];
    FTransform WorldTransform; // 0x20
    UARCandidateImage* DetectedImage; // 0x50
    FVector2D EstimatedSize; // 0x58
}; // Size: 0x60
#pragma pack(pop)
