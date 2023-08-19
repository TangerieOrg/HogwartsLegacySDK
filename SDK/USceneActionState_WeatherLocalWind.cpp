#include "USceneActionState_WeatherLocalWind.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WeatherLocalWind* USceneActionState_WeatherLocalWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WeatherLocalWind");
    return (USceneActionState_WeatherLocalWind*)res;
}
