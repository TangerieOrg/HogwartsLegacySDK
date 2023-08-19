#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "FVector2D.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FTouchInputControl {
    UTexture2D* Image1; // 0x0
    UTexture2D* Image2; // 0x8
    FVector2D Center; // 0x10
    FVector2D VisualSize; // 0x18
    FVector2D ThumbSize; // 0x20
    FVector2D InteractionSize; // 0x28
    FVector2D InputScale; // 0x30
    FKey MainInputKey; // 0x38
    FKey AltInputKey; // 0x50
}; // Size: 0x68
#pragma pack(pop)
