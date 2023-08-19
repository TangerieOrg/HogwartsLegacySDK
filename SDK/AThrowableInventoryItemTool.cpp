#include "AInventoryItemTool.hpp"
#include "AThrowableInventoryItemTool.hpp"
#include "UFunction.hpp"
AThrowableInventoryItemTool* AThrowableInventoryItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ThrowableInventoryItemTool");
    return (AThrowableInventoryItemTool*)res;
}
float AThrowableInventoryItemTool::GetMaxDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ThrowableInventoryItemTool.GetMaxDistance"));
    struct Params_GetMaxDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
