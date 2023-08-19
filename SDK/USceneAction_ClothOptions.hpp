#pragma once
#include <cstdint>
#include "FCharacterPieceType.hpp"
#include "USceneRigObjectActionBase.hpp"
class UIntProvider;
class UVectorProvider;
class UFloatProvider;
class UVector2DProvider;
#pragma pack(push, 1)
class USceneAction_ClothOptions : public USceneRigObjectActionBase {
public:
    bool bPiecesListIsInclusive; // 0xa0
    char pad_a1[0x7];
    TArray<FCharacterPieceType> PiecesList; // 0xa8
    char pad_b8[0x50];
    UIntProvider* IterationCount; // 0x108
    UIntProvider* MaxIterationCount; // 0x110
    UIntProvider* SubdivisionCount; // 0x118
    UFloatProvider* TeleportDistanceThreshold; // 0x120
    UFloatProvider* TeleportRotationThreshold; // 0x128
    UFloatProvider* ClothBlendWeight; // 0x130
    UFloatProvider* ClothMaxDistanceScale; // 0x138
    UFloatProvider* EdgeStiffness; // 0x140
    UFloatProvider* BendingStiffness; // 0x148
    UFloatProvider* AreaStiffness; // 0x150
    UVector2DProvider* TetherStiffness; // 0x158
    UFloatProvider* DampingCoefficient; // 0x160
    UFloatProvider* DragCoefficient; // 0x168
    UFloatProvider* LiftCoefficient; // 0x170
    UVectorProvider* AdditionalWindVelocity; // 0x178
    UFloatProvider* GravityScale; // 0x180
    UVectorProvider* GravityOverride; // 0x188
    UVector2DProvider* AnimDriveStiffness; // 0x190
    UVector2DProvider* AnimDriveDamping; // 0x198
    UFloatProvider* WindVelocityScale; // 0x1a0
    UFloatProvider* LinearVelocityScale; // 0x1a8
    UFloatProvider* AngularVelocityScale; // 0x1b0
    UFloatProvider* FictitiousAngularScale; // 0x1b8
    static USceneAction_ClothOptions* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
