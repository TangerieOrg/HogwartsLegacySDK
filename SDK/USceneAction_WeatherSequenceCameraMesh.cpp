#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWeatherSequenceScalarParameterCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceCameraMesh.hpp"
USceneAction_WeatherSequenceCameraMesh* USceneAction_WeatherSequenceCameraMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCameraMesh");
    return (USceneAction_WeatherSequenceCameraMesh*)res;
}
