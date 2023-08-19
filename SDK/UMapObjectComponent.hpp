#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UMapObjectComponent : public UStaticMeshComponent {
public:
    FDbSingleColumnInfo MyLocationID; // 0x510
    FDbSingleColumnInfo UpLocationID; // 0x598
    FDbSingleColumnInfo DownLocationID; // 0x620
    FDbSingleColumnInfo LeftLocationID; // 0x6a8
    FDbSingleColumnInfo RightLocationID; // 0x730
    bool LimitCamera; // 0x7b8
    char pad_7b9[0x3];
    FVector2D RestrictedRadiusRange; // 0x7bc
    float StartRadius; // 0x7c4
    FVector2D RestrictedPitchRange; // 0x7c8
    float StartPitch; // 0x7d0
    FVector2D RestrictedYawRange; // 0x7d4
    float StartYaw; // 0x7dc
    FVector2D RestrictedElevationRange; // 0x7e0
    float StartElevation; // 0x7e8
    bool HasMaterialInstance; // 0x7ec
    char pad_7ed[0x3];
    FVector MyDBLocation; // 0x7f0
    char pad_7fc[0x4];
    FString ParentComponent; // 0x800
    FString ChildComponent; // 0x810
    FString UpComponent; // 0x820
    FString DownComponent; // 0x830
    FString LeftComponent; // 0x840
    FString RightComponent; // 0x850
    float AnimationSpeed; // 0x860
    float AnimationBounce; // 0x864
    float AnimationBounceFalloff; // 0x868
    float MaxAnimationScale; // 0x86c
    float MinAnimationScale; // 0x870
    char pad_874[0x7c];
    static UMapObjectComponent* StaticClass();
}; // Size: 0x8f0
#pragma pack(pop)
