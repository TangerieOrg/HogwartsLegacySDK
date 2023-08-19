#include "USceneActionState_WeatherPreset.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WeatherPreset* USceneActionState_WeatherPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WeatherPreset");
    return (USceneActionState_WeatherPreset*)res;
}
