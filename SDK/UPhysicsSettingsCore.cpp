#include "ECollisionTraceFlag.hpp"
#include "EFrictionCombineMode\Type.hpp"
#include "FChaosSolverConfiguration.hpp"
#include "UDeveloperSettings.hpp"
#include "UPhysicsSettingsCore.hpp"
UPhysicsSettingsCore* UPhysicsSettingsCore::StaticClass() {
    static auto res = find_uobject("Class /Script/PhysicsCore.PhysicsSettingsCore");
    return (UPhysicsSettingsCore*)res;
}
