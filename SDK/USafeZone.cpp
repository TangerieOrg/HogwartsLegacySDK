#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "USafeZone.hpp"
USafeZone* USafeZone::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SafeZone");
    return (USafeZone*)res;
}
void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SafeZone.SetSidesToPad"));
    struct Params_SetSidesToPad {
        bool InPadLeft; // 0x0
        bool InPadRight; // 0x1
        bool InPadTop; // 0x2
        bool InPadBottom; // 0x3
    }; // Size: 0x4
    Params_SetSidesToPad params{};
    params.InPadLeft = (bool)InPadLeft;
    params.InPadRight = (bool)InPadRight;
    params.InPadTop = (bool)InPadTop;
    params.InPadBottom = (bool)InPadBottom;
    ProcessEvent(func, &params);
}
