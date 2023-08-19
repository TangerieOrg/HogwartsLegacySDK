#include "ABP_Shell_Accio_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_AccioImpact_C.hpp"
#include "UFunction.hpp"
#include "USpellImpactComponent.hpp"
void UBP_AccioImpact_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/MunitionImpact/BP_AccioImpact.BP_AccioImpact_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
UBP_AccioImpact_C* UBP_AccioImpact_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/MunitionImpact/BP_AccioImpact.BP_AccioImpact_C");
    return (UBP_AccioImpact_C*)res;
}
void UBP_AccioImpact_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/MunitionImpact/BP_AccioImpact.BP_AccioImpact_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void UBP_AccioImpact_C::ExecuteUbergraph_BP_AccioImpact(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable) {}
