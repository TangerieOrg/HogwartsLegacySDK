#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequencePause.hpp"
USceneActionState_WeatherSequencePause* USceneActionState_WeatherSequencePause::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequencePause");
    return (USceneActionState_WeatherSequencePause*)res;
}
