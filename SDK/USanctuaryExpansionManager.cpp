#include "UFunction.hpp"
#include "UObject.hpp"
#include "USanctuaryExpansionManager.hpp"
bool USanctuaryExpansionManager::IsExpansionLoaded(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.IsExpansionLoaded"));
    struct Params_IsExpansionLoaded {
        FName InExpansionLockID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsExpansionLoaded params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USanctuaryExpansionManager::ShouldSkipUnlockCinematics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.ShouldSkipUnlockCinematics"));
    struct Params_ShouldSkipUnlockCinematics {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldSkipUnlockCinematics params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USanctuaryExpansionManager* USanctuaryExpansionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryExpansionManager");
    return (USanctuaryExpansionManager*)res;
}
void USanctuaryExpansionManager::TriggerExpansion(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.TriggerExpansion"));
    struct Params_TriggerExpansion {
        FName InExpansionLockID; // 0x0
    }; // Size: 0x8
    Params_TriggerExpansion params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
}
void USanctuaryExpansionManager::ReleaseExpansion(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.ReleaseExpansion"));
    struct Params_ReleaseExpansion {
        FName InExpansionLockID; // 0x0
    }; // Size: 0x8
    Params_ReleaseExpansion params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
}
void USanctuaryExpansionManager::LoadExpansion(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.LoadExpansion"));
    struct Params_LoadExpansion {
        FName InExpansionLockID; // 0x0
    }; // Size: 0x8
    Params_LoadExpansion params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
}
bool USanctuaryExpansionManager::IsValidExpansion(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.IsValidExpansion"));
    struct Params_IsValidExpansion {
        FName InExpansionLockID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValidExpansion params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USanctuaryExpansionManager::IsExpansionOpen(FName InExpansionLockID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryExpansionManager.IsExpansionOpen"));
    struct Params_IsExpansionOpen {
        FName InExpansionLockID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsExpansionOpen params{};
    params.InExpansionLockID = (FName)InExpansionLockID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
