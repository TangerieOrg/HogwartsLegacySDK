#include "UObject.hpp"
#include "USoundSubmixBase.hpp"
USoundSubmixBase* USoundSubmixBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundSubmixBase");
    return (USoundSubmixBase*)res;
}
