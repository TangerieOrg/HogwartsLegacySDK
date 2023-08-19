#include "EAlohomoraLevel.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "ULockableManager.hpp"
#include "UObject.hpp"
void ULockableManager::LockablesSuperAlohomora(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.LockablesSuperAlohomora"));
    struct Params_LockablesSuperAlohomora {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_LockablesSuperAlohomora params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void ULockableManager::OnPostGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.OnPostGameLoad"));
    struct Params_OnPostGameLoad {
    }; // Size: 0x0
    Params_OnPostGameLoad params{};
    ProcessEvent(func, &params);
}
ULockableManager* ULockableManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockableManager");
    return (ULockableManager*)res;
}
void ULockableManager::LockablesDrawDebugInfo(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.LockablesDrawDebugInfo"));
    struct Params_LockablesDrawDebugInfo {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_LockablesDrawDebugInfo params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void ULockableManager::OnPreGameSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.OnPreGameSave"));
    struct Params_OnPreGameSave {
    }; // Size: 0x0
    Params_OnPreGameSave params{};
    ProcessEvent(func, &params);
}
void ULockableManager::LockablesSetAlohomora(EAlohomoraLevel AlohomoraLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.LockablesSetAlohomora"));
    struct Params_LockablesSetAlohomora {
        EAlohomoraLevel AlohomoraLevel; // 0x0
    }; // Size: 0x1
    Params_LockablesSetAlohomora params{};
    params.AlohomoraLevel = (EAlohomoraLevel)AlohomoraLevel;
    ProcessEvent(func, &params);
}
void ULockableManager::LockablesMasterKey(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.LockablesMasterKey"));
    struct Params_LockablesMasterKey {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_LockablesMasterKey params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void ULockableManager::LockablesMarkLocks(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableManager.LockablesMarkLocks"));
    struct Params_LockablesMarkLocks {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_LockablesMarkLocks params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
