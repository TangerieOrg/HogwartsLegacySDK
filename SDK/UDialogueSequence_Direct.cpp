#include "FDialogueSequenceReference.hpp"
#include "UDialogueSequenceProvider.hpp"
#include "UDialogueSequence_Direct.hpp"
UDialogueSequence_Direct* UDialogueSequence_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueSequence_Direct");
    return (UDialogueSequence_Direct*)res;
}
