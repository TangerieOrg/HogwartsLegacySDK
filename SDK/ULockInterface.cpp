#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULockInterface.hpp"
#include "UPrimitiveComponent.hpp"
ULockInterface* ULockInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockInterface");
    return (ULockInterface*)res;
}
void ULockInterface::OnUnlocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockInterface.OnUnlocked"));
    struct Params_OnUnlocked {
    }; // Size: 0x0
    Params_OnUnlocked params{};
    ProcessEvent(func, &params);
}
void ULockInterface::OnLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockInterface.OnLocked"));
    struct Params_OnLocked {
    }; // Size: 0x0
    Params_OnLocked params{};
    ProcessEvent(func, &params);
}
void ULockInterface::OnFailedToUnlock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockInterface.OnFailedToUnlock"));
    struct Params_OnFailedToUnlock {
    }; // Size: 0x0
    Params_OnFailedToUnlock params{};
    ProcessEvent(func, &params);
}
bool ULockInterface::CanUnlock(UPrimitiveComponent* Comp, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockInterface.CanUnlock"));
    struct Params_CanUnlock {
        UPrimitiveComponent* Comp; // 0x0
        FVector Location; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_CanUnlock params{};
    params.Comp = (UPrimitiveComponent*)Comp;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
