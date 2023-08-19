#include "ASanctuaryLoom.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "UFunction.hpp"
ASanctuaryLoom* ASanctuaryLoom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryLoom");
    return (ASanctuaryLoom*)res;
}
void ASanctuaryLoom::ShowLoomUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLoom.ShowLoomUI"));
    struct Params_ShowLoomUI {
    }; // Size: 0x0
    Params_ShowLoomUI params{};
    ProcessEvent(func, &params);
}
