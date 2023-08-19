#pragma once
#include <cstdint>
#include "FCharacterPieceType.hpp"
#include "UAblAbilityTask.hpp"
class UIntProvider;
class UVectorProvider;
class UFloatProvider;
class UVector2DProvider;
#pragma pack(push, 1)
class UablClothOptionsTask : public UAblAbilityTask {
public:
    bool bPiecesListIsInclusive; // 0x70
    char pad_71[0x7];
    TArray<FCharacterPieceType> PiecesList; // 0x78
    char pad_88[0x50];
    UIntProvider* IterationCount; // 0xd8
    UIntProvider* MaxIterationCount; // 0xe0
    UIntProvider* SubdivisionCount; // 0xe8
    UFloatProvider* TeleportDistanceThreshold; // 0xf0
    UFloatProvider* TeleportRotationThreshold; // 0xf8
    UFloatProvider* ClothBlendWeight; // 0x100
    UFloatProvider* ClothMaxDistanceScale; // 0x108
    UFloatProvider* EdgeStiffness; // 0x110
    UFloatProvider* BendingStiffness; // 0x118
    UFloatProvider* AreaStiffness; // 0x120
    UVector2DProvider* TetherStiffness; // 0x128
    UFloatProvider* DampingCoefficient; // 0x130
    UFloatProvider* DragCoefficient; // 0x138
    UFloatProvider* LiftCoefficient; // 0x140
    UVectorProvider* AdditionalWindVelocity; // 0x148
    UFloatProvider* GravityScale; // 0x150
    UVectorProvider* GravityOverride; // 0x158
    UVector2DProvider* AnimDriveStiffness; // 0x160
    UVector2DProvider* AnimDriveDamping; // 0x168
    UFloatProvider* WindVelocityScale; // 0x170
    UFloatProvider* LinearVelocityScale; // 0x178
    UFloatProvider* AngularVelocityScale; // 0x180
    UFloatProvider* FictitiousAngularScale; // 0x188
    static UablClothOptionsTask* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
