#include "ULerpVolumesPresistentContextDataBase.hpp"
#include "UObject.hpp"
ULerpVolumesPresistentContextDataBase* ULerpVolumesPresistentContextDataBase::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesPresistentContextDataBase");
    return (ULerpVolumesPresistentContextDataBase*)res;
}
