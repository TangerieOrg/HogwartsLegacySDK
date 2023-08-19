#include "FDialogueLineReference.hpp"
#include "UBoolProvider.hpp"
#include "UBool_DialogueArticyCondition.hpp"
UBool_DialogueArticyCondition* UBool_DialogueArticyCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_DialogueArticyCondition");
    return (UBool_DialogueArticyCondition*)res;
}
