#include "UAnimNotify_CreatureAudioBase.hpp"
#include "UAnimNotify_CreatureBodyfall.hpp"
UAnimNotify_CreatureBodyfall* UAnimNotify_CreatureBodyfall::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_CreatureBodyfall");
    return (UAnimNotify_CreatureBodyfall*)res;
}
