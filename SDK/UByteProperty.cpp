#include "UByteProperty.hpp"
#include "UNumericProperty.hpp"
UByteProperty* UByteProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ByteProperty");
    return (UByteProperty*)res;
}
