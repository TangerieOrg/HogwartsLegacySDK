#include "UObject.hpp"
#include "UStringTable.hpp"
UStringTable* UStringTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StringTable");
    return (UStringTable*)res;
}
