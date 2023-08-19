#include "ULightComponentStateRemoveTag.hpp"
#include "ULightComponentStateTag.hpp"
ULightComponentStateRemoveTag* ULightComponentStateRemoveTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateRemoveTag");
    return (ULightComponentStateRemoveTag*)res;
}
