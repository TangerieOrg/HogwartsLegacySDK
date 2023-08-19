#include "UPropertyValue.hpp"
#include "UPropertyValueOption.hpp"
UPropertyValueOption* UPropertyValueOption::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValueOption");
    return (UPropertyValueOption*)res;
}
