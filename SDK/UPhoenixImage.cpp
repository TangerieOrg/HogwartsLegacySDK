#include "FDataTableRowHandle.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
UPhoenixImage* UPhoenixImage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixImage");
    return (UPhoenixImage*)res;
}
void UPhoenixImage::SetColorTag(FDataTableRowHandle NewColorTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixImage.SetColorTag"));
    struct Params_SetColorTag {
        FDataTableRowHandle NewColorTag; // 0x0
    }; // Size: 0x10
    Params_SetColorTag params{};
    params.NewColorTag = (FDataTableRowHandle)NewColorTag;
    ProcessEvent(func, &params);
}
