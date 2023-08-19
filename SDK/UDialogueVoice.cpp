#include "EGrammaticalGender\Type.hpp"
#include "EGrammaticalNumber\Type.hpp"
#include "FGuid.hpp"
#include "UDialogueVoice.hpp"
#include "UObject.hpp"
UDialogueVoice* UDialogueVoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DialogueVoice");
    return (UDialogueVoice*)res;
}
