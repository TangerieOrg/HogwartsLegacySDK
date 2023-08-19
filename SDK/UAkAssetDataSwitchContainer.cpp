#include "UAkAssetDataSwitchContainer.hpp"
#include "UAkAssetDataSwitchContainerData.hpp"
#include "UAkAssetDataWithMedia.hpp"
#include "UAkGroupValue.hpp"
UAkAssetDataSwitchContainer* UAkAssetDataSwitchContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetDataSwitchContainer");
    return (UAkAssetDataSwitchContainer*)res;
}
