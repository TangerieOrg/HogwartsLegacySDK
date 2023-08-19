#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FFlockCollisionParameters.hpp"
#include "FFlockGenerationParameters.hpp"
#include "FFlockMemberInitialConditions.hpp"
#include "FFlockMemberInitialState.hpp"
#include "FFlockPersonalities.hpp"
#include "FFlockingFadeParameters.hpp"
#include "FFlockingParameters.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FFlockingParametersAdjustableBlend.hpp"
#include "FVector.hpp"
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
#pragma pack(push, 1)
class AInstancedFlockingActor : public AActor {
public:
    UInstancedStaticMeshComponent* FlockMeshes; // 0x248
    FFlockingParameters FlockingParams; // 0x250
    bool bEnableCollisions; // 0x2b8
    char pad_2b9[0x3];
    FFlockCollisionParameters CollisionParams; // 0x2bc
    bool bEnableFlocking; // 0x2d0
    char pad_2d1[0x3];
    float FlockingStrength; // 0x2d4
    char pad_2d8[0x8];
    FFlockGenerationParameters FlockGenerationParams; // 0x2e0
    FFlockMemberInitialConditions FlockInitialConditions; // 0x350
    char pad_37c[0x4];
    TArray<FFlockMemberInitialState> FlockInitialStates; // 0x380
    FFlockingFadeParameters FadeParameters; // 0x390
    bool bFlockFade; // 0x3c4
    bool bEnablePersonalities; // 0x3c5
    char pad_3c6[0x2];
    FFlockPersonalities Personalities; // 0x3c8
    char pad_548[0x88];
    FFlockingParametersAdjustableBlend BlendFlockingParameters; // 0x5d0
    FVector LastFollowPos; // 0x690
    float Age; // 0x69c
    float FlockFadeRadius; // 0x6a0
    FVector FlockFadeCenter; // 0x6a4
    UMaterialInterface* FlockOriginalMaterial; // 0x6b0
    UMaterialInstanceDynamic* FlockFadeMaterial; // 0x6b8
    static AInstancedFlockingActor* StaticClass();
    void StartFade();
    void SetFlockingStrength(float Strength);
    void SetAdjustableParameters(FFlockingParametersAdjustable Parameters, float BlendTimeSeconds);
    void Reset();
    void GetAdjustableParameters(FFlockingParametersAdjustable& Parameters);
    void Generate();
}; // Size: 0x6c0
#pragma pack(pop)
