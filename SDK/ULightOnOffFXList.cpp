#include "FLightOnOffFX.hpp"
#include "UDataAsset.hpp"
#include "ULightOnOffFXList.hpp"
ULightOnOffFXList* ULightOnOffFXList::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightOnOffFXList");
    return (ULightOnOffFXList*)res;
}
