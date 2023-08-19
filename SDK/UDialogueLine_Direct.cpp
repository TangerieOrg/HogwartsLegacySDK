#include "FDialogueLineReference.hpp"
#include "UDialogueLineProvider.hpp"
#include "UDialogueLine_Direct.hpp"
UDialogueLine_Direct* UDialogueLine_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLine_Direct");
    return (UDialogueLine_Direct*)res;
}
