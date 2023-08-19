#include "ULinearColorTweenDummy.hpp"
#include "UObject.hpp"
ULinearColorTweenDummy* ULinearColorTweenDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LinearColorTweenDummy");
    return (ULinearColorTweenDummy*)res;
}
