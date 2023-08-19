#include "UBaseProvider.hpp"
#include "UDialogueLineProvider.hpp"
UDialogueLineProvider* UDialogueLineProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineProvider");
    return (UDialogueLineProvider*)res;
}
