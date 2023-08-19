#include "UAudioImpulseResponse.hpp"
#include "UObject.hpp"
UAudioImpulseResponse* UAudioImpulseResponse::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.AudioImpulseResponse");
    return (UAudioImpulseResponse*)res;
}
