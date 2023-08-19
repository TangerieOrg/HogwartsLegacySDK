#include "UBaseProvider.hpp"
#include "UDialogueEventProvider.hpp"
UDialogueEventProvider* UDialogueEventProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueEventProvider");
    return (UDialogueEventProvider*)res;
}
