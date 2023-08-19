#include "UDoubleProperty.hpp"
#include "UNumericProperty.hpp"
UDoubleProperty* UDoubleProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.DoubleProperty");
    return (UDoubleProperty*)res;
}
