#include "UInt8Property.hpp"
#include "UNumericProperty.hpp"
UInt8Property* UInt8Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Int8Property");
    return (UInt8Property*)res;
}
