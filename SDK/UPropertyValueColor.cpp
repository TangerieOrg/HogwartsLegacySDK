#include "UPropertyValue.hpp"
#include "UPropertyValueColor.hpp"
UPropertyValueColor* UPropertyValueColor::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValueColor");
    return (UPropertyValueColor*)res;
}
