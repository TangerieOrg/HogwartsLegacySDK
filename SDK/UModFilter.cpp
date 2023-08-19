#include "UModFilter.hpp"
#include "UPrimaryDataAsset.hpp"
UModFilter* UModFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.ModFilter");
    return (UModFilter*)res;
}
