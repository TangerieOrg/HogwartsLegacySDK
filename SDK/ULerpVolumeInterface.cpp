#include "UInterface.hpp"
#include "ULerpVolumeInterface.hpp"
ULerpVolumeInterface* ULerpVolumeInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeInterface");
    return (ULerpVolumeInterface*)res;
}
