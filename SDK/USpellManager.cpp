#include "UFunction.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "USpellManager.hpp"
USpellManager* USpellManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellManager");
    return (USpellManager*)res;
}
void USpellManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
