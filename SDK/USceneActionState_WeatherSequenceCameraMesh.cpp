#include "UMaterialInstanceDynamic.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceCameraMesh.hpp"
USceneActionState_WeatherSequenceCameraMesh* USceneActionState_WeatherSequenceCameraMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceCameraMesh");
    return (USceneActionState_WeatherSequenceCameraMesh*)res;
}
