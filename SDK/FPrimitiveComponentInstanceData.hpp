#pragma once
#include <cstdint>
#include "FSceneComponentInstanceData.hpp"
#include "FTransform.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData {
    char pad_b8[0x8];
    FTransform ComponentTransform; // 0xc0
    int32_t VisibilityId; // 0xf0
    char pad_f4[0x4];
    UPrimitiveComponent* LODParent; // 0xf8
}; // Size: 0x100
#pragma pack(pop)
