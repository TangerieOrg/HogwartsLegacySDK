#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#pragma pack(push, 1)
class UGizmoLineHandleComponent : public UGizmoBaseComponent {
public:
    FVector Normal; // 0x4a0
    float HandleSize; // 0x4ac
    float Thickness; // 0x4b0
    FVector Direction; // 0x4b4
    float Length; // 0x4c0
    bool bImageScale; // 0x4c4
    char pad_4c5[0xb];
    static UGizmoLineHandleComponent* StaticClass();
}; // Size: 0x4d0
#pragma pack(pop)
