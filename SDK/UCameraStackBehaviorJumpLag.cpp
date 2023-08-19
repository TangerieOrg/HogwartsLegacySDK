#include "AAmbulatory_Character.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorJumpLag.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorJumpLag* UCameraStackBehaviorJumpLag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorJumpLag");
    return (UCameraStackBehaviorJumpLag*)res;
}
void UCameraStackBehaviorJumpLag::OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CameraStackBehaviorJumpLag.OnTeleport"));
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
