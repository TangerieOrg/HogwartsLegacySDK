#include "FDialogueSequenceReference.hpp"
#include "UDialogueSequenceReferenceProvider.hpp"
#include "UDialogueSequenceReference_Direct.hpp"
UDialogueSequenceReference_Direct* UDialogueSequenceReference_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueSequenceReference_Direct");
    return (UDialogueSequenceReference_Direct*)res;
}
