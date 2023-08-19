#include "FAkPluginInfo.hpp"
#include "UAkAssetDataWithMedia.hpp"
#include "UAkInitBankAssetData.hpp"
UAkInitBankAssetData* UAkInitBankAssetData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkInitBankAssetData");
    return (UAkInitBankAssetData*)res;
}
