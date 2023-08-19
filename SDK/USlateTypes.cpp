#include "UObject.hpp"
#include "USlateTypes.hpp"
USlateTypes* USlateTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.SlateTypes");
    return (USlateTypes*)res;
}
