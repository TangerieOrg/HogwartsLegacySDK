#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_BulletTime.hpp"
URPGTriggerEffect_BulletTime* URPGTriggerEffect_BulletTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_BulletTime");
    return (URPGTriggerEffect_BulletTime*)res;
}
