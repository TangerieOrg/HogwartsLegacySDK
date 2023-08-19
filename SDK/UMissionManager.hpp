#pragma once
#include <cstdint>
#include "FDatabaseMissionList.hpp"
#include "FMissionLogData.hpp"
#include "MissionStatus.hpp"
#include "UObject.hpp"
class UMissionInteractionManager;
struct FVector;
class UStationComponent;
class AActor;
class UScheduledEntity;
struct FRestrictionInfo;
class APerformTasksForAI;
class UBeaconInfo;
#pragma pack(push, 1)
class UMissionManager : public UObject {
public:
    char pad_28[0x488];
    UMissionInteractionManager* InteractionManager; // 0x4b0
    char pad_4b8[0x548];
    FName FailureReasonTextKey; // 0xa00
    char pad_a08[0xb0];
    static UMissionManager* StaticClass();
    static void UpdateBlueprintTaskProgressBP(FName MissionID, FString missionStepNickname, int32_t ProgressIncrement, int32_t ProgressGoal);
    static void TrackUpdatedMissionBP();
    static bool StationKnownByMissionManagerBP(UStationComponent* Object);
    static void ShouldForcePlantItemBP(AActor* interactionActor, FString& o_itemToPlant);
    static void SetMissionLogFocusMissionBP(FName MissionID);
    static bool SetMapCursorToMissionLocationBP(FName MissionID);
    static void ResetMissionDevOnlyBP(FName MissionID);
    static void RequestMissionUpdateBP(FName MissionID);
    void PlaySceneRigFinished();
    static void PlayMissionFromFrontEnd(FString MissionName, FString Gender, FString SkipOption);
    static void PlayMissionDevOnlyBP(FName MissionID);
    void OnStartNewDay();
    void OnPreGameSave();
    void OnPostGameSave();
    void OnPostGameLoad();
    void MarkMissionAsViewed(FName& MissionName);
    static bool IsNewMission(FName MissionName);
    static bool IsFocusMissionBP(FName MissionID, FName CharacterID);
    void HandleStatChanged(FName StatID, int32_t Value, int32_t Delta);
    void HandleSceneRigFadeOutComplete(UObject* i_caller, int32_t Value);
    void HandleSceneRigFadeOut(UObject* i_caller, int32_t Value);
    void HandlePerformTasksDone(APerformTasksForAI* InPerformTasksForAI);
    void HandleMissionEditorMessage(UObject* i_caller, FString Message);
    void HandleHighPriorityStreamingComplete();
    static void HandleGiftingBP(FName CharacterID, FString ItemId, int32_t ItemCount);
    void HandleFleshCreated(AActor* InActor, UScheduledEntity* InScheduledEntity);
    void HandleExperienceLevelChanged(int32_t ExpLevel, bool bIndicateHUD);
    void GetNewlyHilitedSpell(FString& Spell);
    static bool GetMissionStepCompletedBP(FName MissionID, FString StepNickname);
    static FString GetMissionStepBP(FName MissionID);
    static MissionStatus GetMissionStatusBP(FName MissionID);
    static TArray<FString> GetMissionSkipOptions(FString MissionName);
    static FName GetMissionName(FDatabaseMissionList DatabaseMissionList);
    static TArray<FMissionLogData> GetMissionLogDataSingleBP(int32_t missionIndex);
    static TArray<FMissionLogData> GetMissionLogDataBP(int32_t& OutTrackedMissionIndex);
    static bool GetMissionBeaconWorldLocationBP(FName MissionID, FVector& WorldLocation);
    static UBeaconInfo* GetMissionBeaconBP(FName MissionID);
    static TArray<FString> GetFrontEndMissionList(int32_t& StartIndex);
    static UMissionManager* Get();
    static void DismissMissionLogBP();
    static void CompleteBlueprintConditionBP(FName MissionID, FString missionStepNickname);
    void CheckMissionRestriction(FString restrictionType, FString restrictionValue, FRestrictionInfo& ioRestrictionInfo, bool& o_canSpawn);
    static bool AutomationBlocksDungeonLoad(FName DungeonName);
    static void AbandonMissionBP();
}; // Size: 0xab8
#pragma pack(pop)
