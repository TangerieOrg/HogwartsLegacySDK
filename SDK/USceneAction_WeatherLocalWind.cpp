#include "FBlendDomain.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_WeatherLocalWind* USceneAction_WeatherLocalWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherLocalWind");
    return (USceneAction_WeatherLocalWind*)res;
}
