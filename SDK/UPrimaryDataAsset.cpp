#include "UDataAsset.hpp"
#include "UPrimaryDataAsset.hpp"
UPrimaryDataAsset* UPrimaryDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PrimaryDataAsset");
    return (UPrimaryDataAsset*)res;
}
