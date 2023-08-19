#include "ABP_StupefySpell_C.hpp"
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTutorialSystem.hpp"
ABP_StupefySpell_C* ABP_StupefySpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpell.BP_StupefySpell_C");
    return (ABP_StupefySpell_C*)res;
}
void ABP_StupefySpell_C::OnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpell.BP_StupefySpell_C.OnStart"));
    struct Params_OnStart {
    }; // Size: 0x0
    Params_OnStart params{};
    ProcessEvent(func, &params);
}
void ABP_StupefySpell_C::ExecuteUbergraph_BP_StupefySpell(int32_t EntryPoint, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpell.BP_StupefySpell_C.ExecuteUbergraph_BP_StupefySpell"));
    struct Params_ExecuteUbergraph_BP_StupefySpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_CompleteTutorialStepByAlias_ReturnValue; // 0x10
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ExecuteUbergraph_BP_StupefySpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_CompleteTutorialStepByAlias_ReturnValue = (bool)CallFunc_CompleteTutorialStepByAlias_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    ProcessEvent(func, &params);
}
