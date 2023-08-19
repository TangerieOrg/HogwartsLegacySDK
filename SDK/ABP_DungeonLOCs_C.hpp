#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELockStates.hpp"
#include "E_AVA_DungeonType\Type.hpp"
#include "E_DungeonEntranceLockTypes\Type.hpp"
#include "FDataTableRowHandle.hpp"
#include "FDatabaseMissionList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
#include "FTransform.hpp"
#include "FVector2D.hpp"
#include "MissionStatus.hpp"
class UChildActorComponent;
class USceneComponent;
struct FHitResult;
class UBoxComponent;
class USphereComponent;
class UScheduler;
class UTargetComponent;
class ABP_DungeonInteract_C;
class UPrimitiveComponent;
class UObject;
#pragma pack(push, 1)
class ABP_DungeonLOCs_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* BP_DungeonLOC_Marker; // 0x250
    USceneComponent* DungeonLocation; // 0x258
    UBoxComponent* EntranceBlocker; // 0x260
    USphereComponent* Sphere; // 0x268
    UChildActorComponent* InteractChildActor; // 0x270
    USceneComponent* SwimmingTransform; // 0x278
    USceneComponent* CairnATransform; // 0x280
    USceneComponent* SanctumTransform; // 0x288
    UChildActorComponent* Parent; // 0x290
    UTargetComponent* Target; // 0x298
    USceneComponent* DefaultSceneRoot; // 0x2a0
    FDataTableRowHandle DungeonNameList; // 0x2a8
    UChildActorComponent* NewVar_2; // 0x2b8
    bool IsExit; // 0x2c0
    E_AVA_DungeonType::Type Dungeon_Type; // 0x2c1
    bool Turn_OFF_Geo; // 0x2c2
    bool Turn_OFF_Marker; // 0x2c3
    char pad_2c4[0x4];
    FString PlayerStartTag; // 0x2c8
    bool TurnOnBeaconDebug; // 0x2d8
    char pad_2d9[0x3];
    int32_t ActivationRange; // 0x2dc
    int32_t EnterExitRange; // 0x2e0
    char pad_2e4[0x54];
    E_DungeonEntranceLockTypes::Type LockType; // 0x338
    bool UseMissionCheck; // 0x339
    char pad_33a[0x2];
    FDatabaseMissionList MissionLock; // 0x33c
    MissionStatus MissionStateRequired; // 0x344
    bool ToggleOpeningCollision; // 0x345
    bool UseStatCheck; // 0x346
    char pad_347[0x1];
    FStatList StatName; // 0x348
    int32_t NeededStatValue; // 0x350
    bool UseLockCheck; // 0x354
    char pad_355[0x3];
    FName LockId; // 0x358
    ELockStates NeededLockState; // 0x360
    char pad_361[0x3];
    FName DungeonName; // 0x364
    char pad_36c[0x2c];
    int32_t EntranceIndex; // 0x398
    char pad_39c[0x4];
    ABP_DungeonInteract_C* InteractActor; // 0x3a0
    bool AlwaysAllowEnter; // 0x3a8
    bool RequireSwitch; // 0x3a9
    bool SwitchActive; // 0x3aa
    bool EnableAudio; // 0x3ab
    char pad_3ac[0x4];
    FString BeaconText; // 0x3b0
    bool UseTimeOfDayCheck; // 0x3c0
    char pad_3c1[0x3];
    FVector2D TimeOfDayRange; // 0x3c4
    bool BlockerCollisionOff; // 0x3cc
    char pad_3cd[0x3];
    float DayOrNight; // 0x3d0
    bool DisableCompanionsOnEnter; // 0x3d4
    bool BeaconOff; // 0x3d5
    char pad_3d6[0x2];
    static ABP_DungeonLOCs_C* StaticClass();
    FName GetUniqueBeaconId(FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Replace_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue);
    void DayNightCheck(bool& CheckPassed, bool LocalCheck, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UScheduler* CallFunc_Get_ReturnValue, bool CallFunc_IsNight_ReturnValue);
    void SetLockState(bool K2Node_SwitchEnum_CmpSuccess);
    void MissionStateCheck(bool& MissionCheckPassed, bool Passed, bool CallFunc_NotEqual_NameName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void LockCheck(bool& LockPassed, ELockStates CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void StatCheck(bool& Load, FName CallFunc_GetStatName_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void UserConstructionScript0(FTransform Temp_struct_Variable, E_AVA_DungeonType::Type Temp_byte_Variable, UChildActorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteLevelLoad();
    void ReceiveBeginPlay0();
    void BP_IFACE_Sanctum_Dungeon_1_Healed();
    void BP_IFACE_Sanctum_Dungeon_1_Destroyed();
    void UpdateInteractCheck();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BP_IFACE_Santum_Dungeon_Entrance_START();
    void SwitchOn(AActor* SwitchActor);
    void AudioCheck();
    void BP_IFACE_Santum_Dungeon_Entrance_END();
    void NTR_02_Updated(UObject* Caller, FName& String);
    void SwitchOff(AActor* SwitchActor);
    void DungeonLocsInteractUpdate(UObject* Caller);
    void ExecuteUbergraph_BP_DungeonLOCs(int32_t EntryPoint, bool CallFunc_AutomationBlocksDungeonLoad_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_StatCheck_Load, bool CallFunc_LockCheck_LockPassed, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, ABP_DungeonInteract_C* K2Node_DynamicCast_AsBP_Dungeon_Interact, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MissionStateCheck_MissionCheckPassed);
}; // Size: 0x3d8
#pragma pack(pop)
