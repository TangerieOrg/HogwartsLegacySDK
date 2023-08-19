#include "ETimeRigInitializingBehavior.hpp"
#include "FSceneRigBoundObject.hpp"
#include "FSceneRigParameters.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneRig.hpp"
#include "USceneRigInterfaceDefinition.hpp"
#include "USceneRigPlayer.hpp"
#include "USceneRigStage.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#include "UTimeRig.hpp"
USceneRig* USceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig");
    return (USceneRig*)res;
}
void USceneRig::StartPrecaching(UObject* WorldContextObject) {}
USceneRigPlayer* USceneRig::InitializePlayerWithDefaultParameters(UObject* WorldContext, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.InitializePlayerWithDefaultParameters"));
    struct Params_InitializePlayerWithDefaultParameters {
        UObject* WorldContext; // 0x0
        UObject* PlayerParent; // 0x8
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x10
        char pad_11[0x7];
        USceneRigPlayer* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_InitializePlayerWithDefaultParameters params{};
    params.WorldContext = (UObject*)WorldContext;
    params.PlayerParent = (UObject*)PlayerParent;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* USceneRig::PlayWithDefaultParameters(UObject* WorldContextObject, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.PlayWithDefaultParameters"));
    struct Params_PlayWithDefaultParameters {
        UObject* WorldContextObject; // 0x0
        UObject* PlayerParent; // 0x8
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x10
        char pad_11[0x7];
        USceneRigPlayer* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_PlayWithDefaultParameters params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerParent = (UObject*)PlayerParent;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* USceneRig::FindPlayer(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.FindPlayer"));
    struct Params_FindPlayer {
        UObject* WorldContextObject; // 0x0
        USceneRigPlayer* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindPlayer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* USceneRig::Play(FSceneRigParameters& Parameters, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.Play"));
    struct Params_Play {
        FSceneRigParameters Parameters; // 0x0
        UObject* PlayerParent; // 0x88
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x90
        char pad_91[0x7];
        USceneRigPlayer* ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_Play params{};
    params.Parameters = (FSceneRigParameters)Parameters;
    params.PlayerParent = (UObject*)PlayerParent;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* USceneRig::InitializePlayer(FSceneRigParameters& Parameters, UObject* PlayerParent, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.InitializePlayer"));
    struct Params_InitializePlayer {
        FSceneRigParameters Parameters; // 0x0
        UObject* PlayerParent; // 0x88
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x90
        char pad_91[0x7];
        USceneRigPlayer* ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_InitializePlayer params{};
    params.Parameters = (FSceneRigParameters)Parameters;
    params.PlayerParent = (UObject*)PlayerParent;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
    return (USceneRigPlayer*)params.ReturnValue;
}
void USceneRig::CreateDefaultParameters(FSceneRigParameters& Parameters, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRig.CreateDefaultParameters"));
    struct Params_CreateDefaultParameters {
        FSceneRigParameters Parameters; // 0x0
        UObject* WorldContextObject; // 0x88
    }; // Size: 0x90
    Params_CreateDefaultParameters params{};
    params.Parameters = (FSceneRigParameters)Parameters;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
