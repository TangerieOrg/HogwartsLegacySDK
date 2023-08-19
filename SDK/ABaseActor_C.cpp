#include "AActor.hpp"
#include "ABaseActor_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABaseActor_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/BaseActor.BaseActor_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABaseActor_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/BaseActor.BaseActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABaseActor_C* ABaseActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/CPP/BaseActor.BaseActor_C");
    return (ABaseActor_C*)res;
}
void ABaseActor_C::ExecuteUbergraph_BaseActor(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/BaseActor.BaseActor_C.ExecuteUbergraph_BaseActor"));
    struct Params_ExecuteUbergraph_BaseActor {
        int32_t EntryPoint; // 0x0
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BaseActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
