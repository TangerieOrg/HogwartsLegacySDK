#include "FRuntimeFloatCurve.hpp"
#include "UDistributionFloatConstantCurve.hpp"
#include "USoundNode.hpp"
#include "USoundNodeEnveloper.hpp"
USoundNodeEnveloper* USoundNodeEnveloper::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeEnveloper");
    return (USoundNodeEnveloper*)res;
}
