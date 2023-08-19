#pragma once
#include <cstdint>
#include "FHairBendConstraint.hpp"
#include "FHairCollisionConstraint.hpp"
#include "FHairStretchConstraint.hpp"
#pragma pack(push, 1)
struct FHairMaterialConstraints {
    FHairBendConstraint BendConstraint; // 0x0
    FHairStretchConstraint StretchConstraint; // 0x98
    FHairCollisionConstraint CollisionConstraint; // 0x130
}; // Size: 0x1d8
#pragma pack(pop)
