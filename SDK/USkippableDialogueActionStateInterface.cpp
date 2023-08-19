#include "UInterface.hpp"
#include "USkippableDialogueActionStateInterface.hpp"
USkippableDialogueActionStateInterface* USkippableDialogueActionStateInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkippableDialogueActionStateInterface");
    return (USkippableDialogueActionStateInterface*)res;
}
