#include "AActor.hpp"
#include "ABP_StealthTakedownInteractActor_C.hpp"
#include "ABiped_Player.hpp"
#include "AEnemy_Character.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
ABP_StealthTakedownInteractActor_C* ABP_StealthTakedownInteractActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C");
    return (ABP_StealthTakedownInteractActor_C*)res;
}
void ABP_StealthTakedownInteractActor_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownInteractActor_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownInteractActor_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownInteractActor_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownInteractActor_C::ExecuteUbergraph_BP_StealthTakedownInteractActor(int32_t EntryPoint, float K2Node_Event_DeltaSeconds, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason) {}
void ABP_StealthTakedownInteractActor_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_StealthTakedownInteractActor.BP_StealthTakedownInteractActor_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
