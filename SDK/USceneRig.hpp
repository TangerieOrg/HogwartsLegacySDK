#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "FSceneRigBoundObject.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "UTimeRig.hpp"
class USceneRigInterfaceDefinition;
class UAnimationArchitectTagProvider;
class UBaseArchitectAsset;
class USceneRigStage;
struct FSceneRigParameters;
class USceneRigStage_NamedParameter;
class UObject;
class USceneRigPlayer;
#pragma pack(push, 1)
class USceneRig : public UTimeRig {
public:
    char pad_168[0x18];
    bool BakeSequenceDebug; // 0x180
    char pad_181[0x7];
    USceneRigInterfaceDefinition* Interface; // 0x188
    TArray<FSceneRigBoundObject> BoundObjects; // 0x190
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x1a0
    USceneRigStage* DefaultStage; // 0x1b0
    bool PreviewStageDriver; // 0x1b8
    char pad_1b9[0x7];
    TArray<UBaseArchitectAsset*> LookupAssets; // 0x1c0
    bool DebugInEditor; // 0x1d0
    bool StartDebuggingPaused; // 0x1d1
    bool bShouldSimulatePhysics; // 0x1d2
    bool bInstantlySkippable; // 0x1d3
    float PlayerSortOrder; // 0x1d4
    FSceneRigStage_Transform SceneRoot; // 0x1d8
    TArray<USceneRigStage_NamedParameter*> NamedParameters; // 0x1f0
    char pad_200[0x28];
    TArray<void*> PreviewLevels; // 0x228
    static USceneRig* StaticClass();
    void StartPrecaching(UObject* WorldContextObject);
    USceneRigPlayer* PlayWithDefaultParameters(UObject* WorldContextObject, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType);
    USceneRigPlayer* Play(FSceneRigParameters& Parameters, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType);
    USceneRigPlayer* InitializePlayerWithDefaultParameters(UObject* WorldContext, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType);
    USceneRigPlayer* InitializePlayer(FSceneRigParameters& Parameters, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType);
    USceneRigPlayer* FindPlayer(UObject* WorldContextObject);
    void CreateDefaultParameters(FSceneRigParameters& Parameters, UObject* WorldContextObject);
}; // Size: 0x238
#pragma pack(pop)
