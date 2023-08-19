#include "UAudioEndpointSettingsBase.hpp"
#include "UClass.hpp"
#include "UEndpointSubmix.hpp"
#include "USoundSubmixBase.hpp"
UEndpointSubmix* UEndpointSubmix::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EndpointSubmix");
    return (UEndpointSubmix*)res;
}
