#include "AActor.hpp"
#include "ALightStatsSingleton.hpp"
ALightStatsSingleton* ALightStatsSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightStatsSingleton");
    return (ALightStatsSingleton*)res;
}
