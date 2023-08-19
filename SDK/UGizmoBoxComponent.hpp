#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#pragma pack(push, 1)
class UGizmoBoxComponent : public UGizmoBaseComponent {
public:
    FVector Origin; // 0x4a0
    char pad_4ac[0x4];
    FQuat Rotation; // 0x4b0
    FVector Dimensions; // 0x4c0
    float LineThickness; // 0x4cc
    bool bRemoveHiddenLines; // 0x4d0
    bool bEnableAxisFlip; // 0x4d1
    char pad_4d2[0xe];
    static UGizmoBoxComponent* StaticClass();
}; // Size: 0x4e0
#pragma pack(pop)
