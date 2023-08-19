#pragma once
#include <cstdint>
#include "FSceneComponentInstanceData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSplineMeshInstanceData : public FSceneComponentInstanceData {
    FVector StartPos; // 0xb8
    FVector EndPos; // 0xc4
    FVector StartTangent; // 0xd0
    FVector EndTangent; // 0xdc
}; // Size: 0xe8
#pragma pack(pop)
