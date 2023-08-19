#include "UAnimationDataSourceRegistry.hpp"
#include "UObject.hpp"
UAnimationDataSourceRegistry* UAnimationDataSourceRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationCore.AnimationDataSourceRegistry");
    return (UAnimationDataSourceRegistry*)res;
}
