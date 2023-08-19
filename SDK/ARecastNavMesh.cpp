#include "ANavigationData.hpp"
#include "ARecastNavMesh.hpp"
#include "ERecastPartitioning\Type.hpp"
#include "FBox.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ARecastNavMesh* ARecastNavMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.RecastNavMesh");
    return (ARecastNavMesh*)res;
}
bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(FBox Bounds, UClass* OldArea, UClass* NewArea, bool ReplaceLinks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds"));
    struct Params_K2_ReplaceAreaInTileBounds {
        FBox Bounds; // 0x0
        char pad_1c[0x4];
        UClass* OldArea; // 0x20
        UClass* NewArea; // 0x28
        bool ReplaceLinks; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_K2_ReplaceAreaInTileBounds params{};
    params.Bounds = (FBox)Bounds;
    params.OldArea = (UClass*)OldArea;
    params.NewArea = (UClass*)NewArea;
    params.ReplaceLinks = (bool)ReplaceLinks;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
