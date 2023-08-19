#include "AAmbulatory_Character.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPearLockComponent.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
UPearLockComponent* UPearLockComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PearLockComponent");
    return (UPearLockComponent*)res;
}
void UPearLockComponent::ReplacePearDoorknob() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PearLockComponent.ReplacePearDoorknob"));
    struct Params_ReplacePearDoorknob {
    }; // Size: 0x0
    Params_ReplacePearDoorknob params{};
    ProcessEvent(func, &params);
}
void UPearLockComponent::DestroyPearMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PearLockComponent.DestroyPearMeshComponent"));
    struct Params_DestroyPearMeshComponent {
    }; // Size: 0x0
    Params_DestroyPearMeshComponent params{};
    ProcessEvent(func, &params);
}
