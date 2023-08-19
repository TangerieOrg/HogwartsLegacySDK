#include "FBaseArchitectAsset_SoftDependencyContainer.hpp"
#include "FGameplayTag.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UDataAsset.hpp"
UBaseArchitectAsset* UBaseArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.BaseArchitectAsset");
    return (UBaseArchitectAsset*)res;
}
