#include "AActor.hpp"
#include "ALandscapeProxy.hpp"
#include "EComponentMobility\Type.hpp"
#include "EIsPlayer.hpp"
#include "ETwoBranches.hpp"
#include "FBox.hpp"
#include "FInterpCurveFloat.hpp"
#include "FLandscapeRoadData.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UBlueprintHelper.hpp"
#include "UCameraComponent.hpp"
#include "UCurveFloat.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UWorld.hpp"
bool UBlueprintHelper::IsPointOnCamera(UObject* WorldContextObject, FVector Point, float MarginPercent, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.IsPointOnCamera"));
    struct Params_IsPointOnCamera {
        UObject* WorldContextObject; // 0x0
        FVector Point; // 0x8
        float MarginPercent; // 0x14
        int32_t PlayerIndex; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_IsPointOnCamera params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Point = (FVector)Point;
    params.MarginPercent = (float)MarginPercent;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBlueprintHelper* UBlueprintHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.BlueprintHelper");
    return (UBlueprintHelper*)res;
}
TArray<FString> UBlueprintHelper::SortStrings(TArray<FString> Strings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.SortStrings"));
    struct Params_SortStrings {
        TArray<FString> Strings; // 0x0
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortStrings params{};
    params.Strings = (TArray<FString>)Strings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<FName> UBlueprintHelper::SortNames(TArray<FName> Names) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.SortNames"));
    struct Params_SortNames {
        TArray<FName> Names; // 0x0
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortNames params{};
    params.Names = (TArray<FName>)Names;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UBlueprintHelper::GetCameraPositionToFitActor(AActor* Actor, FVector CameraDir, float HorizontalFieldOfView, float AspectRatio, FVector& OutCameraPos, FVector& OutTargetPos, TArray<FString> OnlyTheseComponents, float Padding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetCameraPositionToFitActor"));
    struct Params_GetCameraPositionToFitActor {
        AActor* Actor; // 0x0
        FVector CameraDir; // 0x8
        float HorizontalFieldOfView; // 0x14
        float AspectRatio; // 0x18
        FVector OutCameraPos; // 0x1c
        FVector OutTargetPos; // 0x28
        char pad_34[0x4];
        TArray<FString> OnlyTheseComponents; // 0x38
        float Padding; // 0x48
        bool ReturnValue; // 0x4c
    }; // Size: 0x4d
    Params_GetCameraPositionToFitActor params{};
    params.Actor = (AActor*)Actor;
    params.CameraDir = (FVector)CameraDir;
    params.HorizontalFieldOfView = (float)HorizontalFieldOfView;
    params.AspectRatio = (float)AspectRatio;
    params.OutCameraPos = (FVector)OutCameraPos;
    params.OutTargetPos = (FVector)OutTargetPos;
    params.OnlyTheseComponents = (TArray<FString>)OnlyTheseComponents;
    params.Padding = (float)Padding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutCameraPos = params.OutCameraPos;
    OutTargetPos = params.OutTargetPos;
    return (bool)params.ReturnValue;
}
TArray<int32_t> UBlueprintHelper::SortInts(TArray<int32_t> Ints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.SortInts"));
    struct Params_SortInts {
        TArray<int32_t> Ints; // 0x0
        TArray<int32_t> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortInts params{};
    params.Ints = (TArray<int32_t>)Ints;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
ULevel* UBlueprintHelper::GetPersistentLevel(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetPersistentLevel"));
    struct Params_GetPersistentLevel {
        UObject* WorldContextObject; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPersistentLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
void UBlueprintHelper::ResolveSoftClassReference() {}
bool UBlueprintHelper::SkipCriticalLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.SkipCriticalLoad"));
    struct Params_SkipCriticalLoad {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SkipCriticalLoad params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FInterpCurveFloat UBlueprintHelper::CreateFloatCurve(TArray<float> Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.CreateFloatCurve"));
    struct Params_CreateFloatCurve {
        TArray<float> Values; // 0x0
        FInterpCurveFloat ReturnValue; // 0x10
    }; // Size: 0x28
    Params_CreateFloatCurve params{};
    params.Values = (TArray<float>)Values;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FInterpCurveFloat)params.ReturnValue;
}
bool UBlueprintHelper::SetSceneComponentMobility(USceneComponent* SceneComp, EComponentMobility::Type NewMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.SetSceneComponentMobility"));
    struct Params_SetSceneComponentMobility {
        USceneComponent* SceneComp; // 0x0
        EComponentMobility::Type NewMobility; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetSceneComponentMobility params{};
    params.SceneComp = (USceneComponent*)SceneComp;
    params.NewMobility = (EComponentMobility::Type)NewMobility;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULevel* UBlueprintHelper::GetLoadedLevelFromStreamingLevel(ULevelStreaming* InStreamingLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetLoadedLevelFromStreamingLevel"));
    struct Params_GetLoadedLevelFromStreamingLevel {
        ULevelStreaming* InStreamingLevel; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLoadedLevelFromStreamingLevel params{};
    params.InStreamingLevel = (ULevelStreaming*)InStreamingLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
void UBlueprintHelper::RemoveDataTableRow(UDataTable* Table, FName RowName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.RemoveDataTableRow"));
    struct Params_RemoveDataTableRow {
        UDataTable* Table; // 0x0
        FName RowName; // 0x8
    }; // Size: 0x10
    Params_RemoveDataTableRow params{};
    params.Table = (UDataTable*)Table;
    params.RowName = (FName)RowName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UBlueprintHelper::FloatCurve_FindTimeFromValue(UCurveFloat* CurveFloat, float InValue, float& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.FloatCurve_FindTimeFromValue"));
    struct Params_FloatCurve_FindTimeFromValue {
        UCurveFloat* CurveFloat; // 0x0
        float InValue; // 0x8
        float OutValue; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_FloatCurve_FindTimeFromValue params{};
    params.CurveFloat = (UCurveFloat*)CurveFloat;
    params.InValue = (float)InValue;
    params.OutValue = (float)OutValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void UBlueprintHelper::LoadSyncronousStaticMesh() {}
TArray<FLandscapeRoadData> UBlueprintHelper::RecursiveGetLandscapeRoadsDataFromProxy(ALandscapeProxy* Prxy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.RecursiveGetLandscapeRoadsDataFromProxy"));
    struct Params_RecursiveGetLandscapeRoadsDataFromProxy {
        ALandscapeProxy* Prxy; // 0x0
        TArray<FLandscapeRoadData> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_RecursiveGetLandscapeRoadsDataFromProxy params{};
    params.Prxy = (ALandscapeProxy*)Prxy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLandscapeRoadData>)params.ReturnValue;
}
TArray<FLandscapeRoadData> UBlueprintHelper::RecursiveGetLandscapeRoadsData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.RecursiveGetLandscapeRoadsData"));
    struct Params_RecursiveGetLandscapeRoadsData {
        TArray<FLandscapeRoadData> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_RecursiveGetLandscapeRoadsData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLandscapeRoadData>)params.ReturnValue;
}
FBox UBlueprintHelper::GetActorBoundingBox(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetActorBoundingBox"));
    struct Params_GetActorBoundingBox {
        AActor* Actor; // 0x0
        FBox ReturnValue; // 0x8
    }; // Size: 0x24
    Params_GetActorBoundingBox params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
bool UBlueprintHelper::PositionCameraToFitActor(UCameraComponent* Camera, AActor* Actor, TArray<FString> OnlyTheseComponents, float Padding, float AspectRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.PositionCameraToFitActor"));
    struct Params_PositionCameraToFitActor {
        UCameraComponent* Camera; // 0x0
        AActor* Actor; // 0x8
        TArray<FString> OnlyTheseComponents; // 0x10
        float Padding; // 0x20
        float AspectRatio; // 0x24
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_PositionCameraToFitActor params{};
    params.Camera = (UCameraComponent*)Camera;
    params.Actor = (AActor*)Actor;
    params.OnlyTheseComponents = (TArray<FString>)OnlyTheseComponents;
    params.Padding = (float)Padding;
    params.AspectRatio = (float)AspectRatio;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBlueprintHelper::LoadSyncronousActorClass() {}
void UBlueprintHelper::IsPlayerCharacter(AActor* Actor, EIsPlayer& Branches) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.IsPlayerCharacter"));
    struct Params_IsPlayerCharacter {
        AActor* Actor; // 0x0
        EIsPlayer Branches; // 0x8
    }; // Size: 0x9
    Params_IsPlayerCharacter params{};
    params.Actor = (AActor*)Actor;
    params.Branches = (EIsPlayer)Branches;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Branches = params.Branches;
}
bool UBlueprintHelper::IsObjectInGameWorld(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.IsObjectInGameWorld"));
    struct Params_IsObjectInGameWorld {
        UObject* Object; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsObjectInGameWorld params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULevelStreaming* UBlueprintHelper::FindLevelStreamingForLevel(ULevel* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.FindLevelStreamingForLevel"));
    struct Params_FindLevelStreamingForLevel {
        ULevel* InLevel; // 0x0
        ULevelStreaming* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindLevelStreamingForLevel params{};
    params.InLevel = (ULevel*)InLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevelStreaming*)params.ReturnValue;
}
TArray<FString> UBlueprintHelper::GetWorldOptions(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetWorldOptions"));
    struct Params_GetWorldOptions {
        UObject* WorldContextObject; // 0x0
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetWorldOptions params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
UWorld* UBlueprintHelper::GetWorldFromLevelScriptable(ULevel* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetWorldFromLevelScriptable"));
    struct Params_GetWorldFromLevelScriptable {
        ULevel* InLevel; // 0x0
        UWorld* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetWorldFromLevelScriptable params{};
    params.InLevel = (ULevel*)InLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
UWorld* UBlueprintHelper::GetWorldFromLevel(ULevel* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetWorldFromLevel"));
    struct Params_GetWorldFromLevel {
        ULevel* InLevel; // 0x0
        UWorld* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetWorldFromLevel params{};
    params.InLevel = (ULevel*)InLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
FString UBlueprintHelper::GetLevelName(ULevel* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetLevelName"));
    struct Params_GetLevelName {
        ULevel* InLevel; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetLevelName params{};
    params.InLevel = (ULevel*)InLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
ULevel* UBlueprintHelper::GetLevelFromActorScriptable(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetLevelFromActorScriptable"));
    struct Params_GetLevelFromActorScriptable {
        AActor* InActor; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLevelFromActorScriptable params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
ULevel* UBlueprintHelper::GetLevelFromActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetLevelFromActor"));
    struct Params_GetLevelFromActor {
        AActor* InActor; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLevelFromActor params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
ULevel* UBlueprintHelper::GetCurrentLevel(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetCurrentLevel"));
    struct Params_GetCurrentLevel {
        UObject* WorldContextObject; // 0x0
        ULevel* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCurrentLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
void UBlueprintHelper::GetActorBounds(AActor* Actor, FVector& Origin, FVector& BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetActorBounds"));
    struct Params_GetActorBounds {
        AActor* Actor; // 0x0
        FVector Origin; // 0x8
        FVector BoxExtent; // 0x14
    }; // Size: 0x20
    Params_GetActorBounds params{};
    params.Actor = (AActor*)Actor;
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    BoxExtent = params.BoxExtent;
}
bool UBlueprintHelper::DisplayMapName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.DisplayMapName"));
    struct Params_DisplayMapName {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisplayMapName params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FBox UBlueprintHelper::GetAccurateActorBounds(AActor* Actor, TArray<FString> OnlyTheseComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.GetAccurateActorBounds"));
    struct Params_GetAccurateActorBounds {
        AActor* Actor; // 0x0
        TArray<FString> OnlyTheseComponents; // 0x8
        FBox ReturnValue; // 0x18
    }; // Size: 0x34
    Params_GetAccurateActorBounds params{};
    params.Actor = (AActor*)Actor;
    params.OnlyTheseComponents = (TArray<FString>)OnlyTheseComponents;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
bool UBlueprintHelper::ForceLoadMaps() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.ForceLoadMaps"));
    struct Params_ForceLoadMaps {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ForceLoadMaps params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintHelper::ForceUnloadLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.ForceUnloadLevels"));
    struct Params_ForceUnloadLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ForceUnloadLevels params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintHelper::ForceSimpleLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.ForceSimpleLevels"));
    struct Params_ForceSimpleLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ForceSimpleLevels params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintHelper::ForceFullLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.ForceFullLevels"));
    struct Params_ForceFullLevels {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ForceFullLevels params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UBlueprintHelper::EvaluateFloatCurve(FInterpCurveFloat& InterpFloatCurve, float Pos, float DefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.EvaluateFloatCurve"));
    struct Params_EvaluateFloatCurve {
        FInterpCurveFloat InterpFloatCurve; // 0x0
        float Pos; // 0x18
        float DefaultValue; // 0x1c
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_EvaluateFloatCurve params{};
    params.InterpFloatCurve = (FInterpCurveFloat)InterpFloatCurve;
    params.Pos = (float)Pos;
    params.DefaultValue = (float)DefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InterpFloatCurve = params.InterpFloatCurve;
    return (float)params.ReturnValue;
}
void UBlueprintHelper::CompareAgainstHashKey(FString S, int32_t Key, ETwoBranches& Branches) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.BlueprintHelper.CompareAgainstHashKey"));
    struct Params_CompareAgainstHashKey {
        FString S; // 0x0
        int32_t Key; // 0x10
        ETwoBranches Branches; // 0x14
    }; // Size: 0x15
    Params_CompareAgainstHashKey params{};
    params.S = (FString)S;
    params.Key = (int32_t)Key;
    params.Branches = (ETwoBranches)Branches;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Branches = params.Branches;
}
