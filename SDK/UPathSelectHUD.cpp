#include "UFunction.hpp"
#include "UPathSelectHUD.hpp"
#include "UUserWidget.hpp"
UPathSelectHUD* UPathSelectHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PathSelectHUD");
    return (UPathSelectHUD*)res;
}
void UPathSelectHUD::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PathSelectHUD.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
