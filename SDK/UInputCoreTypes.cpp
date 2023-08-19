#include "UInputCoreTypes.hpp"
#include "UObject.hpp"
UInputCoreTypes* UInputCoreTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/InputCore.InputCoreTypes");
    return (UInputCoreTypes*)res;
}
