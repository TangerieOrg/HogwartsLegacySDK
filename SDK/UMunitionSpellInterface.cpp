#include "AActor.hpp"
#include "ASpellTool.hpp"
#include "EEnemyShieldBreaker.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMunitionSpellInterface.hpp"
EEnemyShieldBreaker UMunitionSpellInterface::IsEnemyShieldBreaker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.IsEnemyShieldBreaker"));
    struct Params_IsEnemyShieldBreaker {
        EEnemyShieldBreaker ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnemyShieldBreaker params{};
    ProcessEvent(func, &params);
    return (EEnemyShieldBreaker)params.ReturnValue;
}
UMunitionSpellInterface* UMunitionSpellInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionSpellInterface");
    return (UMunitionSpellInterface*)res;
}
void UMunitionSpellInterface::SetPlayerShieldBreaker(bool ShieldBreaker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.SetPlayerShieldBreaker"));
    struct Params_SetPlayerShieldBreaker {
        bool ShieldBreaker; // 0x0
    }; // Size: 0x1
    Params_SetPlayerShieldBreaker params{};
    params.ShieldBreaker = (bool)ShieldBreaker;
    ProcessEvent(func, &params);
}
void UMunitionSpellInterface::SetEnemyShieldBreaker(EEnemyShieldBreaker ShieldBreaker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.SetEnemyShieldBreaker"));
    struct Params_SetEnemyShieldBreaker {
        EEnemyShieldBreaker ShieldBreaker; // 0x0
    }; // Size: 0x1
    Params_SetEnemyShieldBreaker params{};
    params.ShieldBreaker = (EEnemyShieldBreaker)ShieldBreaker;
    ProcessEvent(func, &params);
}
bool UMunitionSpellInterface::IsPlayerShieldBreaker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.IsPlayerShieldBreaker"));
    struct Params_IsPlayerShieldBreaker {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerShieldBreaker params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMunitionSpellInterface::IsUnblockable(AActor* SpellTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.IsUnblockable"));
    struct Params_IsUnblockable {
        AActor* SpellTarget; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsUnblockable params{};
    params.SpellTarget = (AActor*)SpellTarget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ASpellTool* UMunitionSpellInterface::GetSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionSpellInterface.GetSpellTool"));
    struct Params_GetSpellTool {
        ASpellTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellTool params{};
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
