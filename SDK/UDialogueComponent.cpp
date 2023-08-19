#include "UActorComponent.hpp"
#include "UDialogueComponent.hpp"
UDialogueComponent* UDialogueComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueComponent");
    return (UDialogueComponent*)res;
}
