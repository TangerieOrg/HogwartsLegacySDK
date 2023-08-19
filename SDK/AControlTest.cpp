#include "AControlTest.hpp"
#include "ATargetPoint.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
void AControlTest::SetCommandVelocity(FVector& i_velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ControlTest.SetCommandVelocity"));
    struct Params_SetCommandVelocity {
        FVector i_velocity; // 0x0
    }; // Size: 0xc
    Params_SetCommandVelocity params{};
    params.i_velocity = (FVector)i_velocity;
    ProcessEvent(func, &params);
    i_velocity = params.i_velocity;
}
AControlTest* AControlTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ControlTest");
    return (AControlTest*)res;
}
void AControlTest::SetLogWidget(UUserWidget* i_logWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ControlTest.SetLogWidget"));
    struct Params_SetLogWidget {
        UUserWidget* i_logWidget; // 0x0
    }; // Size: 0x8
    Params_SetLogWidget params{};
    params.i_logWidget = (UUserWidget*)i_logWidget;
    ProcessEvent(func, &params);
}
