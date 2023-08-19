#include "UFloatProperty.hpp"
#include "UNumericProperty.hpp"
UFloatProperty* UFloatProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.FloatProperty");
    return (UFloatProperty*)res;
}
