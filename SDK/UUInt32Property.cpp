#include "UNumericProperty.hpp"
#include "UUInt32Property.hpp"
UUInt32Property* UUInt32Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.UInt32Property");
    return (UUInt32Property*)res;
}
