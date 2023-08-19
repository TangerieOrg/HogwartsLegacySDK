#include "UField.hpp"
#include "UProperty.hpp"
UProperty* UProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Property");
    return (UProperty*)res;
}
