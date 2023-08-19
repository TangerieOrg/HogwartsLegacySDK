#include "ULazyObjectProperty.hpp"
#include "UObjectPropertyBase.hpp"
ULazyObjectProperty* ULazyObjectProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.LazyObjectProperty");
    return (ULazyObjectProperty*)res;
}
