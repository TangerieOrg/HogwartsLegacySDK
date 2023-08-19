#include "UInterface.hpp"
#include "USkinFXBlueprintInterface.hpp"
USkinFXBlueprintInterface* USkinFXBlueprintInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXBlueprintInterface");
    return (USkinFXBlueprintInterface*)res;
}
