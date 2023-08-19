#include "AActor.hpp"
#include "ABP_DungeonInteract_C.hpp"
#include "ABP_DungeonLOCs_C.hpp"
#include "ELockStates.hpp"
#include "E_AVA_DungeonType\Type.hpp"
#include "E_DungeonEntranceLockTypes\Type.hpp"
#include "FDataTableRowHandle.hpp"
#include "FDatabaseMissionList.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
#include "FTransform.hpp"
#include "FVector2D.hpp"
#include "MissionStatus.hpp"
#include "UBoxComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UScheduler.hpp"
#include "USphereComponent.hpp"
#include "UTargetComponent.hpp"
void ABP_DungeonLOCs_C::MissionStateCheck(bool& MissionCheckPassed, bool Passed, bool CallFunc_NotEqual_NameName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.MissionStateCheck"));
    struct Params_MissionStateCheck {
        bool MissionCheckPassed; // 0x0
        bool Passed; // 0x1
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x2
        MissionStatus CallFunc_GetMissionStatusBP_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5
        bool CallFunc_BooleanOR_ReturnValue; // 0x6
    }; // Size: 0x7
    Params_MissionStateCheck params{};
    params.MissionCheckPassed = (bool)MissionCheckPassed;
    params.Passed = (bool)Passed;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_GetMissionStatusBP_ReturnValue = (MissionStatus)CallFunc_GetMissionStatusBP_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    MissionCheckPassed = params.MissionCheckPassed;
}
ABP_DungeonLOCs_C* ABP_DungeonLOCs_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C");
    return (ABP_DungeonLOCs_C*)res;
}
FName ABP_DungeonLOCs_C::GetUniqueBeaconId(FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Replace_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.GetUniqueBeaconId"));
    struct Params_GetUniqueBeaconId {
        FName ReturnValue; // 0x0
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x18
        FString CallFunc_Replace_ReturnValue; // 0x28
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x38
        FString CallFunc_SelectString_ReturnValue; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x58
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x68
    }; // Size: 0x70
    Params_GetUniqueBeaconId params{};
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Replace_ReturnValue = (FString)CallFunc_Replace_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_DungeonLOCs_C::DayNightCheck(bool& CheckPassed, bool LocalCheck, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UScheduler* CallFunc_Get_ReturnValue, bool CallFunc_IsNight_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.DayNightCheck"));
    struct Params_DayNightCheck {
        bool CheckPassed; // 0x0
        bool LocalCheck; // 0x1
        MissionStatus CallFunc_GetMissionStatusBP_ReturnValue; // 0x2
        bool K2Node_SwitchEnum_CmpSuccess; // 0x3
        char pad_4[0x4];
        UScheduler* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_IsNight_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DayNightCheck params{};
    params.CheckPassed = (bool)CheckPassed;
    params.LocalCheck = (bool)LocalCheck;
    params.CallFunc_GetMissionStatusBP_ReturnValue = (MissionStatus)CallFunc_GetMissionStatusBP_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsNight_ReturnValue = (bool)CallFunc_IsNight_ReturnValue;
    ProcessEvent(func, &params);
    CheckPassed = params.CheckPassed;
}
void ABP_DungeonLOCs_C::UserConstructionScript0(FTransform Temp_struct_Variable, E_AVA_DungeonType::Type Temp_byte_Variable, UChildActorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue) {}
void ABP_DungeonLOCs_C::NTR_02_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.NTR_02_Updated"));
    struct Params_NTR_02_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_NTR_02_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void ABP_DungeonLOCs_C::SetLockState(bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.SetLockState"));
    struct Params_SetLockState {
        bool K2Node_SwitchEnum_CmpSuccess; // 0x0
    }; // Size: 0x1
    Params_SetLockState params{};
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::DungeonLocsInteractUpdate(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.DungeonLocsInteractUpdate"));
    struct Params_DungeonLocsInteractUpdate {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DungeonLocsInteractUpdate params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::AudioCheck() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.AudioCheck"));
    struct Params_AudioCheck {
    }; // Size: 0x0
    Params_AudioCheck params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::LockCheck(bool& LockPassed, ELockStates CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.LockCheck"));
    struct Params_LockCheck {
        bool LockPassed; // 0x0
        ELockStates CallFunc_GetState_ReturnValue; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_LockCheck params{};
    params.LockPassed = (bool)LockPassed;
    params.CallFunc_GetState_ReturnValue = (ELockStates)CallFunc_GetState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    LockPassed = params.LockPassed;
}
void ABP_DungeonLOCs_C::StatCheck(bool& Load, FName CallFunc_GetStatName_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.StatCheck"));
    struct Params_StatCheck {
        bool Load; // 0x0
        char pad_1[0x3];
        FName CallFunc_GetStatName_ReturnValue; // 0x4
        int32_t CallFunc_ReadStat_ReturnValue; // 0xc
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_StatCheck params{};
    params.Load = (bool)Load;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.CallFunc_ReadStat_ReturnValue = (int32_t)CallFunc_ReadStat_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Load = params.Load;
}
void ABP_DungeonLOCs_C::BP_IFACE_Santum_Dungeon_Entrance_START() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Santum_Dungeon_Entrance_START"));
    struct Params_BP_IFACE_Santum_Dungeon_Entrance_START {
    }; // Size: 0x0
    Params_BP_IFACE_Santum_Dungeon_Entrance_START params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::ExecuteLevelLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.ExecuteLevelLoad"));
    struct Params_ExecuteLevelLoad {
    }; // Size: 0x0
    Params_ExecuteLevelLoad params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_DungeonLOCs_C::BP_IFACE_Sanctum_Dungeon_1_Healed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Sanctum_Dungeon_1_Healed"));
    struct Params_BP_IFACE_Sanctum_Dungeon_1_Healed {
    }; // Size: 0x0
    Params_BP_IFACE_Sanctum_Dungeon_1_Healed params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::BP_IFACE_Sanctum_Dungeon_1_Destroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Sanctum_Dungeon_1_Destroyed"));
    struct Params_BP_IFACE_Sanctum_Dungeon_1_Destroyed {
    }; // Size: 0x0
    Params_BP_IFACE_Sanctum_Dungeon_1_Destroyed params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::UpdateInteractCheck() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.UpdateInteractCheck"));
    struct Params_UpdateInteractCheck {
    }; // Size: 0x0
    Params_UpdateInteractCheck params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::BP_IFACE_Santum_Dungeon_Entrance_END() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.BP_IFACE_Santum_Dungeon_Entrance_END"));
    struct Params_BP_IFACE_Santum_Dungeon_Entrance_END {
    }; // Size: 0x0
    Params_BP_IFACE_Santum_Dungeon_Entrance_END params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonLOCs.BP_DungeonLOCs_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_DungeonLOCs_C::ExecuteUbergraph_BP_DungeonLOCs(int32_t EntryPoint, bool CallFunc_AutomationBlocksDungeonLoad_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_StatCheck_Load, bool CallFunc_LockCheck_LockPassed, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, ABP_DungeonInteract_C* K2Node_DynamicCast_AsBP_Dungeon_Interact, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MissionStateCheck_MissionCheckPassed) {}
