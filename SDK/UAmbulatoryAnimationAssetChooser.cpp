#include "UAblAnimationAssetChooser.hpp"
#include "UAmbulatoryAnimationAssetChooser.hpp"
UAmbulatoryAnimationAssetChooser* UAmbulatoryAnimationAssetChooser::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AmbulatoryAnimationAssetChooser");
    return (UAmbulatoryAnimationAssetChooser*)res;
}
