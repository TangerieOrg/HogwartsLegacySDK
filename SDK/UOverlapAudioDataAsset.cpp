#include "UOverlapAudioDataAsset.hpp"
#include "UOverlapEffectsDataAsset.hpp"
UOverlapAudioDataAsset* UOverlapAudioDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OverlapAudioDataAsset");
    return (UOverlapAudioDataAsset*)res;
}
