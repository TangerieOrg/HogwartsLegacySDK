#include "AActor.hpp"
#include "AUsdStageActor.hpp"
#include "EUsdInitialLoadSet.hpp"
#include "FFilePath.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UUsdAssetCache.hpp"
#include "UUsdPrimTwin.hpp"
#include "UUsdTransactor.hpp"
void AUsdStageActor::SetTime(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.SetTime"));
    struct Params_SetTime {
        float InTime; // 0x0
    }; // Size: 0x4
    Params_SetTime params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
}
FString AUsdStageActor::GetSourcePrimPath(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.GetSourcePrimPath"));
    struct Params_GetSourcePrimPath {
        UObject* Object; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSourcePrimPath params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
AUsdStageActor* AUsdStageActor::StaticClass() {
    static auto res = find_uobject("Class /Script/USDStage.UsdStageActor");
    return (AUsdStageActor*)res;
}
void AUsdStageActor::SetRootLayer(FString RootFilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.SetRootLayer"));
    struct Params_SetRootLayer {
        FString RootFilePath; // 0x0
    }; // Size: 0x10
    Params_SetRootLayer params{};
    params.RootFilePath = (FString)RootFilePath;
    ProcessEvent(func, &params);
}
void AUsdStageActor::SetRenderContext(FName& NewRenderContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.SetRenderContext"));
    struct Params_SetRenderContext {
        FName NewRenderContext; // 0x0
    }; // Size: 0x8
    Params_SetRenderContext params{};
    params.NewRenderContext = (FName)NewRenderContext;
    ProcessEvent(func, &params);
    NewRenderContext = params.NewRenderContext;
}
void AUsdStageActor::SetPurposesToLoad(int32_t NewPurposesToLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.SetPurposesToLoad"));
    struct Params_SetPurposesToLoad {
        int32_t NewPurposesToLoad; // 0x0
    }; // Size: 0x4
    Params_SetPurposesToLoad params{};
    params.NewPurposesToLoad = (int32_t)NewPurposesToLoad;
    ProcessEvent(func, &params);
}
void AUsdStageActor::SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.SetInitialLoadSet"));
    struct Params_SetInitialLoadSet {
        EUsdInitialLoadSet NewLoadSet; // 0x0
    }; // Size: 0x1
    Params_SetInitialLoadSet params{};
    params.NewLoadSet = (EUsdInitialLoadSet)NewLoadSet;
    ProcessEvent(func, &params);
}
float AUsdStageActor::GetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.GetTime"));
    struct Params_GetTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
USceneComponent* AUsdStageActor::GetGeneratedComponent(FString PrimPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.GetGeneratedComponent"));
    struct Params_GetGeneratedComponent {
        FString PrimPath; // 0x0
        USceneComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetGeneratedComponent params{};
    params.PrimPath = (FString)PrimPath;
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
TArray<UObject*> AUsdStageActor::GetGeneratedAssets(FString PrimPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/USDStage.UsdStageActor.GetGeneratedAssets"));
    struct Params_GetGeneratedAssets {
        FString PrimPath; // 0x0
        TArray<UObject*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetGeneratedAssets params{};
    params.PrimPath = (FString)PrimPath;
    ProcessEvent(func, &params);
    return (TArray<UObject*>)params.ReturnValue;
}
