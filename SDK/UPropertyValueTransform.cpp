#include "UPropertyValue.hpp"
#include "UPropertyValueTransform.hpp"
UPropertyValueTransform* UPropertyValueTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValueTransform");
    return (UPropertyValueTransform*)res;
}
