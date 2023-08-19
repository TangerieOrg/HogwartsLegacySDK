#include "ULerpVolumesPresistentContextData.hpp"
#include "UObject.hpp"
ULerpVolumesPresistentContextData* ULerpVolumesPresistentContextData::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesPresistentContextData");
    return (ULerpVolumesPresistentContextData*)res;
}
