#include "UPropertyValue.hpp"
#include "UPropertyValueMaterial.hpp"
UPropertyValueMaterial* UPropertyValueMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValueMaterial");
    return (UPropertyValueMaterial*)res;
}
