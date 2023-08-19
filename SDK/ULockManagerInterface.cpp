#include "ELockStates.hpp"
#include "EMinimalLockState.hpp"
#include "UFunction.hpp"
#include "ULockManagerInterface.hpp"
#include "UObject.hpp"
ULockManagerInterface* ULockManagerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockManagerInterface");
    return (ULockManagerInterface*)res;
}
bool ULockManagerInterface::IsUnlocked(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.IsUnlocked"));
    struct Params_IsUnlocked {
        FName LockId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsUnlocked params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULockManagerInterface::Unlock(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.Unlock"));
    struct Params_Unlock {
        FName LockId; // 0x0
    }; // Size: 0x8
    Params_Unlock params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ULockManagerInterface::IsLocked(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.IsLocked"));
    struct Params_IsLocked {
        FName LockId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocked params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULockManagerInterface::SetLock(FName LockId, ELockStates NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.SetLock"));
    struct Params_SetLock {
        FName LockId; // 0x0
        ELockStates NewState; // 0x8
    }; // Size: 0x9
    Params_SetLock params{};
    params.LockId = (FName)LockId;
    params.NewState = (ELockStates)NewState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool ULockManagerInterface::IsLockedPure(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.IsLockedPure"));
    struct Params_IsLockedPure {
        FName LockId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLockedPure params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULockManagerInterface::IsUnlockedPure(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.IsUnlockedPure"));
    struct Params_IsUnlockedPure {
        FName LockId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsUnlockedPure params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULockManagerInterface::Lock(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.Lock"));
    struct Params_Lock {
        FName LockId; // 0x0
    }; // Size: 0x8
    Params_Lock params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ELockStates ULockManagerInterface::GetState(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.GetState"));
    struct Params_GetState {
        FName LockId; // 0x0
        ELockStates ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetState params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ELockStates)params.ReturnValue;
}
void ULockManagerInterface::BranchState(FName LockId, EMinimalLockState& LockState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockManagerInterface.BranchState"));
    struct Params_BranchState {
        FName LockId; // 0x0
        EMinimalLockState LockState; // 0x8
    }; // Size: 0x9
    Params_BranchState params{};
    params.LockId = (FName)LockId;
    params.LockState = (EMinimalLockState)LockState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LockState = params.LockState;
}
