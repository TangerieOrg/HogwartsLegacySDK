#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FFlockCollisionParameters.hpp"
#include "FFlockMemberInitialState.hpp"
#include "FFlockPersonalities.hpp"
#include "FFlockingParameters.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FFlockingParametersAdjustableBlend.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class UParticleSystemComponent;
class UMeshComponent;
#pragma pack(push, 1)
class AFlockingActor : public AActor {
public:
    UStaticMeshComponent* Leader; // 0x248
    FFlockingParameters FlockingParams; // 0x250
    bool bEnableCollisions; // 0x2b8
    char pad_2b9[0x3];
    FFlockCollisionParameters CollisionParams; // 0x2bc
    bool bEnableFlocking; // 0x2d0
    char pad_2d1[0x3];
    float FlockingStrength; // 0x2d4
    TArray<FFlockMemberInitialState> FlockInitialStates; // 0x2d8
    bool bEnablePersonalities; // 0x2e8
    char pad_2e9[0x7];
    FFlockPersonalities Personalities; // 0x2f0
    TArray<UMeshComponent*> FlockMemberMeshes; // 0x470
    TArray<UParticleSystemComponent*> FlockMemberParticleSystems; // 0x480
    char pad_490[0x58];
    FFlockingParametersAdjustableBlend BlendFlockingParameters; // 0x4e8
    FVector LastLeaderPos; // 0x5a8
    char pad_5b4[0x4];
    static AFlockingActor* StaticClass();
    void SetFlockingStrength(float Strength);
    void SetAdjustableParameters(FFlockingParametersAdjustable Parameters, float BlendTimeSeconds);
    void Reset();
    static FFlockingParametersAdjustable LerpFlockingParameters(FFlockingParametersAdjustable A, FFlockingParametersAdjustable B, float Alpha);
    void GetAdjustableParameters(FFlockingParametersAdjustable& Parameters);
    void Generate();
}; // Size: 0x5b8
#pragma pack(pop)
