#include "AAccioSpellTool.hpp"
#include "ABP_AccioSpell_C.hpp"
#include "ASpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "USceneComponent.hpp"
ABP_AccioSpell_C* ABP_AccioSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Accio/BP_AccioSpell.BP_AccioSpell_C");
    return (ABP_AccioSpell_C*)res;
}
void ABP_AccioSpell_C::ExecuteUbergraph_BP_AccioSpell(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Accio/BP_AccioSpell.BP_AccioSpell_C.ExecuteUbergraph_BP_AccioSpell"));
    struct Params_ExecuteUbergraph_BP_AccioSpell {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_AccioSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_AccioSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Accio/BP_AccioSpell.BP_AccioSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
