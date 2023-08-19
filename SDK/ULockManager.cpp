#include "FDatabaseLockList.hpp"
#include "UFunction.hpp"
#include "ULockManager.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
ULockManager* ULockManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockManager");
    return (ULockManager*)res;
}
void ULockManager::OnSaveLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManager.OnSaveLoad"));
    struct Params_OnSaveLoad {
    }; // Size: 0x0
    Params_OnSaveLoad params{};
    ProcessEvent(func, &params);
}
void ULockManager::OnPreNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManager.OnPreNewGame"));
    struct Params_OnPreNewGame {
    }; // Size: 0x0
    Params_OnPreNewGame params{};
    ProcessEvent(func, &params);
}
void ULockManager::OnPreSaveLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManager.OnPreSaveLoad"));
    struct Params_OnPreSaveLoad {
    }; // Size: 0x0
    Params_OnPreSaveLoad params{};
    ProcessEvent(func, &params);
}
void ULockManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
FName ULockManager::GetLockName(FDatabaseLockList DatabaseLockList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManager.GetLockName"));
    struct Params_GetLockName {
        FDatabaseLockList DatabaseLockList; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLockName params{};
    params.DatabaseLockList = (FDatabaseLockList)DatabaseLockList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
