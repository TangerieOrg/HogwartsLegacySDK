#include "AFireOnceSpellTool.hpp"
#include "AReparoMaximaSpellTool.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
AReparoMaximaSpellTool* AReparoMaximaSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ReparoMaximaSpellTool");
    return (AReparoMaximaSpellTool*)res;
}
void AReparoMaximaSpellTool::ARepairComplete(UActorComponent* Comp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ReparoMaximaSpellTool.ARepairComplete"));
    struct Params_ARepairComplete {
        UActorComponent* Comp; // 0x0
    }; // Size: 0x8
    Params_ARepairComplete params{};
    params.Comp = (UActorComponent*)Comp;
    ProcessEvent(func, &params);
}
