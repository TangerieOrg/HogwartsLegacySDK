#include "FExpHeightFogParametersOverride.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#include "USceneAction_WeatherSequenceFogOverrideParams.hpp"
USceneAction_WeatherSequenceFogOverrideParams* USceneAction_WeatherSequenceFogOverrideParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogOverrideParams");
    return (USceneAction_WeatherSequenceFogOverrideParams*)res;
}
