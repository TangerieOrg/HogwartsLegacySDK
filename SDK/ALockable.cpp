#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ALockable.hpp"
#include "FGuid.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
void ALockable::Unlock(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.Unlock"));
    struct Params_Unlock {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
    }; // Size: 0x3
    Params_Unlock params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
ALockable* ALockable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Lockable");
    return (ALockable*)res;
}
void ALockable::SetIsLocked(bool Locked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.SetIsLocked"));
    struct Params_SetIsLocked {
        bool Locked; // 0x0
    }; // Size: 0x1
    Params_SetIsLocked params{};
    params.Locked = (bool)Locked;
    ProcessEvent(func, &params);
}
void ALockable::Unseal(bool ShowLockWhenLocked, bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.Unseal"));
    struct Params_Unseal {
        bool ShowLockWhenLocked; // 0x0
        bool Locked; // 0x1
        bool OpenLockable; // 0x2
        bool ThrowLock; // 0x3
        bool PlaySoundsAndEffects; // 0x4
    }; // Size: 0x5
    Params_Unseal params{};
    params.ShowLockWhenLocked = (bool)ShowLockWhenLocked;
    params.Locked = (bool)Locked;
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
void ALockable::Seal(bool ShowLockWhenLocked, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.Seal"));
    struct Params_Seal {
        bool ShowLockWhenLocked; // 0x0
        bool PlaySoundsAndEffects; // 0x1
    }; // Size: 0x2
    Params_Seal params{};
    params.ShowLockWhenLocked = (bool)ShowLockWhenLocked;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
void ALockable::Lock(bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.Lock"));
    struct Params_Lock {
        bool PlaySoundsAndEffects; // 0x0
    }; // Size: 0x1
    Params_Lock params{};
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
void ALockable::SetLocked(bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.SetLocked"));
    struct Params_SetLocked {
        bool Locked; // 0x0
        bool OpenLockable; // 0x1
        bool ThrowLock; // 0x2
        bool PlaySoundsAndEffects; // 0x3
    }; // Size: 0x4
    Params_SetLocked params{};
    params.Locked = (bool)Locked;
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
void ALockable::RunDoorConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.RunDoorConstructionScript"));
    struct Params_RunDoorConstructionScript {
    }; // Size: 0x0
    Params_RunDoorConstructionScript params{};
    ProcessEvent(func, &params);
}
bool ALockable::GetIsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Lockable.GetIsLocked"));
    struct Params_GetIsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
