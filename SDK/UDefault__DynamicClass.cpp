#include "UDefault__DynamicClass.hpp"
UDefault__DynamicClass* UDefault__DynamicClass::StaticClass() {
    static auto res = find_uobject("DynamicClass /Script/CoreUObject.Default__DynamicClass");
    return (UDefault__DynamicClass*)res;
}
