#include "UFunction.hpp"
#include "UStruct.hpp"
UFunction* UFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Function");
    return (UFunction*)res;
}
