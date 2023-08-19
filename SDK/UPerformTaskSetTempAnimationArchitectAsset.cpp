#include "EPerformTaskSetting.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UPerformTaskSetTempAnimationArchitectAsset.hpp"
UPerformTaskSetTempAnimationArchitectAsset* UPerformTaskSetTempAnimationArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerformTaskSetTempAnimationArchitectAsset");
    return (UPerformTaskSetTempAnimationArchitectAsset*)res;
}
