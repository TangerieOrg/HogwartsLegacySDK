#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "EIsPlayer.hpp"
#include "ETwoBranches.hpp"
#include "FBox.hpp"
#include "FInterpCurveFloat.hpp"
#include "FLandscapeRoadData.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ALandscapeProxy;
class USceneComponent;
class UObject;
class UDataTable;
class UCameraComponent;
class AActor;
class UWorld;
class ULevel;
class ULevelStreaming;
class UCurveFloat;
#pragma pack(push, 1)
class UBlueprintHelper : public UBlueprintFunctionLibrary {
public:
    static UBlueprintHelper* StaticClass();
    static TArray<FString> SortStrings(TArray<FString> Strings);
    static TArray<FName> SortNames(TArray<FName> Names);
    static TArray<int32_t> SortInts(TArray<int32_t> Ints);
    static bool SkipCriticalLoad();
    static bool SetSceneComponentMobility(USceneComponent* SceneComp, EComponentMobility::Type NewMobility);
    static void ResolveSoftClassReference();
    static void RemoveDataTableRow(UDataTable* Table, FName RowName);
    static TArray<FLandscapeRoadData> RecursiveGetLandscapeRoadsDataFromProxy(ALandscapeProxy* Prxy);
    static TArray<FLandscapeRoadData> RecursiveGetLandscapeRoadsData();
    static bool PositionCameraToFitActor(UCameraComponent* Camera, AActor* Actor, TArray<FString> OnlyTheseComponents, float Padding, float AspectRatio);
    static void LoadSyncronousStaticMesh();
    static void LoadSyncronousActorClass();
    static bool IsPointOnCamera(UObject* WorldContextObject, FVector Point, float MarginPercent, int32_t PlayerIndex);
    static void IsPlayerCharacter(AActor* Actor, EIsPlayer& Branches);
    static bool IsObjectInGameWorld(UObject* Object);
    static TArray<FString> GetWorldOptions(UObject* WorldContextObject);
    static UWorld* GetWorldFromLevelScriptable(ULevel* InLevel);
    static UWorld* GetWorldFromLevel(ULevel* InLevel);
    static ULevel* GetPersistentLevel(UObject* WorldContextObject);
    static ULevel* GetLoadedLevelFromStreamingLevel(ULevelStreaming* InStreamingLevel);
    static FString GetLevelName(ULevel* InLevel);
    static ULevel* GetLevelFromActorScriptable(AActor* InActor);
    static ULevel* GetLevelFromActor(AActor* InActor);
    static ULevel* GetCurrentLevel(UObject* WorldContextObject);
    static bool GetCameraPositionToFitActor(AActor* Actor, FVector CameraDir, float HorizontalFieldOfView, float AspectRatio, FVector& OutCameraPos, FVector& OutTargetPos, TArray<FString> OnlyTheseComponents, float Padding);
    static void GetActorBounds(AActor* Actor, FVector& Origin, FVector& BoxExtent);
    static FBox GetActorBoundingBox(AActor* Actor);
    static FBox GetAccurateActorBounds(AActor* Actor, TArray<FString> OnlyTheseComponents);
    static bool ForceUnloadLevels();
    static bool ForceSimpleLevels();
    static bool ForceLoadMaps();
    static bool ForceFullLevels();
    static bool FloatCurve_FindTimeFromValue(UCurveFloat* CurveFloat, float InValue, float& OutValue);
    static ULevelStreaming* FindLevelStreamingForLevel(ULevel* InLevel);
    static float EvaluateFloatCurve(FInterpCurveFloat& InterpFloatCurve, float Pos, float DefaultValue);
    static bool DisplayMapName();
    static FInterpCurveFloat CreateFloatCurve(TArray<float> Values);
    static void CompareAgainstHashKey(FString S, int32_t Key, ETwoBranches& Branches);
}; // Size: 0x28
#pragma pack(pop)
