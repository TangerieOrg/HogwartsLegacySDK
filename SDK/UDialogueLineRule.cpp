#include "UDialogueLineRule.hpp"
#include "UObject.hpp"
UDialogueLineRule* UDialogueLineRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule");
    return (UDialogueLineRule*)res;
}
