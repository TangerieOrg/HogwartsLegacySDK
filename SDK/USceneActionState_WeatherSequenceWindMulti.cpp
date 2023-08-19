#include "FWeatherTimeBase.hpp"
#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceWindMulti.hpp"
#include "UWindGustController.hpp"
USceneActionState_WeatherSequenceWindMulti* USceneActionState_WeatherSequenceWindMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceWindMulti");
    return (USceneActionState_WeatherSequenceWindMulti*)res;
}
