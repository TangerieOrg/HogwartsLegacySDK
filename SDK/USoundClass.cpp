#include "FPassiveSoundMixModifier.hpp"
#include "FSoundClassProperties.hpp"
#include "UObject.hpp"
#include "USoundClass.hpp"
USoundClass* USoundClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundClass");
    return (USoundClass*)res;
}
