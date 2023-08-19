#pragma once
#include <cstdint>
#include "EForcedShutDownMode.hpp"
#include "EForcedShutDownPriority.hpp"
#include "ESEAllowBTShutdownPriority.hpp"
#include "ESEPrecacheFleshPriority.hpp"
#include "ESchedulingPriority.hpp"
#include "EStationExitCallBack.hpp"
#include "E_Goal\Type.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
class UPathComponent;
class ASocialNavigatorController;
class ASocialSplineController;
class ASocialReasoning;
class AAntiSocialAAIController;
class ABase_Character;
class UStationComponent;
struct FTransform;
class AStation;
class UClass;
class UFlyingBroomPhysics;
class AFlyingBroom;
struct FScheduleEntry;
struct FGoalStatus;
class APawn;
#pragma pack(push, 1)
class UScheduledEntity : public UObject {
public:
    char pad_28[0x5a8];
    AActor* FollowCamActor; // 0x5d0
    char pad_5d8[0x10];
    ASocialNavigatorController* NavPathController; // 0x5e8
    ASocialSplineController* SplinePathController; // 0x5f0
    AAntiSocialAAIController* DefaultController; // 0x5f8
    char pad_600[0x10];
    ASocialReasoning* ScheduledEntitySocialReasoning; // 0x610
    char pad_618[0x9e0];
    UPathComponent* PathComponent_PT; // 0xff8
    UStationComponent* StationComponent_MTS; // 0x1000
    char pad_1008[0xc8];
    static UScheduledEntity* StaticClass();
    void WaitForPlayerComplete__DelegateSignature();
    void StationInteractionExitComplete__DelegateSignature();
    bool StartSchedulingOverride(bool InValue, ESchedulingPriority InPriority, UObject* InProvider, bool bInProdcessValue, bool bInForceExit, bool bInProcessSchedule);
    void StartPrecachingFlesh(ESEPrecacheFleshPriority InPriority, UObject* InCaller, float InPrecacheDistance, bool bInAutoFleshLock, EForcedShutDownMode InForcedShutdown, EForcedShutDownPriority InForcedShutdownPriority);
    bool SetFlesh(ABase_Character* InFlesh);
    void SetCurrentActorToAggro(FName InRequiredTeam, bool bEnableCombat);
    void SetCompanionHighLOD(bool bHighLOD);
    void RequestHighLOD();
    void PerformTaskStationUseStart__DelegateSignature();
    void PerformTaskStationUseFinish__DelegateSignature();
    void PerformTaskStationFinishUseAfterGiventTime__DelegateSignature(float InFinishTime);
    void PerformTaskComplete__DelegateSignature(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits);
    void PerformTask_WaitForTime(float InTime, FString InLocation);
    bool PerformTask_WaitForPlayerIsComplete();
    void PerformTask_WaitForPlayer(float InDistance, bool InbOrientTowardsPlayer);
    bool PerformTask_TeleportToTransform(FTransform& InTransform);
    bool PerformTask_TeleportToStation(AStation* InStation, bool bInInteract, FString InSocialAction, int32_t InConnectionIndex, float InStationDurationOverride, bool InSkipValidation);
    bool PerformTask_TeleportToLocation(FVector& InLocation);
    void PerformTask_StopLumosOnNPC(bool bSuccess, bool bTimeout);
    void PerformTask_StartLumosOnNPC(float Timeout, int32_t InSpellLevel);
    void PerformTask_StartCustomTask_NoLocation();
    void PerformTask_ReparoFinished(uint8_t InAction);
    void PerformTask_RemoveActivePerformTask();
    bool PerformTask_PlaceAtTransform(FTransform& InTransform);
    bool PerformTask_PlaceAtLocation(FVector& InLocation);
    bool PerformTask_MoveToStation(AStation* InStation, FName InActionName, bool bInInteract, float InForceSpeed, int32_t InConnectionIndex, float InStationDurationOverride);
    void PerformTask_MoveToLocation(FVector& InLocation, float InForceSpeed, float InClearanceDistance, bool InBTriggerNextActivity, float InRadius, UPathComponent* InPath);
    AFlyingBroom* PerformTask_MountBroomWithFlightData(UClass* FlyingBroomClass, UFlyingBroomPhysics* StudentFlightData);
    AFlyingBroom* PerformTask_MountBroom(UClass* FlyingBroomClass);
    void PerformTask_FollowActor(AActor* InFollowActor, float InForceSpeed);
    void PerformTask_FinishCustomTask_NoLocation();
    void PerformTask_DismountBroom();
    void PerformTask_CustomSpellFinished(uint8_t InAction);
    void PerformTask_CastReparo(AActor* TargetPtr, float Timeout);
    void PerformTask_CastCustomSpell(AActor* TargetPtr, float Timeout);
    bool PerformTask_ApparateOutActivity();
    bool PerformTask_ApparateOut(UClass* InAblAbility);
    bool PerformTask_ApparateIn(UClass* InAblAbility);
    void PerformTask_ApparateFinishedActivity();
    void PerformTask_ApparateFinished();
    void PerformCustomAction_NoLocation__DelegateSignature();
    void PawnOverlapBegin(AActor* InSelf, AActor* InOther);
    void Pause(bool bInPause);
    void MoveToStationComplete__DelegateSignature();
    void MoveToLocationComplete__DelegateSignature();
    bool IsWorldEventReleasedHobo();
    bool IsWorldEventHobo();
    bool IsWaitingForStation();
    bool IsStudent();
    bool IsSplineHobo();
    bool IsSeatFillerHobo();
    bool IsSceneRigHobo();
    bool IsInTransit();
    bool IsInPlayerInteraction();
    bool IsHobo();
    bool IsGhost();
    bool IsGeneralHobo();
    bool IsEnabled();
    void InteractWithStationComplete__DelegateSignature();
    void GetUpcomingActivity(bool& ActivityIsValid, FScheduleEntry& UpcomingActivity);
    ASocialReasoning* GetSocialReasoning();
    void GetMinutesToUpcomingActivity(bool& ActivityIsValid, int32_t& MinutesToUpcomingActivity);
    FVector GetLocation();
    void GetGoalStatus(E_Goal::Type GoalType, FGoalStatus& GoalStatus);
    void GetGoalActivity(E_Goal::Type GoalType, bool& ActivityIsValid, FScheduleEntry& RequestedActivity);
    APawn* GetFlesh();
    float GetExcessTravelTime(float InDeltaTime);
    ABase_Character* GetBaseCharacter();
    bool FinishSchedulingOverride(ESchedulingPriority InPriority, UObject* InProvider, bool bInProcessValue, bool bInForceExit, bool bInProcessSchedule);
    void EndPrecachingFlesh(ESEPrecacheFleshPriority InPriority, UObject* InCaller, bool bInAutoFleshLock, EForcedShutDownMode InForcedShutdown, EForcedShutDownPriority InForcedShutdownPriority);
    void EnableSocialControl(bool InEnable);
    bool EnableScheduling(bool InEnable, bool bInForceExit, bool bInProcessSchedule);
    void DontAllowBTShutdown(ESEAllowBTShutdownPriority InPriority, UObject* InCaller);
    void DialogCompleteCallback();
    bool CurrentlyInFlesh();
    void CollisionResponseEnded(ASocialReasoning* SocialReasoning, FName SocialAction);
    void CanAllowBTShutdown(ESEAllowBTShutdownPriority InPriority, UObject* InCaller);
    void AddThinkNowEvent(FString InText, float InDelayLow, float InDelayHigh, bool bInAllowBTShutdown);
    bool AbandonStations(EStationExitCallBack InExitCallback);
}; // Size: 0x10d0
#pragma pack(pop)
