#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_ExplicitLayeredAnimation.hpp"
UDialogueLineRule_ExplicitLayeredAnimation* UDialogueLineRule_ExplicitLayeredAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_ExplicitLayeredAnimation");
    return (UDialogueLineRule_ExplicitLayeredAnimation*)res;
}
