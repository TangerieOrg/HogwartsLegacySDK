#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EGroundSwarmingExitType.hpp"
#include "FGroundSwarmBurrowingParameters.hpp"
#include "FGroundSwarmExternals.hpp"
#include "FGroundSwarmGenerationParameters.hpp"
#include "FGroundSwarmInitialShapeSettings.hpp"
#include "FGroundSwarmVoxelCollisionParameters.hpp"
#include "FGroundSwarmerInitialConditions.hpp"
#include "FGroundSwarmerInitialState.hpp"
#include "FGroundSwarmingDeathVolumes.hpp"
#include "FGroundSwarmingExternalForces.hpp"
#include "FGroundSwarmingFocus.hpp"
#include "FGroundSwarmingForceModifiers.hpp"
#include "FGroundSwarmingParameters.hpp"
#include "FSimpleTopologyParams.hpp"
#include "FVector.hpp"
class UInstancedStaticMeshComponent;
class UAkComponent;
class UAkAudioEvent;
class UParticleSystem;
#pragma pack(push, 1)
class AInstancedGroundSwarmingActor : public AActor {
public:
    UInstancedStaticMeshComponent* GroundSwarmMeshes; // 0x248
    char pad_250[0x10];
    FGroundSwarmingParameters GroundSwarmingParams; // 0x260
    FGroundSwarmVoxelCollisionParameters CollisionParams; // 0x2b0
    FSimpleTopologyParams TopologyParams; // 0x2e4
    char pad_2fc[0x4];
    FGroundSwarmingFocus ExternalFollow; // 0x300
    float FollowForceModifier; // 0x3a0
    char pad_3a4[0x4];
    FGroundSwarmingExternalForces ExternalForces; // 0x3a8
    FGroundSwarmingForceModifiers ForceModifiers; // 0x3b8
    FGroundSwarmingDeathVolumes DeathVolumes; // 0x3c8
    char pad_3d8[0x8];
    FGroundSwarmExternals Externals; // 0x3e0
    FGroundSwarmGenerationParameters GroundSwarmGenerationParams; // 0x4d0
    FGroundSwarmerInitialConditions GroundSwarmInitialConditions; // 0x4e0
    FVector InitialVelocityScale; // 0x51c
    float InitialSpawnHiddenPercent; // 0x528
    float InitialSpawnHiddenTimeMin; // 0x52c
    float InitialSpawnHiddenTimeMax; // 0x530
    float InitialFreezeTimeMin; // 0x534
    float InitialFreezeTimeMax; // 0x538
    char pad_53c[0x4];
    AActor* InitialShapeTo; // 0x540
    FGroundSwarmInitialShapeSettings InitialShapeToSettings; // 0x548
    char pad_554[0x4];
    UAkAudioEvent* OnSwarmStartAudio; // 0x558
    UAkAudioEvent* OnSwarmDispersedAudio; // 0x560
    bool bSwarmStartDisperseMulti; // 0x568
    char pad_569[0x7];
    UParticleSystem* OnHitTarget; // 0x570
    UAkAudioEvent* OnHitTargetAudio; // 0x578
    UParticleSystem* OnKillVolume; // 0x580
    UAkAudioEvent* OnKillVolumeAudio; // 0x588
    UParticleSystem* OnPoof; // 0x590
    UAkAudioEvent* OnPoofAudio; // 0x598
    UParticleSystem* OnBurrow; // 0x5a0
    UAkAudioEvent* OnBurrowAudio; // 0x5a8
    float OnBurrowUpOffset; // 0x5b0
    FGroundSwarmBurrowingParameters BurrowingParameters; // 0x5b4
    float Timeout; // 0x5e4
    float TimeoutModifier; // 0x5e8
    float TargetThresholdPercent; // 0x5ec
    float TargetThresholdDelay; // 0x5f0
    bool bAutoStart; // 0x5f4
    bool bAutoDestroyWhenDone; // 0x5f5
    char pad_5f6[0x222];
    TArray<FGroundSwarmerInitialState> InitialStates; // 0x818
    UAkComponent* SwarmAudioSource; // 0x828
    char pad_830[0x50];
    bool bShapeApplied; // 0x880
    bool bSignalledDestroyWhenDone; // 0x881
    bool bSwarmAudioEnded; // 0x882
    char pad_883[0xd];
    static AInstancedGroundSwarmingActor* StaticClass();
    void Stop();
    void SetTargetFocii(AActor* Target);
    void Reset();
    void Regenerate();
    void Pause();
    void IsRunning(bool& bIsRunning);
    bool IsExiting();
    void Go();
    void Generate();
    void BeginExiting(EGroundSwarmingExitType Type, bool disableTargets);
}; // Size: 0x890
#pragma pack(pop)
