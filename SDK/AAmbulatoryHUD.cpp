#include "AAbleHUD.hpp"
#include "AAmbulatoryHUD.hpp"
#include "UFunction.hpp"
void AAmbulatoryHUD::OnIntegrate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AmbulatoryHUD.OnIntegrate"));
    struct Params_OnIntegrate {
    }; // Size: 0x0
    Params_OnIntegrate params{};
    ProcessEvent(func, &params);
}
void AAmbulatoryHUD::ToggleAmbulatoryHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AmbulatoryHUD.ToggleAmbulatoryHUD"));
    struct Params_ToggleAmbulatoryHUD {
    }; // Size: 0x0
    Params_ToggleAmbulatoryHUD params{};
    ProcessEvent(func, &params);
}
AAmbulatoryHUD* AAmbulatoryHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AmbulatoryHUD");
    return (AAmbulatoryHUD*)res;
}
