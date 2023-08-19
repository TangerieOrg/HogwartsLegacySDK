#include "ACameraStackVolume.hpp"
#include "AVolume.hpp"
#include "FCameraStackVolumeInterfaceProperties.hpp"
#include "UCameraStackVolumeComponent.hpp"
#include "UCameraStackVolumePreset.hpp"
ACameraStackVolume* ACameraStackVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackVolume");
    return (ACameraStackVolume*)res;
}
