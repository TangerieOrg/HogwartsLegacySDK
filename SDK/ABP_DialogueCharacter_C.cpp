#include "ABP_DialogueCharacter_C.hpp"
#include "ADialogueCharacter.hpp"
ABP_DialogueCharacter_C* ABP_DialogueCharacter_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/BP_DialogueCharacter.BP_DialogueCharacter_C");
    return (ABP_DialogueCharacter_C*)res;
}
