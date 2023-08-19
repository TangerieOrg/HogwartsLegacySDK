#include "FAnimationRequestLayer.hpp"
#include "UAnimLayersAsset.hpp"
#include "UDataAsset.hpp"
UAnimLayersAsset* UAnimLayersAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimLayersAsset");
    return (UAnimLayersAsset*)res;
}
