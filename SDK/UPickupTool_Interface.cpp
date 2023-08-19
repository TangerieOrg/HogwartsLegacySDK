#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UPickupTool_Interface.hpp"
void UPickupTool_Interface::DeactivateTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PickupTool_Interface.DeactivateTool"));
    struct Params_DeactivateTool {
    }; // Size: 0x0
    Params_DeactivateTool params{};
    ProcessEvent(func, &params);
}
UPickupTool_Interface* UPickupTool_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PickupTool_Interface");
    return (UPickupTool_Interface*)res;
}
