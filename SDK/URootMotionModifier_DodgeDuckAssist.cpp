#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_DodgeDuckAssist.hpp"
URootMotionModifier_DodgeDuckAssist* URootMotionModifier_DodgeDuckAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_DodgeDuckAssist");
    return (URootMotionModifier_DodgeDuckAssist*)res;
}
void URootMotionModifier_DodgeDuckAssist::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_DodgeDuckAssist.CharacterTeleported"));
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
