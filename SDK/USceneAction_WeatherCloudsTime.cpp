#include "FVector2D.hpp"
#include "USceneAction_WeatherCloudsTime.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_WeatherCloudsTime* USceneAction_WeatherCloudsTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherCloudsTime");
    return (USceneAction_WeatherCloudsTime*)res;
}
