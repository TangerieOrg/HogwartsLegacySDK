#include "UBaseProvider.hpp"
#include "UDialogueSequenceReferenceProvider.hpp"
UDialogueSequenceReferenceProvider* UDialogueSequenceReferenceProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueSequenceReferenceProvider");
    return (UDialogueSequenceReferenceProvider*)res;
}
