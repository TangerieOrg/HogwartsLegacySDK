#pragma once
#include <cstdint>
#include "EARObjectClassification.hpp"
#include "FARSessionPayload.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FARMeshUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    char pad_18[0x8];
    FTransform WorldTransform; // 0x20
    EARObjectClassification ObjectClassification; // 0x50
    char pad_51[0xf];
}; // Size: 0x60
#pragma pack(pop)
