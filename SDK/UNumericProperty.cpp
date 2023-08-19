#include "UNumericProperty.hpp"
#include "UProperty.hpp"
UNumericProperty* UNumericProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.NumericProperty");
    return (UNumericProperty*)res;
}
