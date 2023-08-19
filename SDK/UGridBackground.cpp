#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UGridBackground.hpp"
UGridBackground* UGridBackground::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GridBackground");
    return (UGridBackground*)res;
}
void UGridBackground::PopulateGrid(FVector2D GridSpacing, int32_t Rows, int32_t Columns) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GridBackground.PopulateGrid"));
    struct Params_PopulateGrid {
        FVector2D GridSpacing; // 0x0
        int32_t Rows; // 0x8
        int32_t Columns; // 0xc
    }; // Size: 0x10
    Params_PopulateGrid params{};
    params.GridSpacing = (FVector2D)GridSpacing;
    params.Rows = (int32_t)Rows;
    params.Columns = (int32_t)Columns;
    ProcessEvent(func, &params);
}
