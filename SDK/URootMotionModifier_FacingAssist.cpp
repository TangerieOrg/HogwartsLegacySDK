#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_FacingAssist.hpp"
URootMotionModifier_FacingAssist* URootMotionModifier_FacingAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_FacingAssist");
    return (URootMotionModifier_FacingAssist*)res;
}
void URootMotionModifier_FacingAssist::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_FacingAssist.CharacterTeleported"));
    struct Params_CharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_CharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
