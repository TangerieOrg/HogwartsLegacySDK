#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ALockable.hpp"
#include "FDatabaseLockList.hpp"
#include "FGuid.hpp"
#include "FHitResult.hpp"
#include "UActorComponent.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "UParticleSystem.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
void ULockableComponent::UnlockTimeReached(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.UnlockTimeReached"));
    struct Params_UnlockTimeReached {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_UnlockTimeReached params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ULockableComponent* ULockableComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockableComponent");
    return (ULockableComponent*)res;
}
void ULockableComponent::Unseal(bool ShowLockWhenLocked, bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.Unseal"));
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
void ULockableComponent::UpdateLockAfterChange(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.UpdateLockAfterChange"));
    struct Params_UpdateLockAfterChange {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
        bool DoChild; // 0x3
    }; // Size: 0x4
    Params_UpdateLockAfterChange params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.DoChild = (bool)DoChild;
    ProcessEvent(func, &params);
}
void ULockableComponent::UnlockButtonReleasedEarly(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.UnlockButtonReleasedEarly"));
    struct Params_UnlockButtonReleasedEarly {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_UnlockButtonReleasedEarly params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ULockableComponent::UnlockIfLinked(UObject* Caller, FName& inGroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.UnlockIfLinked"));
    struct Params_UnlockIfLinked {
        UObject* Caller; // 0x0
        FName inGroupName; // 0x8
    }; // Size: 0x10
    Params_UnlockIfLinked params{};
    params.Caller = (UObject*)Caller;
    params.inGroupName = (FName)inGroupName;
    ProcessEvent(func, &params);
    inGroupName = params.inGroupName;
}
void ULockableComponent::OnPlayerRemovedLock(AAmbulatory_Character* AmbulatoryCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.OnPlayerRemovedLock"));
    struct Params_OnPlayerRemovedLock {
        AAmbulatory_Character* AmbulatoryCharacter; // 0x0
    }; // Size: 0x8
    Params_OnPlayerRemovedLock params{};
    params.AmbulatoryCharacter = (AAmbulatory_Character*)AmbulatoryCharacter;
    ProcessEvent(func, &params);
}
void ULockableComponent::UnlockButtonPressed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.UnlockButtonPressed"));
    struct Params_UnlockButtonPressed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_UnlockButtonPressed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ULockableComponent::Unlock(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild, bool FromMinigame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.Unlock"));
    struct Params_Unlock {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
        bool DoChild; // 0x3
        bool FromMinigame; // 0x4
    }; // Size: 0x5
    Params_Unlock params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.DoChild = (bool)DoChild;
    params.FromMinigame = (bool)FromMinigame;
    ProcessEvent(func, &params);
}
void ULockableComponent::Seal(bool ShowLockWhenLocked, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.Seal"));
    struct Params_Seal {
        bool ShowLockWhenLocked; // 0x0
        bool PlaySoundsAndEffects; // 0x1
    }; // Size: 0x2
    Params_Seal params{};
    params.ShowLockWhenLocked = (bool)ShowLockWhenLocked;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
bool ULockableComponent::HasKey() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.HasKey"));
    struct Params_HasKey {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasKey params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULockableComponent::PlayerHitByMunitions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.PlayerHitByMunitions"));
    struct Params_PlayerHitByMunitions {
    }; // Size: 0x0
    Params_PlayerHitByMunitions params{};
    ProcessEvent(func, &params);
}
void ULockableComponent::OnLockSphereHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.OnLockSphereHit"));
    struct Params_OnLockSphereHit {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnLockSphereHit params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
UMeshComponent* ULockableComponent::GetLockMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.GetLockMeshComponent"));
    struct Params_GetLockMeshComponent {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLockMeshComponent params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
ALockable* ULockableComponent::GetLockable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.GetLockable"));
    struct Params_GetLockable {
        ALockable* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLockable params{};
    ProcessEvent(func, &params);
    return (ALockable*)params.ReturnValue;
}
void ULockableComponent::DestroyLock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.DestroyLock"));
    struct Params_DestroyLock {
    }; // Size: 0x0
    Params_DestroyLock params{};
    ProcessEvent(func, &params);
}
bool ULockableComponent::CanPlayerUseAlohomoraOnLock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.CanPlayerUseAlohomoraOnLock"));
    struct Params_CanPlayerUseAlohomoraOnLock {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlayerUseAlohomoraOnLock params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULockableComponent::CanPlayerOpenLock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockableComponent.CanPlayerOpenLock"));
    struct Params_CanPlayerOpenLock {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlayerOpenLock params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
