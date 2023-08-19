#include "UPropertyValue.hpp"
#include "UPropertyValueSoftObject.hpp"
UPropertyValueSoftObject* UPropertyValueSoftObject::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValueSoftObject");
    return (UPropertyValueSoftObject*)res;
}
