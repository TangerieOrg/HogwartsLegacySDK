#include "FGeometryCacheMeshData.hpp"
#include "UDEPRECATED_GeometryCacheTrack_TransformAnimation.hpp"
#include "UFunction.hpp"
#include "UGeometryCacheTrack.hpp"
UDEPRECATED_GeometryCacheTrack_TransformAnimation* UDEPRECATED_GeometryCacheTrack_TransformAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation");
    return (UDEPRECATED_GeometryCacheTrack_TransformAnimation*)res;
}
void UDEPRECATED_GeometryCacheTrack_TransformAnimation::SetMesh(FGeometryCacheMeshData& NewMeshData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh"));
    struct Params_SetMesh {
        FGeometryCacheMeshData NewMeshData; // 0x0
    }; // Size: 0xb0
    Params_SetMesh params{};
    params.NewMeshData = (FGeometryCacheMeshData)NewMeshData;
    ProcessEvent(func, &params);
    NewMeshData = params.NewMeshData;
}
