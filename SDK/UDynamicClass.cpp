#include "UClass.hpp"
#include "UDynamicClass.hpp"
UDynamicClass* UDynamicClass::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.DynamicClass");
    return (UDynamicClass*)res;
}
