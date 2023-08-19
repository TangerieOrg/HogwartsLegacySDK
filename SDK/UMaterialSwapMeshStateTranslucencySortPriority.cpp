#include "UMaterialSwapMeshStateIntMap.hpp"
#include "UMaterialSwapMeshStateTranslucencySortPriority.hpp"
UMaterialSwapMeshStateTranslucencySortPriority* UMaterialSwapMeshStateTranslucencySortPriority::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateTranslucencySortPriority");
    return (UMaterialSwapMeshStateTranslucencySortPriority*)res;
}
