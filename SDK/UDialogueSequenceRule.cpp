#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UDialogueLineRule.hpp"
#include "UDialogueSequenceRule.hpp"
UDialogueSequenceRule* UDialogueSequenceRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueSequenceRule");
    return (UDialogueSequenceRule*)res;
}
