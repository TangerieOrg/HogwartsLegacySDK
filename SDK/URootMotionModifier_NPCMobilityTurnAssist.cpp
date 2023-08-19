#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_NPCMobilityTurnAssist.hpp"
URootMotionModifier_NPCMobilityTurnAssist* URootMotionModifier_NPCMobilityTurnAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_NPCMobilityTurnAssist");
    return (URootMotionModifier_NPCMobilityTurnAssist*)res;
}
void URootMotionModifier_NPCMobilityTurnAssist::CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_NPCMobilityTurnAssist.CharacterTeleported"));
    struct Params_CharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FRotator AmountRotated; // 0x8
    }; // Size: 0x14
    Params_CharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void URootMotionModifier_NPCMobilityTurnAssist::CharacterRotatedBySupport(FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RootMotionModifier_NPCMobilityTurnAssist.CharacterRotatedBySupport"));
    struct Params_CharacterRotatedBySupport {
        FRotator AmountRotated; // 0x0
    }; // Size: 0xc
    Params_CharacterRotatedBySupport params{};
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
