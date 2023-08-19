#include "FGeometryCacheMeshData.hpp"
#include "UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.hpp"
#include "UFunction.hpp"
#include "UGeometryCacheTrack.hpp"
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation* UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
    return (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation*)res;
}
void UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::SetMesh(FGeometryCacheMeshData& NewMeshData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh"));
    struct Params_SetMesh {
        FGeometryCacheMeshData NewMeshData; // 0x0
    }; // Size: 0xb0
    Params_SetMesh params{};
    params.NewMeshData = (FGeometryCacheMeshData)NewMeshData;
    ProcessEvent(func, &params);
    NewMeshData = params.NewMeshData;
}
