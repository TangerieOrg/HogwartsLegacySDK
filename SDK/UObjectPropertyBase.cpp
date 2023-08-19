#include "UObjectPropertyBase.hpp"
#include "UProperty.hpp"
UObjectPropertyBase* UObjectPropertyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ObjectPropertyBase");
    return (UObjectPropertyBase*)res;
}
