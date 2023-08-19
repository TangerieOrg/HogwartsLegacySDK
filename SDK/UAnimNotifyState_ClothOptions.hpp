#pragma once
#include <cstdint>
#include "FCharacterPieceType.hpp"
#include "UAnimNotifyState.hpp"
class UIntProvider;
class UVectorProvider;
class UFloatProvider;
class UVector2DProvider;
#pragma pack(push, 1)
class UAnimNotifyState_ClothOptions : public UAnimNotifyState {
public:
    bool bPiecesListIsInclusive; // 0x30
    char pad_31[0x7];
    TArray<FCharacterPieceType> PiecesList; // 0x38
    char pad_48[0x50];
    UIntProvider* IterationCount; // 0x98
    UIntProvider* MaxIterationCount; // 0xa0
    UIntProvider* SubdivisionCount; // 0xa8
    UFloatProvider* TeleportDistanceThreshold; // 0xb0
    UFloatProvider* TeleportRotationThreshold; // 0xb8
    UFloatProvider* ClothBlendWeight; // 0xc0
    UFloatProvider* ClothMaxDistanceScale; // 0xc8
    UFloatProvider* EdgeStiffness; // 0xd0
    UFloatProvider* BendingStiffness; // 0xd8
    UFloatProvider* AreaStiffness; // 0xe0
    UVector2DProvider* TetherStiffness; // 0xe8
    UFloatProvider* DampingCoefficient; // 0xf0
    UFloatProvider* DragCoefficient; // 0xf8
    UFloatProvider* LiftCoefficient; // 0x100
    UVectorProvider* AdditionalWindVelocity; // 0x108
    UFloatProvider* GravityScale; // 0x110
    UVectorProvider* GravityOverride; // 0x118
    UVector2DProvider* AnimDriveStiffness; // 0x120
    UVector2DProvider* AnimDriveDamping; // 0x128
    UFloatProvider* WindVelocityScale; // 0x130
    UFloatProvider* LinearVelocityScale; // 0x138
    UFloatProvider* AngularVelocityScale; // 0x140
    UFloatProvider* FictitiousAngularScale; // 0x148
    char pad_150[0x50];
    static UAnimNotifyState_ClothOptions* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
