#pragma once
#include <cstdint>
#include "FARSessionPayload.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FARQRCodeUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    char pad_18[0x8];
    FTransform WorldTransform; // 0x20
    FVector Extents; // 0x50
    char pad_5c[0x4];
    FString QRCode; // 0x60
}; // Size: 0x70
#pragma pack(pop)
