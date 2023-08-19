#include "UDelegateFunction.hpp"
#include "UFunction.hpp"
UDelegateFunction* UDelegateFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.DelegateFunction");
    return (UDelegateFunction*)res;
}
