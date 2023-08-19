#include "UMapIconInstance.hpp"
#include "UMapIconList.hpp"
#include "UObject.hpp"
UMapIconList* UMapIconList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapIconList");
    return (UMapIconList*)res;
}
