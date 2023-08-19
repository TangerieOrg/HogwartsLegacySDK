#include "ABP_Foragable_C.hpp"
#include "ABP_LeechForagable_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EForageableState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABP_Leech_C.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
ABP_LeechForagable_C* ABP_LeechForagable_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeechForagable.BP_LeechForagable_C");
    return (ABP_LeechForagable_C*)res;
}
bool ABP_LeechForagable_C::ResetState(EForageableState NextState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ResetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_ResetState_ReturnValue_1, bool CallFunc_ResetState_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeechForagable.BP_LeechForagable_C.ResetState"));
    struct Params_ResetState {
        EForageableState NextState; // 0x0
        bool ReturnValue; // 0x1
        bool K2Node_SwitchEnum_CmpSuccess; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_ResetState_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x6
        bool CallFunc_ResetState_ReturnValue_1; // 0x7
        bool CallFunc_ResetState_ReturnValue_2; // 0x8
    }; // Size: 0x9
    Params_ResetState params{};
    params.NextState = (EForageableState)NextState;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_ResetState_ReturnValue = (bool)CallFunc_ResetState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_ResetState_ReturnValue_1 = (bool)CallFunc_ResetState_ReturnValue_1;
    params.CallFunc_ResetState_ReturnValue_2 = (bool)CallFunc_ResetState_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_LeechForagable_C::ExecuteUbergraph_BP_LeechForagable(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_LeechForagable_C::OnPickedUp0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeechForagable.BP_LeechForagable_C.OnPickedUp"));
    struct Params_OnPickedUp {
    }; // Size: 0x0
    Params_OnPickedUp params{};
    ProcessEvent(func, &params);
}
void ABP_LeechForagable_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeechForagable.BP_LeechForagable_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_LeechForagable_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_LeechForagable.BP_LeechForagable_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
