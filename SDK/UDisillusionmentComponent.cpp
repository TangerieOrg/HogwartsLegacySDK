#include "AActor.hpp"
#include "ACharacter.hpp"
#include "EMovementMode.hpp"
#include "FDisillusionmentData.hpp"
#include "FMultiFX2Handle.hpp"
#include "UDisillusionmentComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialSwap.hpp"
#include "UStateEffectComponent.hpp"
UDisillusionmentComponent* UDisillusionmentComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DisillusionmentComponent");
    return (UDisillusionmentComponent*)res;
}
void UDisillusionmentComponent::OnActorEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.OnActorEndOverlap"));
    struct Params_OnActorEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UDisillusionmentComponent::RemoveDisillusionmentFromActor(AActor* Actor, bool bEvenIfCloak) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.RemoveDisillusionmentFromActor"));
    struct Params_RemoveDisillusionmentFromActor {
        AActor* Actor; // 0x0
        bool bEvenIfCloak; // 0x8
    }; // Size: 0x9
    Params_RemoveDisillusionmentFromActor params{};
    params.Actor = (AActor*)Actor;
    params.bEvenIfCloak = (bool)bEvenIfCloak;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UDisillusionmentComponent::PerceptionDoneHandler(AActor* Actor, bool bSuccess, bool bReturnControl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.PerceptionDoneHandler"));
    struct Params_PerceptionDoneHandler {
        AActor* Actor; // 0x0
        bool bSuccess; // 0x8
        bool bReturnControl; // 0x9
    }; // Size: 0xa
    Params_PerceptionDoneHandler params{};
    params.Actor = (AActor*)Actor;
    params.bSuccess = (bool)bSuccess;
    params.bReturnControl = (bool)bReturnControl;
    ProcessEvent(func, &params);
}
void UDisillusionmentComponent::OwnerMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.OwnerMovementModeChanged"));
    struct Params_OwnerMovementModeChanged {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_OwnerMovementModeChanged params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void UDisillusionmentComponent::OnActorBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.OnActorBeginOverlap"));
    struct Params_OnActorBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool UDisillusionmentComponent::IsActorDisillusioned(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.IsActorDisillusioned"));
    struct Params_IsActorDisillusioned {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorDisillusioned params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDisillusionmentComponent::IsActorDisillusionedByCloak(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.IsActorDisillusionedByCloak"));
    struct Params_IsActorDisillusionedByCloak {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorDisillusionedByCloak params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UDisillusionmentComponent::GetVisibilityPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentComponent.GetVisibilityPercentage"));
    struct Params_GetVisibilityPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVisibilityPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
