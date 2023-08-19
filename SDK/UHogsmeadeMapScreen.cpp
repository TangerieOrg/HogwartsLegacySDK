#include "UFunction.hpp"
#include "UHogsmeadeMapScreen.hpp"
#include "UMapHogsmeade.hpp"
#include "UMapScreenBase.hpp"
UHogsmeadeMapScreen* UHogsmeadeMapScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HogsmeadeMapScreen");
    return (UHogsmeadeMapScreen*)res;
}
UMapHogsmeade* UHogsmeadeMapScreen::GetMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogsmeadeMapScreen.GetMap"));
    struct Params_GetMap {
        UMapHogsmeade* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMap params{};
    ProcessEvent(func, &params);
    return (UMapHogsmeade*)params.ReturnValue;
}
