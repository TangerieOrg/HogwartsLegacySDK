#include "FCameraStackVolumeOperationSettings.hpp"
#include "UCameraStackVolumePreset.hpp"
#include "UDataAsset.hpp"
UCameraStackVolumePreset* UCameraStackVolumePreset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackVolumePreset");
    return (UCameraStackVolumePreset*)res;
}
