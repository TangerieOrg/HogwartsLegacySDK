#include "UNumericProperty.hpp"
#include "UUInt64Property.hpp"
UUInt64Property* UUInt64Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.UInt64Property");
    return (UUInt64Property*)res;
}
