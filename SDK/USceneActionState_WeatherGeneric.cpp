#include "USceneActionState_WeatherGeneric.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WeatherGeneric* USceneActionState_WeatherGeneric::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherGeneric");
    return (USceneActionState_WeatherGeneric*)res;
}
