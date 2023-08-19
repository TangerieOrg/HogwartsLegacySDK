#pragma once
#include <cstdint>
#include "ERigElementType.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigHierarchyCopyPasteContent {
    TArray<ERigElementType> Types; // 0x0
    TArray<FString> Contents; // 0x10
    TArray<FTransform> LocalTransforms; // 0x20
    TArray<FTransform> GlobalTransforms; // 0x30
}; // Size: 0x40
#pragma pack(pop)
