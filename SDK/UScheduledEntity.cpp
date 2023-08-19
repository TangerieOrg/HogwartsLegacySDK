#include "AActor.hpp"
#include "AAntiSocialAAIController.hpp"
#include "ABase_Character.hpp"
#include "AFlyingBroom.hpp"
#include "APawn.hpp"
#include "ASocialNavigatorController.hpp"
#include "ASocialReasoning.hpp"
#include "ASocialSplineController.hpp"
#include "AStation.hpp"
#include "EForcedShutDownMode.hpp"
#include "EForcedShutDownPriority.hpp"
#include "ESEAllowBTShutdownPriority.hpp"
#include "ESEPrecacheFleshPriority.hpp"
#include "ESchedulingPriority.hpp"
#include "EStationExitCallBack.hpp"
#include "E_Goal\Type.hpp"
#include "FGoalStatus.hpp"
#include "FScheduleEntry.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPathComponent.hpp"
#include "UScheduledEntity.hpp"
#include "UStationComponent.hpp"
void UScheduledEntity::PerformTask_MoveToLocation(FVector& InLocation, float InForceSpeed, float InClearanceDistance, bool InBTriggerNextActivity, float InRadius, UPathComponent* InPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_MoveToLocation"));
    struct Params_PerformTask_MoveToLocation {
        FVector InLocation; // 0x0
        float InForceSpeed; // 0xc
        float InClearanceDistance; // 0x10
        bool InBTriggerNextActivity; // 0x14
        char pad_15[0x3];
        float InRadius; // 0x18
        char pad_1c[0x4];
        UPathComponent* InPath; // 0x20
    }; // Size: 0x28
    Params_PerformTask_MoveToLocation params{};
    params.InLocation = (FVector)InLocation;
    params.InForceSpeed = (float)InForceSpeed;
    params.InClearanceDistance = (float)InClearanceDistance;
    params.InBTriggerNextActivity = (bool)InBTriggerNextActivity;
    params.InRadius = (float)InRadius;
    params.InPath = (UPathComponent*)InPath;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
}
void UScheduledEntity::PerformTask_DismountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_DismountBroom"));
    struct Params_PerformTask_DismountBroom {
    }; // Size: 0x0
    Params_PerformTask_DismountBroom params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::StartPrecachingFlesh(ESEPrecacheFleshPriority InPriority, UObject* InCaller, float InPrecacheDistance, bool bInAutoFleshLock, EForcedShutDownMode InForcedShutdown, EForcedShutDownPriority InForcedShutdownPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.StartPrecachingFlesh"));
    struct Params_StartPrecachingFlesh {
        ESEPrecacheFleshPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
        float InPrecacheDistance; // 0x10
        bool bInAutoFleshLock; // 0x14
        EForcedShutDownMode InForcedShutdown; // 0x15
        EForcedShutDownPriority InForcedShutdownPriority; // 0x16
    }; // Size: 0x17
    Params_StartPrecachingFlesh params{};
    params.InPriority = (ESEPrecacheFleshPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    params.InPrecacheDistance = (float)InPrecacheDistance;
    params.bInAutoFleshLock = (bool)bInAutoFleshLock;
    params.InForcedShutdown = (EForcedShutDownMode)InForcedShutdown;
    params.InForcedShutdownPriority = (EForcedShutDownPriority)InForcedShutdownPriority;
    ProcessEvent(func, &params);
}
void UScheduledEntity::GetGoalStatus(E_Goal::Type GoalType, FGoalStatus& GoalStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetGoalStatus"));
    struct Params_GetGoalStatus {
        E_Goal::Type GoalType; // 0x0
        FGoalStatus GoalStatus; // 0x1
    }; // Size: 0x5
    Params_GetGoalStatus params{};
    params.GoalType = (E_Goal::Type)GoalType;
    params.GoalStatus = (FGoalStatus)GoalStatus;
    ProcessEvent(func, &params);
    GoalStatus = params.GoalStatus;
}
bool UScheduledEntity::IsHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsHobo"));
    struct Params_IsHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_ApparateFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ApparateFinished"));
    struct Params_PerformTask_ApparateFinished {
    }; // Size: 0x0
    Params_PerformTask_ApparateFinished params{};
    ProcessEvent(func, &params);
}
UScheduledEntity* UScheduledEntity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ScheduledEntity");
    return (UScheduledEntity*)res;
}
void UScheduledEntity::RequestHighLOD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.RequestHighLOD"));
    struct Params_RequestHighLOD {
    }; // Size: 0x0
    Params_RequestHighLOD params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::IsWorldEventHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsWorldEventHobo"));
    struct Params_IsWorldEventHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWorldEventHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::WaitForPlayerComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.WaitForPlayerComplete__DelegateSignature"));
    struct Params_WaitForPlayerComplete__DelegateSignature {
    }; // Size: 0x0
    Params_WaitForPlayerComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::StationInteractionExitComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.StationInteractionExitComplete__DelegateSignature"));
    struct Params_StationInteractionExitComplete__DelegateSignature {
    }; // Size: 0x0
    Params_StationInteractionExitComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::InteractWithStationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.InteractWithStationComplete__DelegateSignature"));
    struct Params_InteractWithStationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_InteractWithStationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::SetCompanionHighLOD(bool bHighLOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.SetCompanionHighLOD"));
    struct Params_SetCompanionHighLOD {
        bool bHighLOD; // 0x0
    }; // Size: 0x1
    Params_SetCompanionHighLOD params{};
    params.bHighLOD = (bool)bHighLOD;
    ProcessEvent(func, &params);
}
void UScheduledEntity::MoveToLocationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.MoveToLocationComplete__DelegateSignature"));
    struct Params_MoveToLocationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_MoveToLocationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_TeleportToLocation(FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_TeleportToLocation"));
    struct Params_PerformTask_TeleportToLocation {
        FVector InLocation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_PerformTask_TeleportToLocation params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::StartSchedulingOverride(bool InValue, ESchedulingPriority InPriority, UObject* InProvider, bool bInProdcessValue, bool bInForceExit, bool bInProcessSchedule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.StartSchedulingOverride"));
    struct Params_StartSchedulingOverride {
        bool InValue; // 0x0
        ESchedulingPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* InProvider; // 0x8
        bool bInProdcessValue; // 0x10
        bool bInForceExit; // 0x11
        bool bInProcessSchedule; // 0x12
        bool ReturnValue; // 0x13
    }; // Size: 0x14
    Params_StartSchedulingOverride params{};
    params.InValue = (bool)InValue;
    params.InPriority = (ESchedulingPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    params.bInProdcessValue = (bool)bInProdcessValue;
    params.bInForceExit = (bool)bInForceExit;
    params.bInProcessSchedule = (bool)bInProcessSchedule;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::IsGeneralHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsGeneralHobo"));
    struct Params_IsGeneralHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGeneralHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::SetFlesh(ABase_Character* InFlesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.SetFlesh"));
    struct Params_SetFlesh {
        ABase_Character* InFlesh; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetFlesh params{};
    params.InFlesh = (ABase_Character*)InFlesh;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::PerformTask_TeleportToTransform(FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_TeleportToTransform"));
    struct Params_PerformTask_TeleportToTransform {
        FTransform InTransform; // 0x0
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_PerformTask_TeleportToTransform params{};
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (bool)params.ReturnValue;
}
void UScheduledEntity::SetCurrentActorToAggro(FName InRequiredTeam, bool bEnableCombat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.SetCurrentActorToAggro"));
    struct Params_SetCurrentActorToAggro {
        FName InRequiredTeam; // 0x0
        bool bEnableCombat; // 0x8
    }; // Size: 0x9
    Params_SetCurrentActorToAggro params{};
    params.InRequiredTeam = (FName)InRequiredTeam;
    params.bEnableCombat = (bool)bEnableCombat;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_ApparateOut(UClass* InAblAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ApparateOut"));
    struct Params_PerformTask_ApparateOut {
        UClass* InAblAbility; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PerformTask_ApparateOut params{};
    params.InAblAbility = (UClass*)InAblAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTaskStationUseStart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.PerformTaskStationUseStart__DelegateSignature"));
    struct Params_PerformTaskStationUseStart__DelegateSignature {
    }; // Size: 0x0
    Params_PerformTaskStationUseStart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
ASocialReasoning* UScheduledEntity::GetSocialReasoning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetSocialReasoning"));
    struct Params_GetSocialReasoning {
        ASocialReasoning* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSocialReasoning params{};
    ProcessEvent(func, &params);
    return (ASocialReasoning*)params.ReturnValue;
}
bool UScheduledEntity::IsSeatFillerHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsSeatFillerHobo"));
    struct Params_IsSeatFillerHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSeatFillerHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_CustomSpellFinished(uint8_t InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_CustomSpellFinished"));
    struct Params_PerformTask_CustomSpellFinished {
        uint8_t InAction; // 0x0
    }; // Size: 0x1
    Params_PerformTask_CustomSpellFinished params{};
    params.InAction = (uint8_t)InAction;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTaskStationUseFinish__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.PerformTaskStationUseFinish__DelegateSignature"));
    struct Params_PerformTaskStationUseFinish__DelegateSignature {
    }; // Size: 0x0
    Params_PerformTaskStationUseFinish__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTaskStationFinishUseAfterGiventTime__DelegateSignature(float InFinishTime) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.PerformTaskStationFinishUseAfterGiventTime__DelegateSignature"));
    struct Params_PerformTaskStationFinishUseAfterGiventTime__DelegateSignature {
        float InFinishTime; // 0x0
    }; // Size: 0x4
    Params_PerformTaskStationFinishUseAfterGiventTime__DelegateSignature params{};
    params.InFinishTime = (float)InFinishTime;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTaskComplete__DelegateSignature(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.PerformTaskComplete__DelegateSignature"));
    struct Params_PerformTaskComplete__DelegateSignature {
        UScheduledEntity* ScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_PerformTaskComplete__DelegateSignature params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_CastCustomSpell(AActor* TargetPtr, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_CastCustomSpell"));
    struct Params_PerformTask_CastCustomSpell {
        AActor* TargetPtr; // 0x0
        float Timeout; // 0x8
    }; // Size: 0xc
    Params_PerformTask_CastCustomSpell params{};
    params.TargetPtr = (AActor*)TargetPtr;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_WaitForTime(float InTime, FString InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_WaitForTime"));
    struct Params_PerformTask_WaitForTime {
        float InTime; // 0x0
        char pad_4[0x4];
        FString InLocation; // 0x8
    }; // Size: 0x18
    Params_PerformTask_WaitForTime params{};
    params.InTime = (float)InTime;
    params.InLocation = (FString)InLocation;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_WaitForPlayerIsComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_WaitForPlayerIsComplete"));
    struct Params_PerformTask_WaitForPlayerIsComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PerformTask_WaitForPlayerIsComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::MoveToStationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.MoveToStationComplete__DelegateSignature"));
    struct Params_MoveToStationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_MoveToStationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_WaitForPlayer(float InDistance, bool InbOrientTowardsPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_WaitForPlayer"));
    struct Params_PerformTask_WaitForPlayer {
        float InDistance; // 0x0
        bool InbOrientTowardsPlayer; // 0x4
    }; // Size: 0x5
    Params_PerformTask_WaitForPlayer params{};
    params.InDistance = (float)InDistance;
    params.InbOrientTowardsPlayer = (bool)InbOrientTowardsPlayer;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_TeleportToStation(AStation* InStation, bool bInInteract, FString InSocialAction, int32_t InConnectionIndex, float InStationDurationOverride, bool InSkipValidation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_TeleportToStation"));
    struct Params_PerformTask_TeleportToStation {
        AStation* InStation; // 0x0
        bool bInInteract; // 0x8
        char pad_9[0x7];
        FString InSocialAction; // 0x10
        int32_t InConnectionIndex; // 0x20
        float InStationDurationOverride; // 0x24
        bool InSkipValidation; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_PerformTask_TeleportToStation params{};
    params.InStation = (AStation*)InStation;
    params.bInInteract = (bool)bInInteract;
    params.InSocialAction = (FString)InSocialAction;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    params.InStationDurationOverride = (float)InStationDurationOverride;
    params.InSkipValidation = (bool)InSkipValidation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformCustomAction_NoLocation__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ScheduledEntity.PerformCustomAction_NoLocation__DelegateSignature"));
    struct Params_PerformCustomAction_NoLocation__DelegateSignature {
    }; // Size: 0x0
    Params_PerformCustomAction_NoLocation__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_ReparoFinished(uint8_t InAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ReparoFinished"));
    struct Params_PerformTask_ReparoFinished {
        uint8_t InAction; // 0x0
    }; // Size: 0x1
    Params_PerformTask_ReparoFinished params{};
    params.InAction = (uint8_t)InAction;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_StopLumosOnNPC(bool bSuccess, bool bTimeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_StopLumosOnNPC"));
    struct Params_PerformTask_StopLumosOnNPC {
        bool bSuccess; // 0x0
        bool bTimeout; // 0x1
    }; // Size: 0x2
    Params_PerformTask_StopLumosOnNPC params{};
    params.bSuccess = (bool)bSuccess;
    params.bTimeout = (bool)bTimeout;
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_StartLumosOnNPC(float Timeout, int32_t InSpellLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_StartLumosOnNPC"));
    struct Params_PerformTask_StartLumosOnNPC {
        float Timeout; // 0x0
        int32_t InSpellLevel; // 0x4
    }; // Size: 0x8
    Params_PerformTask_StartLumosOnNPC params{};
    params.Timeout = (float)Timeout;
    params.InSpellLevel = (int32_t)InSpellLevel;
    ProcessEvent(func, &params);
}
void UScheduledEntity::Pause(bool bInPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.Pause"));
    struct Params_Pause {
        bool bInPause; // 0x0
    }; // Size: 0x1
    Params_Pause params{};
    params.bInPause = (bool)bInPause;
    ProcessEvent(func, &params);
}
AFlyingBroom* UScheduledEntity::PerformTask_MountBroomWithFlightData(UClass* FlyingBroomClass, UFlyingBroomPhysics* StudentFlightData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_MountBroomWithFlightData"));
    struct Params_PerformTask_MountBroomWithFlightData {
        UClass* FlyingBroomClass; // 0x0
        UFlyingBroomPhysics* StudentFlightData; // 0x8
        AFlyingBroom* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PerformTask_MountBroomWithFlightData params{};
    params.FlyingBroomClass = (UClass*)FlyingBroomClass;
    params.StudentFlightData = (UFlyingBroomPhysics*)StudentFlightData;
    ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
void UScheduledEntity::PerformTask_StartCustomTask_NoLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_StartCustomTask_NoLocation"));
    struct Params_PerformTask_StartCustomTask_NoLocation {
    }; // Size: 0x0
    Params_PerformTask_StartCustomTask_NoLocation params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_RemoveActivePerformTask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_RemoveActivePerformTask"));
    struct Params_PerformTask_RemoveActivePerformTask {
    }; // Size: 0x0
    Params_PerformTask_RemoveActivePerformTask params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_PlaceAtTransform(FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_PlaceAtTransform"));
    struct Params_PerformTask_PlaceAtTransform {
        FTransform InTransform; // 0x0
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_PerformTask_PlaceAtTransform params{};
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PawnOverlapBegin(AActor* InSelf, AActor* InOther) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PawnOverlapBegin"));
    struct Params_PawnOverlapBegin {
        AActor* InSelf; // 0x0
        AActor* InOther; // 0x8
    }; // Size: 0x10
    Params_PawnOverlapBegin params{};
    params.InSelf = (AActor*)InSelf;
    params.InOther = (AActor*)InOther;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_ApparateIn(UClass* InAblAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ApparateIn"));
    struct Params_PerformTask_ApparateIn {
        UClass* InAblAbility; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PerformTask_ApparateIn params{};
    params.InAblAbility = (UClass*)InAblAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::PerformTask_PlaceAtLocation(FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_PlaceAtLocation"));
    struct Params_PerformTask_PlaceAtLocation {
        FVector InLocation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_PerformTask_PlaceAtLocation params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::PerformTask_MoveToStation(AStation* InStation, FName InActionName, bool bInInteract, float InForceSpeed, int32_t InConnectionIndex, float InStationDurationOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_MoveToStation"));
    struct Params_PerformTask_MoveToStation {
        AStation* InStation; // 0x0
        FName InActionName; // 0x8
        bool bInInteract; // 0x10
        char pad_11[0x3];
        float InForceSpeed; // 0x14
        int32_t InConnectionIndex; // 0x18
        float InStationDurationOverride; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_PerformTask_MoveToStation params{};
    params.InStation = (AStation*)InStation;
    params.InActionName = (FName)InActionName;
    params.bInInteract = (bool)bInInteract;
    params.InForceSpeed = (float)InForceSpeed;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    params.InStationDurationOverride = (float)InStationDurationOverride;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AFlyingBroom* UScheduledEntity::PerformTask_MountBroom(UClass* FlyingBroomClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_MountBroom"));
    struct Params_PerformTask_MountBroom {
        UClass* FlyingBroomClass; // 0x0
        AFlyingBroom* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_PerformTask_MountBroom params{};
    params.FlyingBroomClass = (UClass*)FlyingBroomClass;
    ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
bool UScheduledEntity::IsInTransit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsInTransit"));
    struct Params_IsInTransit {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInTransit params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_FollowActor(AActor* InFollowActor, float InForceSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_FollowActor"));
    struct Params_PerformTask_FollowActor {
        AActor* InFollowActor; // 0x0
        float InForceSpeed; // 0x8
    }; // Size: 0xc
    Params_PerformTask_FollowActor params{};
    params.InFollowActor = (AActor*)InFollowActor;
    params.InForceSpeed = (float)InForceSpeed;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::IsSceneRigHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsSceneRigHobo"));
    struct Params_IsSceneRigHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSceneRigHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::EnableSocialControl(bool InEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.EnableSocialControl"));
    struct Params_EnableSocialControl {
        bool InEnable; // 0x0
    }; // Size: 0x1
    Params_EnableSocialControl params{};
    params.InEnable = (bool)InEnable;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::PerformTask_ApparateOutActivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ApparateOutActivity"));
    struct Params_PerformTask_ApparateOutActivity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PerformTask_ApparateOutActivity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_FinishCustomTask_NoLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_FinishCustomTask_NoLocation"));
    struct Params_PerformTask_FinishCustomTask_NoLocation {
    }; // Size: 0x0
    Params_PerformTask_FinishCustomTask_NoLocation params{};
    ProcessEvent(func, &params);
}
void UScheduledEntity::PerformTask_CastReparo(AActor* TargetPtr, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_CastReparo"));
    struct Params_PerformTask_CastReparo {
        AActor* TargetPtr; // 0x0
        float Timeout; // 0x8
    }; // Size: 0xc
    Params_PerformTask_CastReparo params{};
    params.TargetPtr = (AActor*)TargetPtr;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::IsInPlayerInteraction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsInPlayerInteraction"));
    struct Params_IsInPlayerInteraction {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInPlayerInteraction params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::PerformTask_ApparateFinishedActivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.PerformTask_ApparateFinishedActivity"));
    struct Params_PerformTask_ApparateFinishedActivity {
    }; // Size: 0x0
    Params_PerformTask_ApparateFinishedActivity params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::IsWorldEventReleasedHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsWorldEventReleasedHobo"));
    struct Params_IsWorldEventReleasedHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWorldEventReleasedHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::IsWaitingForStation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsWaitingForStation"));
    struct Params_IsWaitingForStation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWaitingForStation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::EnableScheduling(bool InEnable, bool bInForceExit, bool bInProcessSchedule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.EnableScheduling"));
    struct Params_EnableScheduling {
        bool InEnable; // 0x0
        bool bInForceExit; // 0x1
        bool bInProcessSchedule; // 0x2
        bool ReturnValue; // 0x3
    }; // Size: 0x4
    Params_EnableScheduling params{};
    params.InEnable = (bool)InEnable;
    params.bInForceExit = (bool)bInForceExit;
    params.bInProcessSchedule = (bool)bInProcessSchedule;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::IsStudent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsStudent"));
    struct Params_IsStudent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStudent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::IsSplineHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsSplineHobo"));
    struct Params_IsSplineHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSplineHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduledEntity::IsGhost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.IsGhost"));
    struct Params_IsGhost {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGhost params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::GetUpcomingActivity(bool& ActivityIsValid, FScheduleEntry& UpcomingActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetUpcomingActivity"));
    struct Params_GetUpcomingActivity {
        bool ActivityIsValid; // 0x0
        char pad_1[0x7];
        FScheduleEntry UpcomingActivity; // 0x8
    }; // Size: 0x100
    Params_GetUpcomingActivity params{};
    params.ActivityIsValid = (bool)ActivityIsValid;
    params.UpcomingActivity = (FScheduleEntry)UpcomingActivity;
    ProcessEvent(func, &params);
    ActivityIsValid = params.ActivityIsValid;
    UpcomingActivity = params.UpcomingActivity;
}
void UScheduledEntity::GetMinutesToUpcomingActivity(bool& ActivityIsValid, int32_t& MinutesToUpcomingActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetMinutesToUpcomingActivity"));
    struct Params_GetMinutesToUpcomingActivity {
        bool ActivityIsValid; // 0x0
        char pad_1[0x3];
        int32_t MinutesToUpcomingActivity; // 0x4
    }; // Size: 0x8
    Params_GetMinutesToUpcomingActivity params{};
    params.ActivityIsValid = (bool)ActivityIsValid;
    params.MinutesToUpcomingActivity = (int32_t)MinutesToUpcomingActivity;
    ProcessEvent(func, &params);
    ActivityIsValid = params.ActivityIsValid;
    MinutesToUpcomingActivity = params.MinutesToUpcomingActivity;
}
FVector UScheduledEntity::GetLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetLocation"));
    struct Params_GetLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UScheduledEntity::GetGoalActivity(E_Goal::Type GoalType, bool& ActivityIsValid, FScheduleEntry& RequestedActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetGoalActivity"));
    struct Params_GetGoalActivity {
        E_Goal::Type GoalType; // 0x0
        bool ActivityIsValid; // 0x1
        char pad_2[0x6];
        FScheduleEntry RequestedActivity; // 0x8
    }; // Size: 0x100
    Params_GetGoalActivity params{};
    params.GoalType = (E_Goal::Type)GoalType;
    params.ActivityIsValid = (bool)ActivityIsValid;
    params.RequestedActivity = (FScheduleEntry)RequestedActivity;
    ProcessEvent(func, &params);
    ActivityIsValid = params.ActivityIsValid;
    RequestedActivity = params.RequestedActivity;
}
APawn* UScheduledEntity::GetFlesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetFlesh"));
    struct Params_GetFlesh {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFlesh params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
float UScheduledEntity::GetExcessTravelTime(float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetExcessTravelTime"));
    struct Params_GetExcessTravelTime {
        float InDeltaTime; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetExcessTravelTime params{};
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ABase_Character* UScheduledEntity::GetBaseCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.GetBaseCharacter"));
    struct Params_GetBaseCharacter {
        ABase_Character* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBaseCharacter params{};
    ProcessEvent(func, &params);
    return (ABase_Character*)params.ReturnValue;
}
bool UScheduledEntity::FinishSchedulingOverride(ESchedulingPriority InPriority, UObject* InProvider, bool bInProcessValue, bool bInForceExit, bool bInProcessSchedule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.FinishSchedulingOverride"));
    struct Params_FinishSchedulingOverride {
        ESchedulingPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InProvider; // 0x8
        bool bInProcessValue; // 0x10
        bool bInForceExit; // 0x11
        bool bInProcessSchedule; // 0x12
        bool ReturnValue; // 0x13
    }; // Size: 0x14
    Params_FinishSchedulingOverride params{};
    params.InPriority = (ESchedulingPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    params.bInProcessValue = (bool)bInProcessValue;
    params.bInForceExit = (bool)bInForceExit;
    params.bInProcessSchedule = (bool)bInProcessSchedule;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::EndPrecachingFlesh(ESEPrecacheFleshPriority InPriority, UObject* InCaller, bool bInAutoFleshLock, EForcedShutDownMode InForcedShutdown, EForcedShutDownPriority InForcedShutdownPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.EndPrecachingFlesh"));
    struct Params_EndPrecachingFlesh {
        ESEPrecacheFleshPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
        bool bInAutoFleshLock; // 0x10
        EForcedShutDownMode InForcedShutdown; // 0x11
        EForcedShutDownPriority InForcedShutdownPriority; // 0x12
    }; // Size: 0x13
    Params_EndPrecachingFlesh params{};
    params.InPriority = (ESEPrecacheFleshPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    params.bInAutoFleshLock = (bool)bInAutoFleshLock;
    params.InForcedShutdown = (EForcedShutDownMode)InForcedShutdown;
    params.InForcedShutdownPriority = (EForcedShutDownPriority)InForcedShutdownPriority;
    ProcessEvent(func, &params);
}
void UScheduledEntity::DontAllowBTShutdown(ESEAllowBTShutdownPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.DontAllowBTShutdown"));
    struct Params_DontAllowBTShutdown {
        ESEAllowBTShutdownPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_DontAllowBTShutdown params{};
    params.InPriority = (ESEAllowBTShutdownPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void UScheduledEntity::DialogCompleteCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.DialogCompleteCallback"));
    struct Params_DialogCompleteCallback {
    }; // Size: 0x0
    Params_DialogCompleteCallback params{};
    ProcessEvent(func, &params);
}
bool UScheduledEntity::CurrentlyInFlesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.CurrentlyInFlesh"));
    struct Params_CurrentlyInFlesh {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CurrentlyInFlesh params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduledEntity::CollisionResponseEnded(ASocialReasoning* SocialReasoning, FName SocialAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.CollisionResponseEnded"));
    struct Params_CollisionResponseEnded {
        ASocialReasoning* SocialReasoning; // 0x0
        FName SocialAction; // 0x8
    }; // Size: 0x10
    Params_CollisionResponseEnded params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.SocialAction = (FName)SocialAction;
    ProcessEvent(func, &params);
}
void UScheduledEntity::CanAllowBTShutdown(ESEAllowBTShutdownPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.CanAllowBTShutdown"));
    struct Params_CanAllowBTShutdown {
        ESEAllowBTShutdownPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_CanAllowBTShutdown params{};
    params.InPriority = (ESEAllowBTShutdownPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void UScheduledEntity::AddThinkNowEvent(FString InText, float InDelayLow, float InDelayHigh, bool bInAllowBTShutdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.AddThinkNowEvent"));
    struct Params_AddThinkNowEvent {
        FString InText; // 0x0
        float InDelayLow; // 0x10
        float InDelayHigh; // 0x14
        bool bInAllowBTShutdown; // 0x18
    }; // Size: 0x19
    Params_AddThinkNowEvent params{};
    params.InText = (FString)InText;
    params.InDelayLow = (float)InDelayLow;
    params.InDelayHigh = (float)InDelayHigh;
    params.bInAllowBTShutdown = (bool)bInAllowBTShutdown;
    ProcessEvent(func, &params);
}
bool UScheduledEntity::AbandonStations(EStationExitCallBack InExitCallback) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledEntity.AbandonStations"));
    struct Params_AbandonStations {
        EStationExitCallBack InExitCallback; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_AbandonStations params{};
    params.InExitCallback = (EStationExitCallBack)InExitCallback;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
