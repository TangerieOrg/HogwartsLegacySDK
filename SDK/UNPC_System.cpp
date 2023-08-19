#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "AMunitionType_Base.hpp"
#include "ANPC_Character.hpp"
#include "EBossStates.hpp"
#include "EGameEvent_Intensity.hpp"
#include "ENPC_CombatThreatLevel.hpp"
#include "ENPC_ManagerType.hpp"
#include "FAssetTrackerData.hpp"
#include "FBossFightData.hpp"
#include "FEnemy_ParryWindowSetupData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPostDeath_Params.hpp"
#include "FVector.hpp"
#include "UEnemyWeapon_Manager.hpp"
#include "UFunction.hpp"
#include "UNPC_System.hpp"
#include "UObject.hpp"
void UNPC_System::ReportGameEvent(FGameplayTagContainer TagContainer, FVector Location, EGameEvent_Intensity Intensity, float Duration, float Range, float Falloff, AActor* Instigator, bool bTrackBackToInstigator, AActor* Target, FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ReportGameEvent"));
    struct Params_ReportGameEvent {
        FGameplayTagContainer TagContainer; // 0x0
        FVector Location; // 0x20
        EGameEvent_Intensity Intensity; // 0x2c
        char pad_2d[0x3];
        float Duration; // 0x30
        float Range; // 0x34
        float Falloff; // 0x38
        char pad_3c[0x4];
        AActor* Instigator; // 0x40
        bool bTrackBackToInstigator; // 0x48
        char pad_49[0x7];
        AActor* Target; // 0x50
        FName Name; // 0x58
    }; // Size: 0x60
    Params_ReportGameEvent params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.Location = (FVector)Location;
    params.Intensity = (EGameEvent_Intensity)Intensity;
    params.Duration = (float)Duration;
    params.Range = (float)Range;
    params.Falloff = (float)Falloff;
    params.Instigator = (AActor*)Instigator;
    params.bTrackBackToInstigator = (bool)bTrackBackToInstigator;
    params.Target = (AActor*)Target;
    params.Name = (FName)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNPC_System::SetOverrideThreatLevel(ENPC_CombatThreatLevel InThreatLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetOverrideThreatLevel"));
    struct Params_SetOverrideThreatLevel {
        ENPC_CombatThreatLevel InThreatLevel; // 0x0
    }; // Size: 0x1
    Params_SetOverrideThreatLevel params{};
    params.InThreatLevel = (ENPC_CombatThreatLevel)InThreatLevel;
    ProcessEvent(func, &params);
}
void UNPC_System::SetLoadoutConfigurationContext(FString InContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetLoadoutConfigurationContext"));
    struct Params_SetLoadoutConfigurationContext {
        FString InContext; // 0x0
    }; // Size: 0x10
    Params_SetLoadoutConfigurationContext params{};
    params.InContext = (FString)InContext;
    ProcessEvent(func, &params);
}
void UNPC_System::StartBossFight(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.StartBossFight"));
    struct Params_StartBossFight {
        FName InBossFightName; // 0x0
    }; // Size: 0x8
    Params_StartBossFight params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
}
UNPC_System* UNPC_System::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.Get"));
    struct Params_Get {
        UNPC_System* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNPC_System*)params.ReturnValue;
}
UNPC_System* UNPC_System::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_System");
    return (UNPC_System*)res;
}
void UNPC_System::TrackObject(FString ObjectName, AActor* ParentObject, AActor* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.TrackObject"));
    struct Params_TrackObject {
        FString ObjectName; // 0x0
        AActor* ParentObject; // 0x10
        AActor* ChildObject; // 0x18
    }; // Size: 0x20
    Params_TrackObject params{};
    params.ObjectName = (FString)ObjectName;
    params.ParentObject = (AActor*)ParentObject;
    params.ChildObject = (AActor*)ChildObject;
    ProcessEvent(func, &params);
}
void UNPC_System::StartWandLinkEvent(AActor* TargetActor, TArray<AActor*> ExcludeListAlways, TArray<AActor*> ExcludeListOnce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.StartWandLinkEvent"));
    struct Params_StartWandLinkEvent {
        AActor* TargetActor; // 0x0
        TArray<AActor*> ExcludeListAlways; // 0x8
        TArray<AActor*> ExcludeListOnce; // 0x18
    }; // Size: 0x28
    Params_StartWandLinkEvent params{};
    params.TargetActor = (AActor*)TargetActor;
    params.ExcludeListAlways = (TArray<AActor*>)ExcludeListAlways;
    params.ExcludeListOnce = (TArray<AActor*>)ExcludeListOnce;
    ProcessEvent(func, &params);
}
void UNPC_System::TrackerCallback(AActor* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.TrackerCallback"));
    struct Params_TrackerCallback {
        AActor* ChildObject; // 0x0
    }; // Size: 0x8
    Params_TrackerCallback params{};
    params.ChildObject = (AActor*)ChildObject;
    ProcessEvent(func, &params);
}
void UNPC_System::TerminateAllBossFights() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.TerminateAllBossFights"));
    struct Params_TerminateAllBossFights {
    }; // Size: 0x0
    Params_TerminateAllBossFights params{};
    ProcessEvent(func, &params);
}
void UNPC_System::FollowAttackTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.FollowAttackTimeout"));
    struct Params_FollowAttackTimeout {
    }; // Size: 0x0
    Params_FollowAttackTimeout params{};
    ProcessEvent(func, &params);
}
void UNPC_System::SetToDead(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetToDead"));
    struct Params_SetToDead {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_SetToDead params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
void UNPC_System::AdvanceBossFightSystem(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AdvanceBossFightSystem"));
    struct Params_AdvanceBossFightSystem {
        FName InBossFightName; // 0x0
    }; // Size: 0x8
    Params_AdvanceBossFightSystem params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
}
void UNPC_System::SetCanPerceivePlayerStatic(bool bCanPerceive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetCanPerceivePlayerStatic"));
    struct Params_SetCanPerceivePlayerStatic {
        bool bCanPerceive; // 0x0
    }; // Size: 0x1
    Params_SetCanPerceivePlayerStatic params{};
    params.bCanPerceive = (bool)bCanPerceive;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNPC_System::SelectCycle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SelectCycle"));
    struct Params_SelectCycle {
    }; // Size: 0x0
    Params_SelectCycle params{};
    ProcessEvent(func, &params);
}
void UNPC_System::SetBossFightState(FName InBossFightName, EBossStates InBossState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetBossFightState"));
    struct Params_SetBossFightState {
        FName InBossFightName; // 0x0
        EBossStates InBossState; // 0x8
    }; // Size: 0x9
    Params_SetBossFightState params{};
    params.InBossFightName = (FName)InBossFightName;
    params.InBossState = (EBossStates)InBossState;
    ProcessEvent(func, &params);
}
void UNPC_System::SetBossFightCharacter(FName InBossFightName, AActor* InBossCharacterPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SetBossFightCharacter"));
    struct Params_SetBossFightCharacter {
        FName InBossFightName; // 0x0
        AActor* InBossCharacterPtr; // 0x8
    }; // Size: 0x10
    Params_SetBossFightCharacter params{};
    params.InBossFightName = (FName)InBossFightName;
    params.InBossCharacterPtr = (AActor*)InBossCharacterPtr;
    ProcessEvent(func, &params);
}
void UNPC_System::SendHermesMessageToDOVActors(ADynamicObjectVolume* InDOVPtr, FName InMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.SendHermesMessageToDOVActors"));
    struct Params_SendHermesMessageToDOVActors {
        ADynamicObjectVolume* InDOVPtr; // 0x0
        FName InMessage; // 0x8
    }; // Size: 0x10
    Params_SendHermesMessageToDOVActors params{};
    params.InDOVPtr = (ADynamicObjectVolume*)InDOVPtr;
    params.InMessage = (FName)InMessage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNPC_System::RemoveObject(AActor* ChildObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.RemoveObject"));
    struct Params_RemoveObject {
        AActor* ChildObject; // 0x0
    }; // Size: 0x8
    Params_RemoveObject params{};
    params.ChildObject = (AActor*)ChildObject;
    ProcessEvent(func, &params);
}
void UNPC_System::RemoveNonNPC(AActor* NonNPCPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.RemoveNonNPC"));
    struct Params_RemoveNonNPC {
        AActor* NonNPCPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveNonNPC params{};
    params.NonNPCPtr = (AActor*)NonNPCPtr;
    ProcessEvent(func, &params);
}
EBossStates UNPC_System::GetBossFightState(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetBossFightState"));
    struct Params_GetBossFightState {
        FName InBossFightName; // 0x0
        EBossStates ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetBossFightState params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
    return (EBossStates)params.ReturnValue;
}
void UNPC_System::RemoveFromManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.RemoveFromManager"));
    struct Params_RemoveFromManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveFromManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
void UNPC_System::PostDeath_TimerModeCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.PostDeath_TimerModeCallback"));
    struct Params_PostDeath_TimerModeCallback {
    }; // Size: 0x0
    Params_PostDeath_TimerModeCallback params{};
    ProcessEvent(func, &params);
}
void UNPC_System::PostDeath_CleanupCallback(ANPC_Character* InNPCCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.PostDeath_CleanupCallback"));
    struct Params_PostDeath_CleanupCallback {
        ANPC_Character* InNPCCharacter; // 0x0
    }; // Size: 0x8
    Params_PostDeath_CleanupCallback params{};
    params.InNPCCharacter = (ANPC_Character*)InNPCCharacter;
    ProcessEvent(func, &params);
}
int32_t UNPC_System::ParryLaunchedProjectileStart(FEnemy_ParryWindowSetupData& InSetupData, AActor* InOwner, AActor* InProjectile, float InVelocityMag, float InPostParryVelocityMag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ParryLaunchedProjectileStart"));
    struct Params_ParryLaunchedProjectileStart {
        FEnemy_ParryWindowSetupData InSetupData; // 0x0
        AActor* InOwner; // 0x30
        AActor* InProjectile; // 0x38
        float InVelocityMag; // 0x40
        float InPostParryVelocityMag; // 0x44
        int32_t ReturnValue; // 0x48
    }; // Size: 0x4c
    Params_ParryLaunchedProjectileStart params{};
    params.InSetupData = (FEnemy_ParryWindowSetupData)InSetupData;
    params.InOwner = (AActor*)InOwner;
    params.InProjectile = (AActor*)InProjectile;
    params.InVelocityMag = (float)InVelocityMag;
    params.InPostParryVelocityMag = (float)InPostParryVelocityMag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InSetupData = params.InSetupData;
    return (int32_t)params.ReturnValue;
}
void UNPC_System::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UNPC_System::ParryLaunchedProjectileNotifyMunitionCreated(int32_t InWindowID, AActor* InOwnerPtr, AActor* InTargetPtr, AMunitionType_Base* InMunitionPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ParryLaunchedProjectileNotifyMunitionCreated"));
    struct Params_ParryLaunchedProjectileNotifyMunitionCreated {
        int32_t InWindowID; // 0x0
        char pad_4[0x4];
        AActor* InOwnerPtr; // 0x8
        AActor* InTargetPtr; // 0x10
        AMunitionType_Base* InMunitionPtr; // 0x18
    }; // Size: 0x20
    Params_ParryLaunchedProjectileNotifyMunitionCreated params{};
    params.InWindowID = (int32_t)InWindowID;
    params.InOwnerPtr = (AActor*)InOwnerPtr;
    params.InTargetPtr = (AActor*)InTargetPtr;
    params.InMunitionPtr = (AMunitionType_Base*)InMunitionPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FBossFightData UNPC_System::GetBossFightData(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetBossFightData"));
    struct Params_GetBossFightData {
        FName InBossFightName; // 0x0
        FBossFightData ReturnValue; // 0x8
    }; // Size: 0x2c
    Params_GetBossFightData params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
    return (FBossFightData)params.ReturnValue;
}
void UNPC_System::OnBossDeadEvent(AActor* DeadActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.OnBossDeadEvent"));
    struct Params_OnBossDeadEvent {
        AActor* DeadActor; // 0x0
    }; // Size: 0x8
    Params_OnBossDeadEvent params{};
    params.DeadActor = (AActor*)DeadActor;
    ProcessEvent(func, &params);
}
void UNPC_System::ParryLaunchedProjectileEnd(int32_t InWindowID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ParryLaunchedProjectileEnd"));
    struct Params_ParryLaunchedProjectileEnd {
        int32_t InWindowID; // 0x0
    }; // Size: 0x4
    Params_ParryLaunchedProjectileEnd params{};
    params.InWindowID = (int32_t)InWindowID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNPC_System::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UNPC_System::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UNPC_System::AdvanceBossFight(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AdvanceBossFight"));
    struct Params_AdvanceBossFight {
        FName InBossFightName; // 0x0
    }; // Size: 0x8
    Params_AdvanceBossFight params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
}
bool UNPC_System::AnyNPCLOSPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AnyNPCLOSPlayer"));
    struct Params_AnyNPCLOSPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyNPCLOSPlayer params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_System::OnCurtainLowered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.OnCurtainLowered"));
    struct Params_OnCurtainLowered {
    }; // Size: 0x0
    Params_OnCurtainLowered params{};
    ProcessEvent(func, &params);
}
bool UNPC_System::IsBossFightActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.IsBossFightActive"));
    struct Params_IsBossFightActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBossFightActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_System::KillNPC(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.KillNPC"));
    struct Params_KillNPC {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_KillNPC params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UNPC_System::IsPlayerInCombat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.IsPlayerInCombat"));
    struct Params_IsPlayerInCombat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerInCombat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_System::KilledEvent(AActor* EnemyPtr, AActor* KilledByPtr, bool bKilledByPlayer, bool bPlayCameraCut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.KilledEvent"));
    struct Params_KilledEvent {
        AActor* EnemyPtr; // 0x0
        AActor* KilledByPtr; // 0x8
        bool bKilledByPlayer; // 0x10
        bool bPlayCameraCut; // 0x11
    }; // Size: 0x12
    Params_KilledEvent params{};
    params.EnemyPtr = (AActor*)EnemyPtr;
    params.KilledByPtr = (AActor*)KilledByPtr;
    params.bKilledByPlayer = (bool)bKilledByPlayer;
    params.bPlayCameraCut = (bool)bPlayCameraCut;
    ProcessEvent(func, &params);
}
FAssetTrackerData UNPC_System::GetObjectTracker(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetObjectTracker"));
    struct Params_GetObjectTracker {
        FString ObjectName; // 0x0
        FAssetTrackerData ReturnValue; // 0x10
    }; // Size: 0x88
    Params_GetObjectTracker params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
    return (FAssetTrackerData)params.ReturnValue;
}
void UNPC_System::GetTrackedChildren(AActor* ParentObject, TArray<AActor*>& FoundChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetTrackedChildren"));
    struct Params_GetTrackedChildren {
        AActor* ParentObject; // 0x0
        TArray<AActor*> FoundChildren; // 0x8
    }; // Size: 0x18
    Params_GetTrackedChildren params{};
    params.ParentObject = (AActor*)ParentObject;
    params.FoundChildren = (TArray<AActor*>)FoundChildren;
    ProcessEvent(func, &params);
    FoundChildren = params.FoundChildren;
}
void UNPC_System::GetNPCsByTypeWithinRadius(ENPC_ManagerType ManagerType, FVector& SourceLocation, float Radius, TArray<AActor*>& FoundNPCs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetNPCsByTypeWithinRadius"));
    struct Params_GetNPCsByTypeWithinRadius {
        ENPC_ManagerType ManagerType; // 0x0
        char pad_1[0x3];
        FVector SourceLocation; // 0x4
        float Radius; // 0x10
        char pad_14[0x4];
        TArray<AActor*> FoundNPCs; // 0x18
    }; // Size: 0x28
    Params_GetNPCsByTypeWithinRadius params{};
    params.ManagerType = (ENPC_ManagerType)ManagerType;
    params.SourceLocation = (FVector)SourceLocation;
    params.Radius = (float)Radius;
    params.FoundNPCs = (TArray<AActor*>)FoundNPCs;
    ProcessEvent(func, &params);
    FoundNPCs = params.FoundNPCs;
    SourceLocation = params.SourceLocation;
}
float UNPC_System::GetClosest(AActor* NPCPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetClosest"));
    struct Params_GetClosest {
        AActor* NPCPtr; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetClosest params{};
    params.NPCPtr = (AActor*)NPCPtr;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UNPC_System::GetBossFightNameFromBossCharacter(AActor* BossActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetBossFightNameFromBossCharacter"));
    struct Params_GetBossFightNameFromBossCharacter {
        AActor* BossActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBossFightNameFromBossCharacter params{};
    params.BossActor = (AActor*)BossActor;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UNPC_System::AddNonNPC(AActor* NonNPCPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AddNonNPC"));
    struct Params_AddNonNPC {
        AActor* NonNPCPtr; // 0x0
    }; // Size: 0x8
    Params_AddNonNPC params{};
    params.NonNPCPtr = (AActor*)NonNPCPtr;
    ProcessEvent(func, &params);
}
FName UNPC_System::GetBossFightName(FName BossDbId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetBossFightName"));
    struct Params_GetBossFightName {
        FName BossDbId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBossFightName params{};
    params.BossDbId = (FName)BossDbId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
AActor* UNPC_System::GetBossFightCharacter(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.GetBossFightCharacter"));
    struct Params_GetBossFightCharacter {
        FName InBossFightName; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBossFightCharacter params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UNPC_System::ChangeManager(AActor* InActorPtr, FGameplayTag InNewTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ChangeManager"));
    struct Params_ChangeManager {
        AActor* InActorPtr; // 0x0
        FGameplayTag InNewTag; // 0x8
    }; // Size: 0x10
    Params_ChangeManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    params.InNewTag = (FGameplayTag)InNewTag;
    ProcessEvent(func, &params);
}
void UNPC_System::FinishAvadaKedavraEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.FinishAvadaKedavraEvent"));
    struct Params_FinishAvadaKedavraEvent {
    }; // Size: 0x0
    Params_FinishAvadaKedavraEvent params{};
    ProcessEvent(func, &params);
}
void UNPC_System::EndWandLinkEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.EndWandLinkEvent"));
    struct Params_EndWandLinkEvent {
    }; // Size: 0x0
    Params_EndWandLinkEvent params{};
    ProcessEvent(func, &params);
}
void UNPC_System::EndBossFight(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.EndBossFight"));
    struct Params_EndBossFight {
        FName InBossFightName; // 0x0
    }; // Size: 0x8
    Params_EndBossFight params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
}
void UNPC_System::EnableTargetPerception(AActor* InActorPtr, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.EnableTargetPerception"));
    struct Params_EnableTargetPerception {
        AActor* InActorPtr; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableTargetPerception params{};
    params.InActorPtr = (AActor*)InActorPtr;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UNPC_System::EnableCombat(AActor* InActorPtr, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.EnableCombat"));
    struct Params_EnableCombat {
        AActor* InActorPtr; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableCombat params{};
    params.InActorPtr = (AActor*)InActorPtr;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
bool UNPC_System::AnyNPCAwareOfPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AnyNPCAwareOfPlayer"));
    struct Params_AnyNPCAwareOfPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyNPCAwareOfPlayer params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_System::ClearLoadoutConfigurationContext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.ClearLoadoutConfigurationContext"));
    struct Params_ClearLoadoutConfigurationContext {
    }; // Size: 0x0
    Params_ClearLoadoutConfigurationContext params{};
    ProcessEvent(func, &params);
}
bool UNPC_System::CanPerceivePlayerStatic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.CanPerceivePlayerStatic"));
    struct Params_CanPerceivePlayerStatic {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPerceivePlayerStatic params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNPC_System::AnyNPCAttackingPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AnyNPCAttackingPlayer"));
    struct Params_AnyNPCAttackingPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyNPCAttackingPlayer params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNPC_System::AdvanceBossFightManual(FName InBossFightName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AdvanceBossFightManual"));
    struct Params_AdvanceBossFightManual {
        FName InBossFightName; // 0x0
    }; // Size: 0x8
    Params_AdvanceBossFightManual params{};
    params.InBossFightName = (FName)InBossFightName;
    ProcessEvent(func, &params);
}
void UNPC_System::AddToManager(AActor* InActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_System.AddToManager"));
    struct Params_AddToManager {
        AActor* InActorPtr; // 0x0
    }; // Size: 0x8
    Params_AddToManager params{};
    params.InActorPtr = (AActor*)InActorPtr;
    ProcessEvent(func, &params);
}
