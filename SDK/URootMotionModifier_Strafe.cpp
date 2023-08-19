#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Strafe.hpp"
URootMotionModifier_Strafe* URootMotionModifier_Strafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Strafe");
    return (URootMotionModifier_Strafe*)res;
}
void URootMotionModifier_Strafe::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_Strafe.CharacterTeleported"));
    struct Params_CharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FRotator AmountRotated; // 0x8
    }; // Size: 0x14
    Params_CharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void URootMotionModifier_Strafe::CharacterRotatedBySupport(FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_Strafe.CharacterRotatedBySupport"));
    struct Params_CharacterRotatedBySupport {
        FRotator AmountRotated; // 0x0
    }; // Size: 0xc
    Params_CharacterRotatedBySupport params{};
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
