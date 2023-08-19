#include "USceneAction_WeatherSequenceCameraMesh.hpp"
#include "USceneAction_WeatherSequenceCameraStaticMesh.hpp"
USceneAction_WeatherSequenceCameraStaticMesh* USceneAction_WeatherSequenceCameraStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCameraStaticMesh");
    return (USceneAction_WeatherSequenceCameraStaticMesh*)res;
}
