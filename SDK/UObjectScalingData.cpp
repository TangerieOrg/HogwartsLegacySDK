#include "UCurveVector.hpp"
#include "UDataAsset.hpp"
#include "UObjectScalingData.hpp"
UObjectScalingData* UObjectScalingData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectScalingData");
    return (UObjectScalingData*)res;
}
