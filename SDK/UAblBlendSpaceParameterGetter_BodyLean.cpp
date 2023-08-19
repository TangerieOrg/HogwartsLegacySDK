#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_BodyLean.hpp"
#include "UFunction.hpp"
UAblBlendSpaceParameterGetter_BodyLean* UAblBlendSpaceParameterGetter_BodyLean::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_BodyLean");
    return (UAblBlendSpaceParameterGetter_BodyLean*)res;
}
void UAblBlendSpaceParameterGetter_BodyLean::OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblBlendSpaceParameterGetter_BodyLean.OnTeleport"));
    struct Params_OnTeleport {
        AAmbulatory_Character* Character; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_OnTeleport params{};
    params.Character = (AAmbulatory_Character*)Character;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
