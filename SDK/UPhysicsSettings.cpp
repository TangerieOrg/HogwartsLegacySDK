#include "ESettingsDOF\Type.hpp"
#include "ESettingsLockedAxis\Type.hpp"
#include "FBroadphaseSettings.hpp"
#include "FChaosPhysicsSettings.hpp"
#include "FPhysicalSurfaceName.hpp"
#include "FRigidBodyErrorCorrection.hpp"
#include "UPhysicsSettings.hpp"
#include "UPhysicsSettingsCore.hpp"
UPhysicsSettings* UPhysicsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsSettings");
    return (UPhysicsSettings*)res;
}
