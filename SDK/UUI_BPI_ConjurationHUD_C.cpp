#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_ConjurationHUD_C.hpp"
UUI_BPI_ConjurationHUD_C* UUI_BPI_ConjurationHUD_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_ConjurationHUD.UI_BPI_ConjurationHUD_C");
    return (UUI_BPI_ConjurationHUD_C*)res;
}
void UUI_BPI_ConjurationHUD_C::SetCategory(FString Category) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_ConjurationHUD.UI_BPI_ConjurationHUD_C.SetCategory"));
    struct Params_SetCategory {
        FString Category; // 0x0
    }; // Size: 0x10
    Params_SetCategory params{};
    params.Category = (FString)Category;
    ProcessEvent(func, &params);
}
