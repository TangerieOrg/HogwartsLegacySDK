#include "ABase_Character.hpp"
#include "ADialogueCharacter.hpp"
#include "UCharacterStateComponent.hpp"
ADialogueCharacter* ADialogueCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueCharacter");
    return (ADialogueCharacter*)res;
}
