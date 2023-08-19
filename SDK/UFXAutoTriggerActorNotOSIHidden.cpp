#include "UFXAutoTriggerActorNotOSIHidden.hpp"
#include "UFXAutoTriggerBool.hpp"
UFXAutoTriggerActorNotOSIHidden* UFXAutoTriggerActorNotOSIHidden::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerActorNotOSIHidden");
    return (UFXAutoTriggerActorNotOSIHidden*)res;
}
