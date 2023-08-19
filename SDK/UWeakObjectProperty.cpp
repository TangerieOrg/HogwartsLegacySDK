#include "UObjectPropertyBase.hpp"
#include "UWeakObjectProperty.hpp"
UWeakObjectProperty* UWeakObjectProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.WeakObjectProperty");
    return (UWeakObjectProperty*)res;
}
