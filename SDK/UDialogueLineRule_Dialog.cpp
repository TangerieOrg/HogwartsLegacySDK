#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_Dialog.hpp"
UDialogueLineRule_Dialog* UDialogueLineRule_Dialog::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_Dialog");
    return (UDialogueLineRule_Dialog*)res;
}
