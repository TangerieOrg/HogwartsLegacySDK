#include "UFloatProvider.hpp"
#include "UFloat_RemapValue.hpp"
UFloat_RemapValue* UFloat_RemapValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_RemapValue");
    return (UFloat_RemapValue*)res;
}
