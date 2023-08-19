#include "AActor.hpp"
#include "ABP_DH_Item_C.hpp"
#include "ABiped_Player.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_DH_Item_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_DH_Item_C* ABP_DH_Item_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C");
    return (ABP_DH_Item_C*)res;
}
void ABP_DH_Item_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::FOFF() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.FOFF"));
    struct Params_FOFF {
    }; // Size: 0x0
    Params_FOFF params{};
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::ShowItem() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.ShowItem"));
    struct Params_ShowItem {
    }; // Size: 0x0
    Params_ShowItem params{};
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::HideItem() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.HideItem"));
    struct Params_HideItem {
    }; // Size: 0x0
    Params_HideItem params{};
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/DeathlyHallows_Dungeon/Working/Blueprints/BP_DH_Item.BP_DH_Item_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_DH_Item_C::ExecuteUbergraph_BP_DH_Item(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, UObject* K2Node_CustomEvent_Caller, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, float CallFunc_DegSin_ReturnValue) {}
