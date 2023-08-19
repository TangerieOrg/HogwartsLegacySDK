#include "UDataTable.hpp"
#include "UObject.hpp"
#include "UScriptStruct.hpp"
UDataTable* UDataTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DataTable");
    return (UDataTable*)res;
}
