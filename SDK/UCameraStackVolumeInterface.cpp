#include "UCameraStackVolumeInterface.hpp"
#include "UInterface.hpp"
UCameraStackVolumeInterface* UCameraStackVolumeInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackVolumeInterface");
    return (UCameraStackVolumeInterface*)res;
}
