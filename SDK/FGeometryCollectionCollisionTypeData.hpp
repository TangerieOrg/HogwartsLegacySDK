#pragma once
#include <cstdint>
#include "ECollisionTypeEnum.hpp"
#include "EImplicitTypeEnum.hpp"
#include "FGeometryCollectionCollisionParticleData.hpp"
#include "FGeometryCollectionLevelSetData.hpp"
#pragma pack(push, 1)
struct FGeometryCollectionCollisionTypeData {
    ECollisionTypeEnum CollisionType; // 0x0
    EImplicitTypeEnum ImplicitType; // 0x1
    char pad_2[0x2];
    FGeometryCollectionLevelSetData LevelSet; // 0x4
    FGeometryCollectionCollisionParticleData CollisionParticles; // 0x14
    float CollisionObjectReductionPercentage; // 0x1c
    float CollisionMarginFraction; // 0x20
}; // Size: 0x24
#pragma pack(pop)
