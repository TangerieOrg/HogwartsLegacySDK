#include "UObject.hpp"
#include "USoundModulatorBase.hpp"
USoundModulatorBase* USoundModulatorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SoundModulatorBase");
    return (USoundModulatorBase*)res;
}
