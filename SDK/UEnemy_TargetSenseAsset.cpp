#include "FEnemy_TargetSense.hpp"
#include "UDataAsset.hpp"
#include "UEnemy_TargetSenseAsset.hpp"
UEnemy_TargetSenseAsset* UEnemy_TargetSenseAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TargetSenseAsset");
    return (UEnemy_TargetSenseAsset*)res;
}
