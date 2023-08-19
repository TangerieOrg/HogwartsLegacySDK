#include "FForceFeedbackAttenuationSettings.hpp"
#include "UForceFeedbackAttenuation.hpp"
#include "UObject.hpp"
UForceFeedbackAttenuation* UForceFeedbackAttenuation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ForceFeedbackAttenuation");
    return (UForceFeedbackAttenuation*)res;
}
