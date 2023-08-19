#include "UARTypesDummyClass.hpp"
#include "UObject.hpp"
UARTypesDummyClass* UARTypesDummyClass::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTypesDummyClass");
    return (UARTypesDummyClass*)res;
}
