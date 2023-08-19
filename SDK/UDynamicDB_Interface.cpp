#include "UDynamicDB_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UDynamicDB_Interface* UDynamicDB_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicDB_Interface");
    return (UDynamicDB_Interface*)res;
}
void UDynamicDB_Interface::SetupDBQueries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicDB_Interface.SetupDBQueries"));
    struct Params_SetupDBQueries {
    }; // Size: 0x0
    Params_SetupDBQueries params{};
    ProcessEvent(func, &params);
}
