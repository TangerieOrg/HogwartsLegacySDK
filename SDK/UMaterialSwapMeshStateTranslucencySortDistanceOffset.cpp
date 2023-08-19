#include "UMaterialSwapMeshStateFloatMap.hpp"
#include "UMaterialSwapMeshStateTranslucencySortDistanceOffset.hpp"
UMaterialSwapMeshStateTranslucencySortDistanceOffset* UMaterialSwapMeshStateTranslucencySortDistanceOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateTranslucencySortDistanceOffset");
    return (UMaterialSwapMeshStateTranslucencySortDistanceOffset*)res;
}
