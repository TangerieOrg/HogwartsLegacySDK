#include "UInt16Property.hpp"
#include "UNumericProperty.hpp"
UInt16Property* UInt16Property::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Int16Property");
    return (UInt16Property*)res;
}
