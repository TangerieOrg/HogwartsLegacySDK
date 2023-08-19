#include "FLerpVolumesTagEntry.hpp"
#include "ULerpVolumesFinalTagHistory.hpp"
#include "ULerpVolumesPresistentContextDataBase.hpp"
ULerpVolumesFinalTagHistory* ULerpVolumesFinalTagHistory::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesFinalTagHistory");
    return (ULerpVolumesFinalTagHistory*)res;
}
