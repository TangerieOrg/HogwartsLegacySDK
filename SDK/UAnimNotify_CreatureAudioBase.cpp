#include "ECreatureImpactSize.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_CreatureAudioBase.hpp"
UAnimNotify_CreatureAudioBase* UAnimNotify_CreatureAudioBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_CreatureAudioBase");
    return (UAnimNotify_CreatureAudioBase*)res;
}
