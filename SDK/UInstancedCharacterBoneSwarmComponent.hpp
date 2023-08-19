#pragma once
#include <cstdint>
#include "FBoneParticleTracker.hpp"
#include "FBoneSwarmGenerationParameters.hpp"
#include "FBoneSwarmerInitialConditions.hpp"
#include "FCharacterBoneProjectionParams.hpp"
#include "UActorComponent.hpp"
class UCharacterBoneProjector;
class UClass;
class UParticleSystem;
class UInstancedStaticMeshComponent;
class USkinFXComponent;
#pragma pack(push, 1)
class UInstancedCharacterBoneSwarmComponent : public UActorComponent {
public:
    UCharacterBoneProjector* Projector; // 0xc8
    FCharacterBoneProjectionParams ProjectionParams; // 0xd0
    char pad_d4[0x4];
    FBoneSwarmGenerationParameters SwarmGenerationParams; // 0xd8
    FBoneSwarmerInitialConditions SwarmInitialConditions; // 0xe8
    char pad_13c[0x4];
    UClass* SkinEffect; // 0x140
    FName ParamProjectionsCenterRadius; // 0x148
    FName ParamProjectionsMin; // 0x150
    FName ParamProjectionsMax; // 0x158
    FName ParamTotalProjectionsCenterRadius; // 0x160
    FName ParamActorCenterRadius; // 0x168
    bool bParamProjectionsCenterRadius; // 0x170
    bool bParamProjectionsMin; // 0x171
    bool bParamProjectionsMax; // 0x172
    bool bParamTotalProjectionsCenterRadius; // 0x173
    bool bParamActorCenterRadius; // 0x174
    char pad_175[0x3];
    UParticleSystem* OnFirstBoneTouch; // 0x178
    TArray<FName> OnFirstBoneTouchIgnoreBones; // 0x180
    UParticleSystem* OnPoof; // 0x190
    int32_t PoofLimitParticles; // 0x198
    bool bPoofLimitParticles; // 0x19c
    bool bDisableMotionBlur; // 0x19d
    char pad_19e[0x2];
    int32_t NextUnhide; // 0x1a0
    char pad_1a4[0x4];
    UInstancedStaticMeshComponent* SwarmMeshes; // 0x1a8
    FBoneParticleTracker BoneParticles; // 0x1b0
    USkinFXComponent* SkinFXComponent; // 0x1c0
    bool bDebugDraw; // 0x1c8
    bool bDebugBounds; // 0x1c9
    bool bDebugProjectionResults; // 0x1ca
    char pad_1cb[0x5];
    static UInstancedCharacterBoneSwarmComponent* StaticClass();
    void UnhideNext();
    void UnhideAll();
    int32_t UnHide(int32_t howMany);
    void Reset();
    int32_t RemainingHidden();
    void Poof();
    void KillAll();
}; // Size: 0x1d0
#pragma pack(pop)
