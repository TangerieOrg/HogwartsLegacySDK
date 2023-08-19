#include "ABP_SubSonic_StupefyPopup_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
ABP_SubSonic_StupefyPopup_C* ABP_SubSonic_StupefyPopup_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup.BP_SubSonic_StupefyPopup_C");
    return (ABP_SubSonic_StupefyPopup_C*)res;
}
void ABP_SubSonic_StupefyPopup_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup.BP_SubSonic_StupefyPopup_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_StupefyPopup_C::ExecuteUbergraph_BP_SubSonic_StupefyPopup(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup.BP_SubSonic_StupefyPopup_C.ExecuteUbergraph_BP_SubSonic_StupefyPopup"));
    struct Params_ExecuteUbergraph_BP_SubSonic_StupefyPopup {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_SubSonic_StupefyPopup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
