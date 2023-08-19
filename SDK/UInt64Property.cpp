#include "UInt64Property.hpp"
#include "UNumericProperty.hpp"
UInt64Property* UInt64Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Int64Property");
    return (UInt64Property*)res;
}
