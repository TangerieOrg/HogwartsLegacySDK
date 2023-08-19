#include "USoundClass.hpp"
#include "USoundNode.hpp"
#include "USoundNodeSoundClass.hpp"
USoundNodeSoundClass* USoundNodeSoundClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeSoundClass");
    return (USoundNodeSoundClass*)res;
}
