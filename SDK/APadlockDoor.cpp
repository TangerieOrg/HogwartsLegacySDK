#include "ADoor.hpp"
#include "APadlockDoor.hpp"
#include "ELockDifficulty.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
APadlockDoor* APadlockDoor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PadlockDoor");
    return (APadlockDoor*)res;
}
void APadlockDoor::SetLockedAndDifficulty(bool Locked, ELockDifficulty Difficulty, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockDoor.SetLockedAndDifficulty"));
    struct Params_SetLockedAndDifficulty {
        bool Locked; // 0x0
        ELockDifficulty Difficulty; // 0x1
        bool OpenLockable; // 0x2
        bool ThrowLock; // 0x3
        bool PlaySoundsAndEffects; // 0x4
        bool DoChild; // 0x5
    }; // Size: 0x6
    Params_SetLockedAndDifficulty params{};
    params.Locked = (bool)Locked;
    params.Difficulty = (ELockDifficulty)Difficulty;
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.DoChild = (bool)DoChild;
    ProcessEvent(func, &params);
}
void APadlockDoor::SetLockDifficulty(ELockDifficulty Difficulty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockDoor.SetLockDifficulty"));
    struct Params_SetLockDifficulty {
        ELockDifficulty Difficulty; // 0x0
    }; // Size: 0x1
    Params_SetLockDifficulty params{};
    params.Difficulty = (ELockDifficulty)Difficulty;
    ProcessEvent(func, &params);
}
ELockDifficulty APadlockDoor::GetLockDifficulty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockDoor.GetLockDifficulty"));
    struct Params_GetLockDifficulty {
        ELockDifficulty ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLockDifficulty params{};
    ProcessEvent(func, &params);
    return (ELockDifficulty)params.ReturnValue;
}
