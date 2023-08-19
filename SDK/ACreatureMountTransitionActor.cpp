#include "AActor.hpp"
#include "ACharacter.hpp"
#include "ACreatureMountTransitionActor.hpp"
#include "ACreature_Character.hpp"
#include "EMountTransitionAnimState.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
#include "USkeletalMesh.hpp"
ACreatureMountTransitionActor* ACreatureMountTransitionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureMountTransitionActor");
    return (ACreatureMountTransitionActor*)res;
}
void ACreatureMountTransitionActor::OnKnockdownDismountStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnKnockdownDismountStart"));
    struct Params_OnKnockdownDismountStart {
    }; // Size: 0x0
    Params_OnKnockdownDismountStart params{};
    ProcessEvent(func, &params);
}
void ACreatureMountTransitionActor::OnKnockdownDismountEndCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnKnockdownDismountEndCallback"));
    struct Params_OnKnockdownDismountEndCallback {
    }; // Size: 0x0
    Params_OnKnockdownDismountEndCallback params{};
    ProcessEvent(func, &params);
}
void ACreatureMountTransitionActor::OnCreatureOutOfBagEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnCreatureOutOfBagEnd"));
    struct Params_OnCreatureOutOfBagEnd {
    }; // Size: 0x0
    Params_OnCreatureOutOfBagEnd params{};
    ProcessEvent(func, &params);
}
void ACreatureMountTransitionActor::OnCreatureOutOfBagStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnCreatureOutOfBagStart"));
    struct Params_OnCreatureOutOfBagStart {
    }; // Size: 0x0
    Params_OnCreatureOutOfBagStart params{};
    ProcessEvent(func, &params);
}
void ACreatureMountTransitionActor::OnCreatureIntoBagStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnCreatureIntoBagStart"));
    struct Params_OnCreatureIntoBagStart {
    }; // Size: 0x0
    Params_OnCreatureIntoBagStart params{};
    ProcessEvent(func, &params);
}
void ACreatureMountTransitionActor::OnCreatureIntoBagEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountTransitionActor.OnCreatureIntoBagEnd"));
    struct Params_OnCreatureIntoBagEnd {
    }; // Size: 0x0
    Params_OnCreatureIntoBagEnd params{};
    ProcessEvent(func, &params);
}
