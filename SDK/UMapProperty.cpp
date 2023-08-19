#include "UMapProperty.hpp"
#include "UProperty.hpp"
UMapProperty* UMapProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MapProperty");
    return (UMapProperty*)res;
}
