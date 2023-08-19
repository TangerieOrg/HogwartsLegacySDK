#include "FForceFeedbackChannelDetails.hpp"
#include "UForceFeedbackEffect.hpp"
#include "UObject.hpp"
UForceFeedbackEffect* UForceFeedbackEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ForceFeedbackEffect");
    return (UForceFeedbackEffect*)res;
}
