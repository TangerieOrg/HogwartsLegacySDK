#include "USceneActionState_WeatherCloudsTime.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WeatherCloudsTime* USceneActionState_WeatherCloudsTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WeatherCloudsTime");
    return (USceneActionState_WeatherCloudsTime*)res;
}
