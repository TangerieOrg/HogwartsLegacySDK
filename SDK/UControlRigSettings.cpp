#include "UControlRigSettings.hpp"
#include "UDeveloperSettings.hpp"
UControlRigSettings* UControlRigSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigSettings");
    return (UControlRigSettings*)res;
}
