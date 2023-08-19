#include "ABP_InventoryObject_C.hpp"
#include "AInventoryObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_InventoryObject_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_InventoryObject_C* ABP_InventoryObject_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C");
    return (ABP_InventoryObject_C*)res;
}
void ABP_InventoryObject_C::NewFunction_0(bool NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C.NewFunction_0"));
    struct Params_NewFunction_0 {
        bool NewParam; // 0x0
    }; // Size: 0x1
    Params_NewFunction_0 params{};
    params.NewParam = (bool)NewParam;
    ProcessEvent(func, &params);
}
void ABP_InventoryObject_C::NotifyPickedUp0(FName ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C.NotifyPickedUp"));
    struct Params_NotifyPickedUp {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
    }; // Size: 0xc
    Params_NotifyPickedUp params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void ABP_InventoryObject_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_InventoryObject_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_InventoryObject.BP_InventoryObject_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_InventoryObject_C::ExecuteUbergraph_BP_InventoryObject(int32_t EntryPoint) {}
