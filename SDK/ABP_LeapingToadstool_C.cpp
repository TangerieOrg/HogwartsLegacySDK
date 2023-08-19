#include "AActor.hpp"
#include "ABP_Foragable_C.hpp"
#include "ABP_LeapingToadstool_C.hpp"
#include "EForageableState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABP_Foragable_Leaping_Toadstools_C.hpp"
#include "UAkComponent.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
bool ABP_LeapingToadstool_C::ResetState(EForageableState NextState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ResetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Foragable_Leaping_Toadstools_C* K2Node_DynamicCast_AsABP_Foragable_Leaping_Toadstools, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ResetState_ReturnValue_1, bool CallFunc_ResetState_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.ResetState"));
    struct Params_ResetState {
        EForageableState NextState; // 0x0
        bool ReturnValue; // 0x1
        bool K2Node_SwitchEnum_CmpSuccess; // 0x2
        bool CallFunc_ResetState_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x6
        char pad_7[0x1];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x8
        UABP_Foragable_Leaping_Toadstools_C* K2Node_DynamicCast_AsABP_Foragable_Leaping_Toadstools; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_ResetState_ReturnValue_1; // 0x19
        bool CallFunc_ResetState_ReturnValue_2; // 0x1a
    }; // Size: 0x1b
    Params_ResetState params{};
    params.NextState = (EForageableState)NextState;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_ResetState_ReturnValue = (bool)CallFunc_ResetState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Foragable_Leaping_Toadstools = (UABP_Foragable_Leaping_Toadstools_C*)K2Node_DynamicCast_AsABP_Foragable_Leaping_Toadstools;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_ResetState_ReturnValue_1 = (bool)CallFunc_ResetState_ReturnValue_1;
    params.CallFunc_ResetState_ReturnValue_2 = (bool)CallFunc_ResetState_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ABP_LeapingToadstool_C* ABP_LeapingToadstool_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C");
    return (ABP_LeapingToadstool_C*)res;
}
void ABP_LeapingToadstool_C::OnPickedUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.OnPickedUp"));
    struct Params_OnPickedUp {
    }; // Size: 0x0
    Params_OnPickedUp params{};
    ProcessEvent(func, &params);
}
void ABP_LeapingToadstool_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_LeapingToadstool_C::BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_LeapingToadstool_C::BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_LeapingToadstool_C::SpawnRigidBodies(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeapingToadstool.BP_LeapingToadstool_C.SpawnRigidBodies"));
    struct Params_SpawnRigidBodies {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SpawnRigidBodies params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_LeapingToadstool_C::ExecuteUbergraph_BP_LeapingToadstool(int32_t EntryPoint, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
