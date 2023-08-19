#include "UAblAnimationEndCallback.hpp"
#include "UObject.hpp"
UAblAnimationEndCallback* UAblAnimationEndCallback::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimationEndCallback");
    return (UAblAnimationEndCallback*)res;
}
