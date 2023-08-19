#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#pragma pack(push, 1)
class UGizmoCircleComponent : public UGizmoBaseComponent {
public:
    FVector Normal; // 0x4a0
    float Radius; // 0x4ac
    float Thickness; // 0x4b0
    int32_t NumSides; // 0x4b4
    bool bViewAligned; // 0x4b8
    bool bOnlyAllowFrontFacingHits; // 0x4b9
    char pad_4ba[0x6];
    static UGizmoCircleComponent* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
