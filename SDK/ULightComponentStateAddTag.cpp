#include "ULightComponentStateAddTag.hpp"
#include "ULightComponentStateTag.hpp"
ULightComponentStateAddTag* ULightComponentStateAddTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateAddTag");
    return (ULightComponentStateAddTag*)res;
}
