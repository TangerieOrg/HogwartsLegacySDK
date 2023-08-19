#include "EListItemAlignment.hpp"
#include "UFunction.hpp"
#include "UListView.hpp"
#include "UTileView.hpp"
UTileView* UTileView::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.TileView");
    return (UTileView*)res;
}
void UTileView::SetEntryWidth(float NewWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TileView.SetEntryWidth"));
    struct Params_SetEntryWidth {
        float NewWidth; // 0x0
    }; // Size: 0x4
    Params_SetEntryWidth params{};
    params.NewWidth = (float)NewWidth;
    ProcessEvent(func, &params);
}
float UTileView::GetEntryWidth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TileView.GetEntryWidth"));
    struct Params_GetEntryWidth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEntryWidth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTileView::SetEntryHeight(float NewHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TileView.SetEntryHeight"));
    struct Params_SetEntryHeight {
        float NewHeight; // 0x0
    }; // Size: 0x4
    Params_SetEntryHeight params{};
    params.NewHeight = (float)NewHeight;
    ProcessEvent(func, &params);
}
float UTileView::GetEntryHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TileView.GetEntryHeight"));
    struct Params_GetEntryHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEntryHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
