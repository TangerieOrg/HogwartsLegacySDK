#include "UObject.hpp"
#include "USelection.hpp"
USelection* USelection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Selection");
    return (USelection*)res;
}
