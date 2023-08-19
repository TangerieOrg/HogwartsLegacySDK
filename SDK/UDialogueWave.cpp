#include "FDialogueContextMapping.hpp"
#include "FGuid.hpp"
#include "UDialogueWave.hpp"
#include "UObject.hpp"
UDialogueWave* UDialogueWave::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DialogueWave");
    return (UDialogueWave*)res;
}
