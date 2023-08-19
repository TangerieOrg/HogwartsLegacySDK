#include "UBaseProvider.hpp"
#include "UDialogueSequenceProvider.hpp"
UDialogueSequenceProvider* UDialogueSequenceProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueSequenceProvider");
    return (UDialogueSequenceProvider*)res;
}
