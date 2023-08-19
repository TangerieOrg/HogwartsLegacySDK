#pragma once
#include <cstdint>
#include "AMapBaseActor.hpp"
#include "EMap3DState.hpp"
#include "FLinearColor.hpp"
#include "FPathLocationData.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
class UMaterialInterface;
class UStaticMeshComponent;
class UScheduledEntity;
class UMaterialInstanceDynamic;
class UMapLocation;
class UMapData;
class AActor;
class ULevelData;
class UMapCameraParameters;
class UMapObjectComponent;
class ULevelStreamingDynamic;
class UMapMarkupComponent;
class UMapHogwarts;
class AMapLocationActor;
#pragma pack(push, 1)
class AMapHogwartsBPActor : public AMapBaseActor {
public:
    char pad_288[0x8];
    UMaterialInterface* PathMaterial; // 0x290
    UMaterialInterface* PostProcessMaterial; // 0x298
    UMaterialInstanceDynamic* PostProcessMaterialInstance; // 0x2a0
    UMapLocation* TestLocation; // 0x2a8
    FString TargetNPC; // 0x2b0
    bool HasTarget; // 0x2c0
    char pad_2c1[0x3];
    float CursorScale; // 0x2c4
    float CursorScaleFactor; // 0x2c8
    FVector DecalSize; // 0x2cc
    char pad_2d8[0x8];
    FVector4 MapBounds; // 0x2e0
    FVector4 ScreenBounds; // 0x2f0
    float CursorSnapDistance; // 0x300
    bool IsMapTargetScheduledEntity; // 0x304
    char pad_305[0x3];
    UScheduledEntity* MapTargetScheduledEntity; // 0x308
    bool IsMapTargetWorldLocation; // 0x310
    char pad_311[0x3];
    FVector MapTargetWorldLocation; // 0x314
    TArray<FPathLocationData> PathMapLocationList; // 0x320
    bool ShowFloors; // 0x330
    bool UseNavPath; // 0x331
    char pad_332[0x2];
    FVector PathWorldMarkerOffset; // 0x334
    bool UpdatePathOnPrimaryLocationChange; // 0x340
    bool bUsePointsOfInterest; // 0x341
    char pad_342[0xae];
    FVector WorldToMapOffset; // 0x3f0
    char pad_3fc[0x4];
    UMapData* MapData; // 0x400
    UMapData* FloorData; // 0x408
    UMapData* StairData; // 0x410
    AActor* PlayerMarkerActor; // 0x418
    AActor* FocusPointActor; // 0x420
    AActor* PathEndActor; // 0x428
    UStaticMeshComponent* IsolationMeshComponent; // 0x430
    FLinearColor BaseColor; // 0x438
    FLinearColor OriginColor; // 0x448
    FLinearColor PathColor; // 0x458
    bool UseZoomMaterailForPath; // 0x468
    char pad_469[0x3];
    float UVDistanceMul; // 0x46c
    TArray<ULevelData*> LevelData; // 0x470
    bool UseComplexCollision; // 0x480
    char pad_481[0x7];
    UMapCameraParameters* CameraParametersBirdsEye; // 0x488
    UMapObjectComponent* DefaultStartComponent; // 0x490
    UMaterialInterface* DebugStairVolumeMaterial; // 0x498
    UMaterialInterface* DebugRoomVolumeMaterial; // 0x4a0
    UMaterialInterface* DebugFloorVolumeMaterial; // 0x4a8
    float TranslateSpeed; // 0x4b0
    char pad_4b4[0x4];
    TArray<FVector> PathPoints; // 0x4b8
    AActor* NextPathPointActor; // 0x4c8
    FString LastLevelName; // 0x4d0
    FString TargetName; // 0x4e0
    char pad_4f0[0x10];
    TArray<ULevelData*> PathStructures; // 0x500
    UMapLocation* LastMapLocation; // 0x510
    TArray<FVector> HitPoints; // 0x518
    TArray<FVector> MissPoints; // 0x528
    TArray<FVector> DebugRayStart; // 0x538
    TArray<FVector> DebugRayEnd; // 0x548
    char pad_558[0x8];
    ULevelStreamingDynamic* NavMeshLevel; // 0x560
    char pad_568[0x20];
    TArray<AActor*> DebugActors; // 0x588
    char pad_598[0x38];
    static AMapHogwartsBPActor* StaticClass();
    void SetStaticMapTarget(FVector Target);
    void SetNextState(EMap3DState NewState);
    void SetDynamicMapTarget(UScheduledEntity* Target);
    void PushLocationListToScreen(TArray<FString> InLocationList, int32_t InStartIndex);
    void PushLocaitonNameToScreen(FString LocationName);
    void OnTransitionToSingleState_Update_Event();
    void OnTransitionToSingleState_Start_Event();
    void OnTransitionToSingleState_Exit_Event();
    void OnTransitionToGroupState_Update_Event();
    void OnTransitionToGroupState_Start_Event();
    void OnTransitionToGroupState_Exit_Event();
    void OnTransitionToCastleState_Update_Event();
    void OnTransitionToCastleState_Start_Event();
    void OnTransitionToCastleState_Exit_Event();
    void OnStartState_Update_Event();
    void OnStartState_Start_Event();
    void OnStartState_Exit_Event();
    void OnSingleState_Update_Event();
    void OnSingleState_Start_Event();
    void OnSingleState_Exit_Event();
    void OnGroupState_Update_Event();
    void OnGroupState_Start_Event();
    void OnGroupState_Exit_Event();
    void OnFastTravelState_Update_Event();
    void OnFastTravelState_Start_Event();
    void OnFastTravelState_Exit_Event();
    void OnDiscoverState_Update_Event();
    void OnDiscoverState_Start_Event();
    void OnDiscoverState_Exit_Event();
    void OnCastleState_Update_Event();
    void OnCastleState_Start_Event();
    void OnCastleState_Exit_Event();
    void OnActivate_Event(bool Activate);
    void GiveMeHelp_Event();
    void GiveMeHelp();
    EMap3DState GetState();
    FString GetRoomStairFloorString(UMapMarkupComponent* MapLocation, UMapMarkupComponent* StairLocation, UMapLocation* FloorLocation, UMapLocation* PrimaryrLocation, bool IsOnlyPrimaryLocation);
    bool GetIsActive();
    UMapHogwarts* GetHogwartsMap();
    AMapLocationActor* FindLocationActorThatContainsPoint(FVector Point);
    AMapLocationActor* FindLocationActorBelowPoint(FVector Point);
    void DoUp();
    void DoSelect();
    void DoDown();
    void DoBack();
    void ClearMapTarget();
}; // Size: 0x5d0
#pragma pack(pop)
