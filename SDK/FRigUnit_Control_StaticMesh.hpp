#pragma once
#include <cstdint>
#include "FRigUnit_Control.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control {
    FTransform MeshTransform; // 0xd0
}; // Size: 0x100
#pragma pack(pop)
