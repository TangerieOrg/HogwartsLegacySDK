#include "UNumericProperty.hpp"
#include "UUInt16Property.hpp"
UUInt16Property* UUInt16Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.UInt16Property");
    return (UUInt16Property*)res;
}
