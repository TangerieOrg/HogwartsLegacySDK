#include "FDialogueLineReference.hpp"
#include "UStringProvider.hpp"
#include "UString_DialogueArticyID.hpp"
UString_DialogueArticyID* UString_DialogueArticyID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.String_DialogueArticyID");
    return (UString_DialogueArticyID*)res;
}
