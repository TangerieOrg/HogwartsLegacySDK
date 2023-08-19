#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USpacer.hpp"
#include "UWidget.hpp"
USpacer* USpacer::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Spacer");
    return (USpacer*)res;
}
void USpacer::SetSize(FVector2D InSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Spacer.SetSize"));
    struct Params_SetSize {
        FVector2D InSize; // 0x0
    }; // Size: 0x8
    Params_SetSize params{};
    params.InSize = (FVector2D)InSize;
    ProcessEvent(func, &params);
}
