#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "USceneAction_WeatherSequenceWind.hpp"
#include "USceneAction_WeatherSequenceWindParams.hpp"
#include "UWindGustController.hpp"
USceneAction_WeatherSequenceWindParams* USceneAction_WeatherSequenceWindParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceWindParams");
    return (USceneAction_WeatherSequenceWindParams*)res;
}
