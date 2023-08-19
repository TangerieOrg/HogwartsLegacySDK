#include "USceneActionState_WeatherSequence.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_WeatherSequence* USceneActionState_WeatherSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequence");
    return (USceneActionState_WeatherSequence*)res;
}
