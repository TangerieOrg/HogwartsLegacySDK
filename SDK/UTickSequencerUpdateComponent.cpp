#include "FTickSequencerUpdateBucketList.hpp"
#include "UActorComponent.hpp"
#include "UTickSequencerUpdateComponent.hpp"
UTickSequencerUpdateComponent* UTickSequencerUpdateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerUpdateComponent");
    return (UTickSequencerUpdateComponent*)res;
}
