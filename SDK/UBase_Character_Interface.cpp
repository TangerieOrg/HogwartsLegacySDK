#include "UBase_Character_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
void UBase_Character_Interface::OnEnableFullRagdoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character_Interface.OnEnableFullRagdoll"));
    struct Params_OnEnableFullRagdoll {
    }; // Size: 0x0
    Params_OnEnableFullRagdoll params{};
    ProcessEvent(func, &params);
}
UBase_Character_Interface* UBase_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Base_Character_Interface");
    return (UBase_Character_Interface*)res;
}
void UBase_Character_Interface::OnUnFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character_Interface.OnUnFreeze"));
    struct Params_OnUnFreeze {
    }; // Size: 0x0
    Params_OnUnFreeze params{};
    ProcessEvent(func, &params);
}
void UBase_Character_Interface::OnResetFullRagdoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character_Interface.OnResetFullRagdoll"));
    struct Params_OnResetFullRagdoll {
    }; // Size: 0x0
    Params_OnResetFullRagdoll params{};
    ProcessEvent(func, &params);
}
void UBase_Character_Interface::OnFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character_Interface.OnFreeze"));
    struct Params_OnFreeze {
    }; // Size: 0x0
    Params_OnFreeze params{};
    ProcessEvent(func, &params);
}
void UBase_Character_Interface::OnAboutToDie() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character_Interface.OnAboutToDie"));
    struct Params_OnAboutToDie {
    }; // Size: 0x0
    Params_OnAboutToDie params{};
    ProcessEvent(func, &params);
}
