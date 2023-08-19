#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UClass;
class UCurveFloat;
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class UTransformationSpellToolComponent : public UActorComponent {
public:
    UClass* PreviewActorClass; // 0xc8
    UClass* LeftBehindPreviewActorClass; // 0xd0
    UClass* SnappingLineVisualizationClass; // 0xd8
    UClass* SnappingTargetObjectVisualizationClass; // 0xe0
    float DefaultDistance; // 0xe8
    float MinDistance; // 0xec
    float MaxDistance; // 0xf0
    float DistanceSpeed; // 0xf4
    float ObjectLevitationHeight; // 0xf8
    float MinFootprintDistance; // 0xfc
    float TransformRotationAngle; // 0x100
    float PowerpointFindRange; // 0x104
    float PowerpointSnapRange; // 0x108
    float PowerpointWallSnapRange; // 0x10c
    float IncreasedSnapRangeThreshold; // 0x110
    float PowerpointMaxSpeed; // 0x114
    int32_t PowerpointMaxNearbySnappingPoints; // 0x118
    float PowerpointValidLocationStickingRange; // 0x11c
    float NoSnappingValidLocationStickingRange; // 0x120
    float WallSnappingValidLocationStickingRange; // 0x124
    float WallNoSnappingValidLocationStickingRange; // 0x128
    float WallAlignmentFindRange; // 0x12c
    float WallAlignmentSnapRange; // 0x130
    float LeftBehindPreviewFadeInStartDistance; // 0x134
    float LeftBehindPreviewFadeInEndDistance; // 0x138
    char pad_13c[0x4];
    UCurveFloat* TargetPointScreenPositionOverPitchSmall; // 0x140
    UCurveFloat* TargetPointScreenPositionOverPitchLarge; // 0x148
    float ObjectRadiusSmall; // 0x150
    float ObjectRadiusLarge; // 0x154
    float TwirlDirection; // 0x158
    float DefaultSmallScale; // 0x15c
    float DefaultLargeScale; // 0x160
    char pad_164[0x4];
    ATransfigurationPreviewActor* CurrentPreviewActor; // 0x168
    char pad_170[0xe0];
    static UTransformationSpellToolComponent* StaticClass();
    void InitialCameraBlendIsComplete();
    float GetTargetPointScreenPosition();
    float GetNormalizedObjectSizeRatio();
    FName GetCurrentColor();
    void AdjustDistance(float InAdjust);
}; // Size: 0x250
#pragma pack(pop)
