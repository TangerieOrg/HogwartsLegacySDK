#include "FSlateBrush.hpp"
#include "UCircularThrobber.hpp"
#include "UFunction.hpp"
#include "USlateBrushAsset.hpp"
#include "UWidget.hpp"
UCircularThrobber* UCircularThrobber::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.CircularThrobber");
    return (UCircularThrobber*)res;
}
void UCircularThrobber::SetRadius(float InRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CircularThrobber.SetRadius"));
    struct Params_SetRadius {
        float InRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.InRadius = (float)InRadius;
    ProcessEvent(func, &params);
}
void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CircularThrobber.SetNumberOfPieces"));
    struct Params_SetNumberOfPieces {
        int32_t InNumberOfPieces; // 0x0
    }; // Size: 0x4
    Params_SetNumberOfPieces params{};
    params.InNumberOfPieces = (int32_t)InNumberOfPieces;
    ProcessEvent(func, &params);
}
void UCircularThrobber::SetPeriod(float InPeriod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CircularThrobber.SetPeriod"));
    struct Params_SetPeriod {
        float InPeriod; // 0x0
    }; // Size: 0x4
    Params_SetPeriod params{};
    params.InPeriod = (float)InPeriod;
    ProcessEvent(func, &params);
}
