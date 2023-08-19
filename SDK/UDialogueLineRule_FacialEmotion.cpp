#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_FacialEmotion.hpp"
UDialogueLineRule_FacialEmotion* UDialogueLineRule_FacialEmotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_FacialEmotion");
    return (UDialogueLineRule_FacialEmotion*)res;
}
