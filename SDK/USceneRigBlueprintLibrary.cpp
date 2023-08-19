#include "FSceneRigParameters.hpp"
#include "FTransform.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UObject.hpp"
#include "USceneRigBlueprintLibrary.hpp"
#include "USceneRigStageParameterBlock.hpp"
bool USceneRigBlueprintLibrary::PlayCinematicFromPath(UObject* WorldContextObject, FString InSceneRigPath, FName LevelNameToReturnToWhenFinished, FName DefaultLevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.PlayCinematicFromPath"));
    struct Params_PlayCinematicFromPath {
        UObject* WorldContextObject; // 0x0
        FString InSceneRigPath; // 0x8
        FName LevelNameToReturnToWhenFinished; // 0x18
        FName DefaultLevelName; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_PlayCinematicFromPath params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSceneRigPath = (FString)InSceneRigPath;
    params.LevelNameToReturnToWhenFinished = (FName)LevelNameToReturnToWhenFinished;
    params.DefaultLevelName = (FName)DefaultLevelName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneRigBlueprintLibrary::AssignObjectParameter(FSceneRigParameters& InParameter, FString ParameterName, UObject* InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignObjectParameter"));
    struct Params_AssignObjectParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        UObject* InValue; // 0x98
    }; // Size: 0xa0
    Params_AssignObjectParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (UObject*)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
USceneRigBlueprintLibrary* USceneRigBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigBlueprintLibrary");
    return (USceneRigBlueprintLibrary*)res;
}
void USceneRigBlueprintLibrary::RebindSequencePossessableReferences(UObject* WorldContextObject, ULevelSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.RebindSequencePossessableReferences"));
    struct Params_RebindSequencePossessableReferences {
        UObject* WorldContextObject; // 0x0
        ULevelSequence* Sequence; // 0x8
    }; // Size: 0x10
    Params_RebindSequencePossessableReferences params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Sequence = (ULevelSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USceneRigBlueprintLibrary::SetWorldContext(FSceneRigParameters& InParameter, UObject* WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.SetWorldContext"));
    struct Params_SetWorldContext {
        FSceneRigParameters InParameter; // 0x0
        UObject* WorldContext; // 0x88
    }; // Size: 0x90
    Params_SetWorldContext params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.WorldContext = (UObject*)WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
void USceneRigBlueprintLibrary::SetStageParameters(FSceneRigParameters& InParameter, USceneRigStageParameterBlock* StageParameterBlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.SetStageParameters"));
    struct Params_SetStageParameters {
        FSceneRigParameters InParameter; // 0x0
        USceneRigStageParameterBlock* StageParameterBlock; // 0x88
    }; // Size: 0x90
    Params_SetStageParameters params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.StageParameterBlock = (USceneRigStageParameterBlock*)StageParameterBlock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
void USceneRigBlueprintLibrary::PlayCinematic(UObject* InWorldContextObject) {}
void USceneRigBlueprintLibrary::AssignTransformParameter(FSceneRigParameters& InParameter, FString ParameterName, FTransform& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignTransformParameter"));
    struct Params_AssignTransformParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        char pad_98[0x8];
        FTransform InValue; // 0xa0
    }; // Size: 0xd0
    Params_AssignTransformParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (FTransform)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
    InValue = params.InValue;
}
void USceneRigBlueprintLibrary::AssignStringParameter(FSceneRigParameters& InParameter, FString ParameterName, FString InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignStringParameter"));
    struct Params_AssignStringParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        FString InValue; // 0x98
    }; // Size: 0xa8
    Params_AssignStringParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (FString)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
void USceneRigBlueprintLibrary::AssignIntParameter(FSceneRigParameters& InParameter, FString ParameterName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignIntParameter"));
    struct Params_AssignIntParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        int32_t InValue; // 0x98
    }; // Size: 0x9c
    Params_AssignIntParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (int32_t)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
void USceneRigBlueprintLibrary::AssignFloatParameter(FSceneRigParameters& InParameter, FString ParameterName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignFloatParameter"));
    struct Params_AssignFloatParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        float InValue; // 0x98
    }; // Size: 0x9c
    Params_AssignFloatParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (float)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
void USceneRigBlueprintLibrary::AssignBoolParameter(FSceneRigParameters& InParameter, FString ParameterName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBlueprintLibrary.AssignBoolParameter"));
    struct Params_AssignBoolParameter {
        FSceneRigParameters InParameter; // 0x0
        FString ParameterName; // 0x88
        bool InValue; // 0x98
    }; // Size: 0x99
    Params_AssignBoolParameter params{};
    params.InParameter = (FSceneRigParameters)InParameter;
    params.ParameterName = (FString)ParameterName;
    params.InValue = (bool)InValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameter = params.InParameter;
}
