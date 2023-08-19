#include "ABP_ProtegoSpell_C.hpp"
#include "AProtegoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_ProtegoSpell_C* ABP_ProtegoSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Protego/BP_ProtegoSpell.BP_ProtegoSpell_C");
    return (ABP_ProtegoSpell_C*)res;
}
void ABP_ProtegoSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Protego/BP_ProtegoSpell.BP_ProtegoSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ProtegoSpell_C::ExecuteUbergraph_BP_ProtegoSpell(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Protego/BP_ProtegoSpell.BP_ProtegoSpell_C.ExecuteUbergraph_BP_ProtegoSpell"));
    struct Params_ExecuteUbergraph_BP_ProtegoSpell {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_ProtegoSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
