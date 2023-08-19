#pragma once
#include <cstdint>
#include "FAxis.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FReferenceBoneFrame {
    FBoneReference Bone; // 0x0
    FAxis Axis; // 0x10
}; // Size: 0x20
#pragma pack(pop)
