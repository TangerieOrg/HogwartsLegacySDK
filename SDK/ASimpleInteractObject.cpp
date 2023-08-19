#include "APhoenixBudgetedActor.hpp"
#include "ASimpleInteractObject.hpp"
#include "FDialogueConversationReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "URootMotionModProperties_Interact.hpp"
ASimpleInteractObject* ASimpleInteractObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SimpleInteractObject");
    return (ASimpleInteractObject*)res;
}
UClass* ASimpleInteractObject::GetAbilityClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleInteractObject.GetAbilityClass"));
    struct Params_GetAbilityClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAbilityClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
void ASimpleInteractObject::PlayDialogue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleInteractObject.PlayDialogue"));
    struct Params_PlayDialogue {
    }; // Size: 0x0
    Params_PlayDialogue params{};
    ProcessEvent(func, &params);
}
void ASimpleInteractObject::InteractionInitiated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleInteractObject.InteractionInitiated"));
    struct Params_InteractionInitiated {
    }; // Size: 0x0
    Params_InteractionInitiated params{};
    ProcessEvent(func, &params);
}
