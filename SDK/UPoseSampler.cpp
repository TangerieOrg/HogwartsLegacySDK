#include "UObject.hpp"
#include "UPoseSampler.hpp"
UPoseSampler* UPoseSampler::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseSampler");
    return (UPoseSampler*)res;
}
