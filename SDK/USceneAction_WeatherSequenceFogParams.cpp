#include "FExpHeightFogParameters.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#include "USceneAction_WeatherSequenceFogParams.hpp"
USceneAction_WeatherSequenceFogParams* USceneAction_WeatherSequenceFogParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogParams");
    return (USceneAction_WeatherSequenceFogParams*)res;
}
