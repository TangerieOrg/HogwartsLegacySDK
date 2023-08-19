#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#pragma pack(push, 1)
class UGizmoArrowComponent : public UGizmoBaseComponent {
public:
    FVector Direction; // 0x4a0
    float Gap; // 0x4ac
    float Length; // 0x4b0
    float Thickness; // 0x4b4
    char pad_4b8[0x8];
    static UGizmoArrowComponent* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
