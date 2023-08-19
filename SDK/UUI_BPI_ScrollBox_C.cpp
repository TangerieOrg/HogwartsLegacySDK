#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_ScrollBox_C.hpp"
UUI_BPI_ScrollBox_C* UUI_BPI_ScrollBox_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_ScrollBox.UI_BPI_ScrollBox_C");
    return (UUI_BPI_ScrollBox_C*)res;
}
void UUI_BPI_ScrollBox_C::I_SetButtonClass(UClass* Widget_Class) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_ScrollBox.UI_BPI_ScrollBox_C.I_SetButtonClass"));
    struct Params_I_SetButtonClass {
        UClass* Widget_Class; // 0x0
    }; // Size: 0x8
    Params_I_SetButtonClass params{};
    params.Widget_Class = (UClass*)Widget_Class;
    ProcessEvent(func, &params);
}
void UUI_BPI_ScrollBox_C::I_SetCursorPos(bool Container___Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_ScrollBox.UI_BPI_ScrollBox_C.I_SetCursorPos"));
    struct Params_I_SetCursorPos {
        bool Container___Inventory; // 0x0
    }; // Size: 0x1
    Params_I_SetCursorPos params{};
    params.Container___Inventory = (bool)Container___Inventory;
    ProcessEvent(func, &params);
}
