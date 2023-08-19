#include "UAkAudioEvent.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceAudioAmbience.hpp"
USceneAction_WeatherSequenceAudioAmbience* USceneAction_WeatherSequenceAudioAmbience::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceAudioAmbience");
    return (USceneAction_WeatherSequenceAudioAmbience*)res;
}
