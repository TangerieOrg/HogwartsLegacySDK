#include "USoundSubmixBase.hpp"
#include "USoundSubmixWithParentBase.hpp"
USoundSubmixWithParentBase* USoundSubmixWithParentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundSubmixWithParentBase");
    return (USoundSubmixWithParentBase*)res;
}
