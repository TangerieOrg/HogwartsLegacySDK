#include "AActor.hpp"
#include "APerformTasksForAI.hpp"
#include "FDatabaseMissionList.hpp"
#include "FMissionLogData.hpp"
#include "FRestrictionInfo.hpp"
#include "FVector.hpp"
#include "MissionStatus.hpp"
#include "UBeaconInfo.hpp"
#include "UFunction.hpp"
#include "UMissionInteractionManager.hpp"
#include "UMissionManager.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
#include "UStationComponent.hpp"
void UMissionManager::OnPostGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.OnPostGameSave"));
    struct Params_OnPostGameSave {
    }; // Size: 0x0
    Params_OnPostGameSave params{};
    ProcessEvent(func, &params);
}
bool UMissionManager::SetMapCursorToMissionLocationBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.SetMapCursorToMissionLocationBP"));
    struct Params_SetMapCursorToMissionLocationBP {
        FName MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetMapCursorToMissionLocationBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMissionManager* UMissionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionManager");
    return (UMissionManager*)res;
}
void UMissionManager::CheckMissionRestriction(FString restrictionType, FString restrictionValue, FRestrictionInfo& ioRestrictionInfo, bool& o_canSpawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.CheckMissionRestriction"));
    struct Params_CheckMissionRestriction {
        FString restrictionType; // 0x0
        FString restrictionValue; // 0x10
        FRestrictionInfo ioRestrictionInfo; // 0x20
        bool o_canSpawn; // 0xd8
    }; // Size: 0xd9
    Params_CheckMissionRestriction params{};
    params.restrictionType = (FString)restrictionType;
    params.restrictionValue = (FString)restrictionValue;
    params.ioRestrictionInfo = (FRestrictionInfo)ioRestrictionInfo;
    params.o_canSpawn = (bool)o_canSpawn;
    ProcessEvent(func, &params);
    ioRestrictionInfo = params.ioRestrictionInfo;
    o_canSpawn = params.o_canSpawn;
}
void UMissionManager::UpdateBlueprintTaskProgressBP(FName MissionID, FString missionStepNickname, int32_t ProgressIncrement, int32_t ProgressGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.UpdateBlueprintTaskProgressBP"));
    struct Params_UpdateBlueprintTaskProgressBP {
        FName MissionID; // 0x0
        FString missionStepNickname; // 0x8
        int32_t ProgressIncrement; // 0x18
        int32_t ProgressGoal; // 0x1c
    }; // Size: 0x20
    Params_UpdateBlueprintTaskProgressBP params{};
    params.MissionID = (FName)MissionID;
    params.missionStepNickname = (FString)missionStepNickname;
    params.ProgressIncrement = (int32_t)ProgressIncrement;
    params.ProgressGoal = (int32_t)ProgressGoal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::SetMissionLogFocusMissionBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.SetMissionLogFocusMissionBP"));
    struct Params_SetMissionLogFocusMissionBP {
        FName MissionID; // 0x0
    }; // Size: 0x8
    Params_SetMissionLogFocusMissionBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::TrackUpdatedMissionBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.TrackUpdatedMissionBP"));
    struct Params_TrackUpdatedMissionBP {
    }; // Size: 0x0
    Params_TrackUpdatedMissionBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::ResetMissionDevOnlyBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.ResetMissionDevOnlyBP"));
    struct Params_ResetMissionDevOnlyBP {
        FName MissionID; // 0x0
    }; // Size: 0x8
    Params_ResetMissionDevOnlyBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::CompleteBlueprintConditionBP(FName MissionID, FString missionStepNickname) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.CompleteBlueprintConditionBP"));
    struct Params_CompleteBlueprintConditionBP {
        FName MissionID; // 0x0
        FString missionStepNickname; // 0x8
    }; // Size: 0x18
    Params_CompleteBlueprintConditionBP params{};
    params.MissionID = (FName)MissionID;
    params.missionStepNickname = (FString)missionStepNickname;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMissionManager::StationKnownByMissionManagerBP(UStationComponent* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.StationKnownByMissionManagerBP"));
    struct Params_StationKnownByMissionManagerBP {
        UStationComponent* Object; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StationKnownByMissionManagerBP params{};
    params.Object = (UStationComponent*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMissionManager::RequestMissionUpdateBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.RequestMissionUpdateBP"));
    struct Params_RequestMissionUpdateBP {
        FName MissionID; // 0x0
    }; // Size: 0x8
    Params_RequestMissionUpdateBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::ShouldForcePlantItemBP(AActor* interactionActor, FString& o_itemToPlant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.ShouldForcePlantItemBP"));
    struct Params_ShouldForcePlantItemBP {
        AActor* interactionActor; // 0x0
        FString o_itemToPlant; // 0x8
    }; // Size: 0x18
    Params_ShouldForcePlantItemBP params{};
    params.interactionActor = (AActor*)interactionActor;
    params.o_itemToPlant = (FString)o_itemToPlant;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_itemToPlant = params.o_itemToPlant;
}
MissionStatus UMissionManager::GetMissionStatusBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionStatusBP"));
    struct Params_GetMissionStatusBP {
        FName MissionID; // 0x0
        MissionStatus ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMissionStatusBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (MissionStatus)params.ReturnValue;
}
void UMissionManager::HandleSceneRigFadeOut(UObject* i_caller, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleSceneRigFadeOut"));
    struct Params_HandleSceneRigFadeOut {
        UObject* i_caller; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_HandleSceneRigFadeOut params{};
    params.i_caller = (UObject*)i_caller;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UMissionManager::PlaySceneRigFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.PlaySceneRigFinished"));
    struct Params_PlaySceneRigFinished {
    }; // Size: 0x0
    Params_PlaySceneRigFinished params{};
    ProcessEvent(func, &params);
}
void UMissionManager::PlayMissionFromFrontEnd(FString MissionName, FString Gender, FString SkipOption) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.PlayMissionFromFrontEnd"));
    struct Params_PlayMissionFromFrontEnd {
        FString MissionName; // 0x0
        FString Gender; // 0x10
        FString SkipOption; // 0x20
    }; // Size: 0x30
    Params_PlayMissionFromFrontEnd params{};
    params.MissionName = (FString)MissionName;
    params.Gender = (FString)Gender;
    params.SkipOption = (FString)SkipOption;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::HandleHighPriorityStreamingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleHighPriorityStreamingComplete"));
    struct Params_HandleHighPriorityStreamingComplete {
    }; // Size: 0x0
    Params_HandleHighPriorityStreamingComplete params{};
    ProcessEvent(func, &params);
}
void UMissionManager::PlayMissionDevOnlyBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.PlayMissionDevOnlyBP"));
    struct Params_PlayMissionDevOnlyBP {
        FName MissionID; // 0x0
    }; // Size: 0x8
    Params_PlayMissionDevOnlyBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::OnStartNewDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.OnStartNewDay"));
    struct Params_OnStartNewDay {
    }; // Size: 0x0
    Params_OnStartNewDay params{};
    ProcessEvent(func, &params);
}
void UMissionManager::OnPreGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.OnPreGameSave"));
    struct Params_OnPreGameSave {
    }; // Size: 0x0
    Params_OnPreGameSave params{};
    ProcessEvent(func, &params);
}
void UMissionManager::OnPostGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.OnPostGameLoad"));
    struct Params_OnPostGameLoad {
    }; // Size: 0x0
    Params_OnPostGameLoad params{};
    ProcessEvent(func, &params);
}
void UMissionManager::MarkMissionAsViewed(FName& MissionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.MarkMissionAsViewed"));
    struct Params_MarkMissionAsViewed {
        FName MissionName; // 0x0
    }; // Size: 0x8
    Params_MarkMissionAsViewed params{};
    params.MissionName = (FName)MissionName;
    ProcessEvent(func, &params);
    MissionName = params.MissionName;
}
void UMissionManager::HandleSceneRigFadeOutComplete(UObject* i_caller, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleSceneRigFadeOutComplete"));
    struct Params_HandleSceneRigFadeOutComplete {
        UObject* i_caller; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_HandleSceneRigFadeOutComplete params{};
    params.i_caller = (UObject*)i_caller;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UMissionManager::IsNewMission(FName MissionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.IsNewMission"));
    struct Params_IsNewMission {
        FName MissionName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsNewMission params{};
    params.MissionName = (FName)MissionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMissionManager::IsFocusMissionBP(FName MissionID, FName CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.IsFocusMissionBP"));
    struct Params_IsFocusMissionBP {
        FName MissionID; // 0x0
        FName CharacterID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsFocusMissionBP params{};
    params.MissionID = (FName)MissionID;
    params.CharacterID = (FName)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMissionManager::HandleStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleStatChanged"));
    struct Params_HandleStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_HandleStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UMissionManager::HandlePerformTasksDone(APerformTasksForAI* InPerformTasksForAI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandlePerformTasksDone"));
    struct Params_HandlePerformTasksDone {
        APerformTasksForAI* InPerformTasksForAI; // 0x0
    }; // Size: 0x8
    Params_HandlePerformTasksDone params{};
    params.InPerformTasksForAI = (APerformTasksForAI*)InPerformTasksForAI;
    ProcessEvent(func, &params);
}
void UMissionManager::HandleMissionEditorMessage(UObject* i_caller, FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleMissionEditorMessage"));
    struct Params_HandleMissionEditorMessage {
        UObject* i_caller; // 0x0
        FString Message; // 0x8
    }; // Size: 0x18
    Params_HandleMissionEditorMessage params{};
    params.i_caller = (UObject*)i_caller;
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
TArray<FMissionLogData> UMissionManager::GetMissionLogDataSingleBP(int32_t missionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionLogDataSingleBP"));
    struct Params_GetMissionLogDataSingleBP {
        int32_t missionIndex; // 0x0
        char pad_4[0x4];
        TArray<FMissionLogData> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMissionLogDataSingleBP params{};
    params.missionIndex = (int32_t)missionIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FMissionLogData>)params.ReturnValue;
}
void UMissionManager::HandleGiftingBP(FName CharacterID, FString ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleGiftingBP"));
    struct Params_HandleGiftingBP {
        FName CharacterID; // 0x0
        FString ItemId; // 0x8
        int32_t ItemCount; // 0x18
    }; // Size: 0x1c
    Params_HandleGiftingBP params{};
    params.CharacterID = (FName)CharacterID;
    params.ItemId = (FString)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMissionManager::HandleFleshCreated(AActor* InActor, UScheduledEntity* InScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleFleshCreated"));
    struct Params_HandleFleshCreated {
        AActor* InActor; // 0x0
        UScheduledEntity* InScheduledEntity; // 0x8
    }; // Size: 0x10
    Params_HandleFleshCreated params{};
    params.InActor = (AActor*)InActor;
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    ProcessEvent(func, &params);
}
TArray<FString> UMissionManager::GetMissionSkipOptions(FString MissionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionSkipOptions"));
    struct Params_GetMissionSkipOptions {
        FString MissionName; // 0x0
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetMissionSkipOptions params{};
    params.MissionName = (FString)MissionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UMissionManager::HandleExperienceLevelChanged(int32_t ExpLevel, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.HandleExperienceLevelChanged"));
    struct Params_HandleExperienceLevelChanged {
        int32_t ExpLevel; // 0x0
        bool bIndicateHUD; // 0x4
    }; // Size: 0x5
    Params_HandleExperienceLevelChanged params{};
    params.ExpLevel = (int32_t)ExpLevel;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void UMissionManager::GetNewlyHilitedSpell(FString& Spell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetNewlyHilitedSpell"));
    struct Params_GetNewlyHilitedSpell {
        FString Spell; // 0x0
    }; // Size: 0x10
    Params_GetNewlyHilitedSpell params{};
    params.Spell = (FString)Spell;
    ProcessEvent(func, &params);
    Spell = params.Spell;
}
bool UMissionManager::GetMissionStepCompletedBP(FName MissionID, FString StepNickname) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionStepCompletedBP"));
    struct Params_GetMissionStepCompletedBP {
        FName MissionID; // 0x0
        FString StepNickname; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetMissionStepCompletedBP params{};
    params.MissionID = (FName)MissionID;
    params.StepNickname = (FString)StepNickname;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UMissionManager::GetMissionStepBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionStepBP"));
    struct Params_GetMissionStepBP {
        FName MissionID; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMissionStepBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UMissionManager::GetMissionName(FDatabaseMissionList DatabaseMissionList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionName"));
    struct Params_GetMissionName {
        FDatabaseMissionList DatabaseMissionList; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMissionName params{};
    params.DatabaseMissionList = (FDatabaseMissionList)DatabaseMissionList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FMissionLogData> UMissionManager::GetMissionLogDataBP(int32_t& OutTrackedMissionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionLogDataBP"));
    struct Params_GetMissionLogDataBP {
        int32_t OutTrackedMissionIndex; // 0x0
        char pad_4[0x4];
        TArray<FMissionLogData> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMissionLogDataBP params{};
    params.OutTrackedMissionIndex = (int32_t)OutTrackedMissionIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutTrackedMissionIndex = params.OutTrackedMissionIndex;
    return (TArray<FMissionLogData>)params.ReturnValue;
}
void UMissionManager::AbandonMissionBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.AbandonMissionBP"));
    struct Params_AbandonMissionBP {
    }; // Size: 0x0
    Params_AbandonMissionBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMissionManager::GetMissionBeaconWorldLocationBP(FName MissionID, FVector& WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionBeaconWorldLocationBP"));
    struct Params_GetMissionBeaconWorldLocationBP {
        FName MissionID; // 0x0
        FVector WorldLocation; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetMissionBeaconWorldLocationBP params{};
    params.MissionID = (FName)MissionID;
    params.WorldLocation = (FVector)WorldLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (bool)params.ReturnValue;
}
UBeaconInfo* UMissionManager::GetMissionBeaconBP(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetMissionBeaconBP"));
    struct Params_GetMissionBeaconBP {
        FName MissionID; // 0x0
        UBeaconInfo* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMissionBeaconBP params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBeaconInfo*)params.ReturnValue;
}
TArray<FString> UMissionManager::GetFrontEndMissionList(int32_t& StartIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.GetFrontEndMissionList"));
    struct Params_GetFrontEndMissionList {
        int32_t StartIndex; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetFrontEndMissionList params{};
    params.StartIndex = (int32_t)StartIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StartIndex = params.StartIndex;
    return (TArray<FString>)params.ReturnValue;
}
UMissionManager* UMissionManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.Get"));
    struct Params_Get {
        UMissionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMissionManager*)params.ReturnValue;
}
void UMissionManager::DismissMissionLogBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.DismissMissionLogBP"));
    struct Params_DismissMissionLogBP {
    }; // Size: 0x0
    Params_DismissMissionLogBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMissionManager::AutomationBlocksDungeonLoad(FName DungeonName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionManager.AutomationBlocksDungeonLoad"));
    struct Params_AutomationBlocksDungeonLoad {
        FName DungeonName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AutomationBlocksDungeonLoad params{};
    params.DungeonName = (FName)DungeonName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
