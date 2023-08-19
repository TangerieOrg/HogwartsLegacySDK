#include "UAkAssetDataSwitchContainerData.hpp"
#include "UAkGroupValue.hpp"
#include "UAkMediaAsset.hpp"
#include "UObject.hpp"
UAkAssetDataSwitchContainerData* UAkAssetDataSwitchContainerData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetDataSwitchContainerData");
    return (UAkAssetDataSwitchContainerData*)res;
}
