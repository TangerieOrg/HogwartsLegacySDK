#include "UObject.hpp"
#include "UReverbEffect.hpp"
UReverbEffect* UReverbEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReverbEffect");
    return (UReverbEffect*)res;
}
