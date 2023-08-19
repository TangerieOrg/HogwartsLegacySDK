#include "AActor.hpp"
#include "ABP_FleePoint_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_FleePoint_C::ExecuteUbergraph_BP_FleePoint(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Evil/BP_FleePoint.BP_FleePoint_C.ExecuteUbergraph_BP_FleePoint"));
    struct Params_ExecuteUbergraph_BP_FleePoint {
        int32_t EntryPoint; // 0x0
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BP_FleePoint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
ABP_FleePoint_C* ABP_FleePoint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Evil/BP_FleePoint.BP_FleePoint_C");
    return (ABP_FleePoint_C*)res;
}
void ABP_FleePoint_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Evil/BP_FleePoint.BP_FleePoint_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_FleePoint_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Evil/BP_FleePoint.BP_FleePoint_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
