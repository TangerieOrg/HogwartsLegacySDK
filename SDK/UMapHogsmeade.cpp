#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UHogsmeadeMapScreen.hpp"
#include "UHogsmeadeMaterialFade.hpp"
#include "UMapBase.hpp"
#include "UMapHogsmeade.hpp"
UMapHogsmeade* UMapHogsmeade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapHogsmeade");
    return (UMapHogsmeade*)res;
}
void UMapHogsmeade::RemoveWayMarkerBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogsmeade.RemoveWayMarkerBP"));
    struct Params_RemoveWayMarkerBP {
    }; // Size: 0x0
    Params_RemoveWayMarkerBP params{};
    ProcessEvent(func, &params);
}
UHogsmeadeMapScreen* UMapHogsmeade::GetMapScreenWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogsmeade.GetMapScreenWidget"));
    struct Params_GetMapScreenWidget {
        UHogsmeadeMapScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapScreenWidget params{};
    ProcessEvent(func, &params);
    return (UHogsmeadeMapScreen*)params.ReturnValue;
}
void UMapHogsmeade::DoFastTravel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogsmeade.DoFastTravel"));
    struct Params_DoFastTravel {
    }; // Size: 0x0
    Params_DoFastTravel params{};
    ProcessEvent(func, &params);
}
