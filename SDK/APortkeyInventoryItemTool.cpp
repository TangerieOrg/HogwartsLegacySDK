#include "AInventoryItemTool.hpp"
#include "APortkeyInventoryItemTool.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UFunction.hpp"
APortkeyInventoryItemTool* APortkeyInventoryItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PortkeyInventoryItemTool");
    return (APortkeyInventoryItemTool*)res;
}
void APortkeyInventoryItemTool::Transport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortkeyInventoryItemTool.Transport"));
    struct Params_Transport {
    }; // Size: 0x0
    Params_Transport params{};
    ProcessEvent(func, &params);
}
