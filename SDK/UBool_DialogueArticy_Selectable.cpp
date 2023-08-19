#include "FDialogueLineReference.hpp"
#include "UBoolProvider.hpp"
#include "UBool_DialogueArticy_Selectable.hpp"
UBool_DialogueArticy_Selectable* UBool_DialogueArticy_Selectable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_DialogueArticy_Selectable");
    return (UBool_DialogueArticy_Selectable*)res;
}
