#include "FGeometryCacheMeshData.hpp"
#include "UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.hpp"
#include "UFunction.hpp"
#include "UGeometryCacheTrack.hpp"
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation* UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation");
    return (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation*)res;
}
void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample"));
    struct Params_AddMeshSample {
        FGeometryCacheMeshData MeshData; // 0x0
        float SampleTime; // 0xb0
    }; // Size: 0xb4
    Params_AddMeshSample params{};
    params.MeshData = (FGeometryCacheMeshData)MeshData;
    params.SampleTime = (float)SampleTime;
    ProcessEvent(func, &params);
    MeshData = params.MeshData;
}
