#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCanvasUVTri {
    FVector2D V0_Pos; // 0x0
    FVector2D V0_UV; // 0x8
    FLinearColor V0_Color; // 0x10
    FVector2D V1_Pos; // 0x20
    FVector2D V1_UV; // 0x28
    FLinearColor V1_Color; // 0x30
    FVector2D V2_Pos; // 0x40
    FVector2D V2_UV; // 0x48
    FLinearColor V2_Color; // 0x50
}; // Size: 0x60
#pragma pack(pop)
