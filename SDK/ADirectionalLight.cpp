#include "ADirectionalLight.hpp"
#include "ALight.hpp"
ADirectionalLight* ADirectionalLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DirectionalLight");
    return (ADirectionalLight*)res;
}
