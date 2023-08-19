#pragma once
#include <cstdint>
#include "FHairExternalForces.hpp"
#include "FHairMaterialConstraints.hpp"
#include "FHairSolverSettings.hpp"
#include "FHairStrandsParameters.hpp"
#pragma pack(push, 1)
struct FHairGroupsPhysics {
    FHairSolverSettings SolverSettings; // 0x0
    FHairExternalForces ExternalForces; // 0x38
    char pad_54[0x4];
    FHairMaterialConstraints MaterialConstraints; // 0x58
    FHairStrandsParameters StrandsParameters; // 0x230
}; // Size: 0x2c8
#pragma pack(pop)
