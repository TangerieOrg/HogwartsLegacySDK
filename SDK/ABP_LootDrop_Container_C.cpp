#include "ABP_LootDrop_Container_C.hpp"
#include "AWorldObject.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_LootDrop_Container_C* ABP_LootDrop_Container_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C");
    return (ABP_LootDrop_Container_C*)res;
}
UNiagaraComponent* ABP_LootDrop_Container_C::SpawnBeacon(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation, FName Temp_name_Variable, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.SpawnBeacon"));
    struct Params_SpawnBeacon {
        USceneComponent* AttachToComponent; // 0x0
        FVector Location; // 0x8
        FRotator Rotation; // 0x14
        UNiagaraComponent* ReturnValue; // 0x20
        FName Temp_name_Variable; // 0x28
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue; // 0x30
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1; // 0x38
        bool CallFunc_Array_Contains_ReturnValue; // 0x40
    }; // Size: 0x41
    Params_SpawnBeacon params{};
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_SpawnSystemAttached_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue;
    params.CallFunc_SpawnSystemAttached_ReturnValue_1 = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
void ABP_LootDrop_Container_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::ShowNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.ShowNonCinematicElements"));
    struct Params_ShowNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature"));
    struct Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::HideNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.HideNonCinematicElements"));
    struct Params_HideNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_LootDrop_Container_C::ExecuteUbergraph_BP_LootDrop_Container(int32_t EntryPoint) {}
void ABP_LootDrop_Container_C::onBagEmpty__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_LootDrop_Container.BP_LootDrop_Container_C.onBagEmpty__DelegateSignature"));
    struct Params_onBagEmpty__DelegateSignature {
    }; // Size: 0x0
    Params_onBagEmpty__DelegateSignature params{};
    ProcessEvent(func, &params);
}
