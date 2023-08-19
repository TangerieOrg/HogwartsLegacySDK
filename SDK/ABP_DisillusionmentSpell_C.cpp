#include "AActor.hpp"
#include "ABP_DisillusionmentSpell_C.hpp"
#include "ABP_StealthTakedownSpell_C.hpp"
#include "ADisillusionmentSpellTool.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_DisillusionmentSpell_C* ABP_DisillusionmentSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Disillusionment/BP_DisillusionmentSpell.BP_DisillusionmentSpell_C");
    return (ABP_DisillusionmentSpell_C*)res;
}
void ABP_DisillusionmentSpell_C::OnDisillusionmentEnd0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Disillusionment/BP_DisillusionmentSpell.BP_DisillusionmentSpell_C.OnDisillusionmentEnd"));
    struct Params_OnDisillusionmentEnd {
    }; // Size: 0x0
    Params_OnDisillusionmentEnd params{};
    ProcessEvent(func, &params);
}
void ABP_DisillusionmentSpell_C::OnDisillusionmentStart0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Disillusionment/BP_DisillusionmentSpell.BP_DisillusionmentSpell_C.OnDisillusionmentStart"));
    struct Params_OnDisillusionmentStart {
    }; // Size: 0x0
    Params_OnDisillusionmentStart params{};
    ProcessEvent(func, &params);
}
void ABP_DisillusionmentSpell_C::ExecuteUbergraph_BP_DisillusionmentSpell(int32_t EntryPoint, AActor* CallFunc_GetUltimateOwner_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
