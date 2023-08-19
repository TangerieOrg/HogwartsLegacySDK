#include "ABP_EnemyDrop_DugbogPellet_C.hpp"
#include "ABiped_Player.hpp"
#include "AInventoryObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
ABP_EnemyDrop_DugbogPellet_C* ABP_EnemyDrop_DugbogPellet_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C");
    return (ABP_EnemyDrop_DugbogPellet_C*)res;
}
void ABP_EnemyDrop_DugbogPellet_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::NotifyPickedUp0(FName ItemId, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.NotifyPickedUp"));
    struct Params_NotifyPickedUp {
        FName ItemId; // 0x0
        int32_t ItemCount; // 0x8
    }; // Size: 0xc
    Params_NotifyPickedUp params{};
    params.ItemId = (FName)ItemId;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::ShowNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.ShowNonCinematicElements"));
    struct Params_ShowNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::HideNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/EnemyDrops/Blueprints/BP_EnemyDrop_DugbogPellet.BP_EnemyDrop_DugbogPellet_C.HideNonCinematicElements"));
    struct Params_HideNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_EnemyDrop_DugbogPellet_C::ExecuteUbergraph_BP_EnemyDrop_DugbogPellet(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
