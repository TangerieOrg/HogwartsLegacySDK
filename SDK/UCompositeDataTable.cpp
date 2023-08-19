#include "UCompositeDataTable.hpp"
#include "UDataTable.hpp"
UCompositeDataTable* UCompositeDataTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CompositeDataTable");
    return (UCompositeDataTable*)res;
}
