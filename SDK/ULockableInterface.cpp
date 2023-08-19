#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULockableInterface.hpp"
#include "UMeshComponent.hpp"
void ULockableInterface::OnLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableInterface.OnLocked"));
    struct Params_OnLocked {
    }; // Size: 0x0
    Params_OnLocked params{};
    ProcessEvent(func, &params);
}
ULockableInterface* ULockableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockableInterface");
    return (ULockableInterface*)res;
}
void ULockableInterface::SetAudioSwitch(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableInterface.SetAudioSwitch"));
    struct Params_SetAudioSwitch {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetAudioSwitch params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
void ULockableInterface::OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableInterface.OnUnlocked"));
    struct Params_OnUnlocked {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
        bool FromMinigame; // 0x3
    }; // Size: 0x4
    Params_OnUnlocked params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.FromMinigame = (bool)FromMinigame;
    ProcessEvent(func, &params);
}
FVector ULockableInterface::GetSoundPos() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableInterface.GetSoundPos"));
    struct Params_GetSoundPos {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSoundPos params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UMeshComponent* ULockableInterface::GetAttachToMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableInterface.GetAttachToMesh"));
    struct Params_GetAttachToMesh {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachToMesh params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
