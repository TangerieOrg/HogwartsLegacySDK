#include "FCullDistanceSizePair.hpp"
#include "UCullDistancePreset.hpp"
#include "UDataAsset.hpp"
UCullDistancePreset* UCullDistancePreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CullDistancePreset");
    return (UCullDistancePreset*)res;
}
