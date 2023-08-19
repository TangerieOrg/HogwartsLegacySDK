#include "AAmbulatoryHUD.hpp"
#include "ACharacterStateHUD.hpp"
#include "UFunction.hpp"
ACharacterStateHUD* ACharacterStateHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterStateHUD");
    return (ACharacterStateHUD*)res;
}
void ACharacterStateHUD::ToggleCharacterStateHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterStateHUD.ToggleCharacterStateHUD"));
    struct Params_ToggleCharacterStateHUD {
    }; // Size: 0x0
    Params_ToggleCharacterStateHUD params{};
    ProcessEvent(func, &params);
}
