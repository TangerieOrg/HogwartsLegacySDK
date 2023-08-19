#include "UProperty.hpp"
#include "UTextProperty.hpp"
UTextProperty* UTextProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.TextProperty");
    return (UTextProperty*)res;
}
