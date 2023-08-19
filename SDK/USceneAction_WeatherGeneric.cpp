#include "USceneAction_WeatherGeneric.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_WeatherGeneric* USceneAction_WeatherGeneric::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherGeneric");
    return (USceneAction_WeatherGeneric*)res;
}
