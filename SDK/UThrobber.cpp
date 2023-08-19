#include "FSlateBrush.hpp"
#include "UFunction.hpp"
#include "USlateBrushAsset.hpp"
#include "UThrobber.hpp"
#include "UWidget.hpp"
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Throbber.SetAnimateOpacity"));
    struct Params_SetAnimateOpacity {
        bool bInAnimateOpacity; // 0x0
    }; // Size: 0x1
    Params_SetAnimateOpacity params{};
    params.bInAnimateOpacity = (bool)bInAnimateOpacity;
    ProcessEvent(func, &params);
}
UThrobber* UThrobber::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Throbber");
    return (UThrobber*)res;
}
void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Throbber.SetNumberOfPieces"));
    struct Params_SetNumberOfPieces {
        int32_t InNumberOfPieces; // 0x0
    }; // Size: 0x4
    Params_SetNumberOfPieces params{};
    params.InNumberOfPieces = (int32_t)InNumberOfPieces;
    ProcessEvent(func, &params);
}
void UThrobber::SetAnimateVertically(bool bInAnimateVertically) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Throbber.SetAnimateVertically"));
    struct Params_SetAnimateVertically {
        bool bInAnimateVertically; // 0x0
    }; // Size: 0x1
    Params_SetAnimateVertically params{};
    params.bInAnimateVertically = (bool)bInAnimateVertically;
    ProcessEvent(func, &params);
}
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Throbber.SetAnimateHorizontally"));
    struct Params_SetAnimateHorizontally {
        bool bInAnimateHorizontally; // 0x0
    }; // Size: 0x1
    Params_SetAnimateHorizontally params{};
    params.bInAnimateHorizontally = (bool)bInAnimateHorizontally;
    ProcessEvent(func, &params);
}
