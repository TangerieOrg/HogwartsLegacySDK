#include "AReparoSpellTool.hpp"
#include "ASpellTool.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UObject.hpp"
AReparoSpellTool* AReparoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ReparoSpellTool");
    return (AReparoSpellTool*)res;
}
void AReparoSpellTool::ReparoExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ReparoSpellTool.ReparoExpired"));
    struct Params_ReparoExpired {
    }; // Size: 0x0
    Params_ReparoExpired params{};
    ProcessEvent(func, &params);
}
void AReparoSpellTool::ARepairComplete(UActorComponent* Comp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ReparoSpellTool.ARepairComplete"));
    struct Params_ARepairComplete {
        UActorComponent* Comp; // 0x0
    }; // Size: 0x8
    Params_ARepairComplete params{};
    params.Comp = (UActorComponent*)Comp;
    ProcessEvent(func, &params);
}
void AReparoSpellTool::ReparoCancel(UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ReparoSpellTool.ReparoCancel"));
    struct Params_ReparoCancel {
        UObject* InInstigator; // 0x0
    }; // Size: 0x8
    Params_ReparoCancel params{};
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AReparoSpellTool::DisableReparoAOE(bool Disable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ReparoSpellTool.DisableReparoAOE"));
    struct Params_DisableReparoAOE {
        bool Disable; // 0x0
    }; // Size: 0x1
    Params_DisableReparoAOE params{};
    params.Disable = (bool)Disable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
