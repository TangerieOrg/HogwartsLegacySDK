#include "FWindParametersInstant.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#include "USceneAction_WeatherLocalWindConstant.hpp"
USceneAction_WeatherLocalWindConstant* USceneAction_WeatherLocalWindConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherLocalWindConstant");
    return (USceneAction_WeatherLocalWindConstant*)res;
}
