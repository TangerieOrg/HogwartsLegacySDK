#include "FLerpVolumesTagEntry.hpp"
#include "ULerpVolumesLastValidTag.hpp"
#include "ULerpVolumesPresistentContextDataBase.hpp"
ULerpVolumesLastValidTag* ULerpVolumesLastValidTag::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesLastValidTag");
    return (ULerpVolumesLastValidTag*)res;
}
