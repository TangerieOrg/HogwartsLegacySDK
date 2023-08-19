#include "EWindParametersTimeBase.hpp"
#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceWindMulti.hpp"
USceneAction_WeatherSequenceWindMulti* USceneAction_WeatherSequenceWindMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceWindMulti");
    return (USceneAction_WeatherSequenceWindMulti*)res;
}
