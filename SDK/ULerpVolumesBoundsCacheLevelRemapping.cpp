#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "ULerpVolumesBoundsCacheLevelRemapping.hpp"
ULerpVolumesBoundsCacheLevelRemapping* ULerpVolumesBoundsCacheLevelRemapping::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesBoundsCacheLevelRemapping");
    return (ULerpVolumesBoundsCacheLevelRemapping*)res;
}
void ULerpVolumesBoundsCacheLevelRemapping::RebuildAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesBoundsCacheLevelRemapping.RebuildAll"));
    struct Params_RebuildAll {
    }; // Size: 0x0
    Params_RebuildAll params{};
    ProcessEvent(func, &params);
}
