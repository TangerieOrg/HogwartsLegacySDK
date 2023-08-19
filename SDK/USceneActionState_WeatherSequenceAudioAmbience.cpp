#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceAudioAmbience.hpp"
USceneActionState_WeatherSequenceAudioAmbience* USceneActionState_WeatherSequenceAudioAmbience::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceAudioAmbience");
    return (USceneActionState_WeatherSequenceAudioAmbience*)res;
}
