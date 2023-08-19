#include "UAnimNotify_CreatureAudioBase.hpp"
#include "UAnimNotify_CreatureFootstep.hpp"
UAnimNotify_CreatureFootstep* UAnimNotify_CreatureFootstep::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_CreatureFootstep");
    return (UAnimNotify_CreatureFootstep*)res;
}
