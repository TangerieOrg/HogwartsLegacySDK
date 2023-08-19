#pragma once
#include <cstdint>
#include "EPhysicsAssetSolverType.hpp"
#include "FPhysicsAssetSolverSettings.hpp"
#include "FSolverIterations.hpp"
#include "UObject.hpp"
class USkeletalBodySetup;
class UPhysicsConstraintTemplate;
class UBodySetup;
class UThumbnailInfo;
#pragma pack(push, 1)
class UPhysicsAsset : public UObject {
public:
    char pad_28[0x8];
    TArray<int32_t> BoundsBodies; // 0x30
    TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
    TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
    FPhysicsAssetSolverSettings SolverSettings; // 0x60
    FSolverIterations SolverIterations; // 0x78
    EPhysicsAssetSolverType SolverType; // 0x90
    uint8_t bNotForDedicatedServer : 1; // 0x91
    uint8_t pad_bitfield_91_1 : 7;
    char pad_92[0xa6];
    UThumbnailInfo* ThumbnailInfo; // 0x138
    TArray<UBodySetup*> BodySetup; // 0x140
    static UPhysicsAsset* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
