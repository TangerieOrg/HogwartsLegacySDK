#include "AFireOnceSpellTool.hpp"
#include "AImperiusSpellTool.hpp"
#include "UFunction.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UMultiFX2_Base.hpp"
#include "UStateEffectComponent.hpp"
AImperiusSpellTool* AImperiusSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ImperiusSpellTool");
    return (AImperiusSpellTool*)res;
}
void AImperiusSpellTool::DoSpellComponentSetup(UStateEffectComponent* StateEffectComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImperiusSpellTool.DoSpellComponentSetup"));
    struct Params_DoSpellComponentSetup {
        UStateEffectComponent* StateEffectComponent; // 0x0
    }; // Size: 0x8
    Params_DoSpellComponentSetup params{};
    params.StateEffectComponent = (UStateEffectComponent*)StateEffectComponent;
    ProcessEvent(func, &params);
}
