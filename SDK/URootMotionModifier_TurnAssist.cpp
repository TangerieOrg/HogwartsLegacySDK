#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_TurnAssist.hpp"
URootMotionModifier_TurnAssist* URootMotionModifier_TurnAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_TurnAssist");
    return (URootMotionModifier_TurnAssist*)res;
}
void URootMotionModifier_TurnAssist::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_TurnAssist.CharacterTeleported"));
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
void URootMotionModifier_TurnAssist::CharacterRotatedBySupport(FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_TurnAssist.CharacterRotatedBySupport"));
    struct Params_CharacterRotatedBySupport {
        FRotator AmountRotated; // 0x0
    }; // Size: 0xc
    Params_CharacterRotatedBySupport params{};
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
