#include "ABP_Foragable_C.hpp"
#include "AForagable.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Foragable_C::ObjectPickedUp(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.ObjectPickedUp"));
    struct Params_ObjectPickedUp {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ObjectPickedUp params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
int32_t ABP_Foragable_C::GetItemCount0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.GetItemCount"));
    struct Params_GetItemCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetItemCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
ABP_Foragable_C* ABP_Foragable_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C");
    return (ABP_Foragable_C*)res;
}
FName ABP_Foragable_C::GetItemID0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.GetItemID"));
    struct Params_GetItemID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetItemID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_Foragable_C::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void ABP_Foragable_C::AddToInventory(bool& Success, int32_t CallFunc_CanAddItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.AddToInventory"));
    struct Params_AddToInventory {
        bool Success; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_CanAddItem_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_AdjustCount_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_AddToInventory params{};
    params.Success = (bool)Success;
    params.CallFunc_CanAddItem_ReturnValue = (int32_t)CallFunc_CanAddItem_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_AdjustCount_ReturnValue = (int32_t)CallFunc_AdjustCount_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void ABP_Foragable_C::OnPickedUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.OnPickedUp"));
    struct Params_OnPickedUp {
    }; // Size: 0x0
    Params_OnPickedUp params{};
    ProcessEvent(func, &params);
}
void ABP_Foragable_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Foragable_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Foragable_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Foragable.BP_Foragable_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Foragable_C::ExecuteUbergraph_BP_Foragable(int32_t EntryPoint) {}
