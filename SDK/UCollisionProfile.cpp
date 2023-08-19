#include "FCollisionResponseTemplate.hpp"
#include "FCustomChannelSetup.hpp"
#include "FCustomProfile.hpp"
#include "FRedirector.hpp"
#include "UCollisionProfile.hpp"
#include "UDeveloperSettings.hpp"
UCollisionProfile* UCollisionProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CollisionProfile");
    return (UCollisionProfile*)res;
}
