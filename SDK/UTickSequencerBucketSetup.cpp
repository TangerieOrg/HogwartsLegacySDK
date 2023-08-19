#include "UDataAsset.hpp"
#include "UTickSequencerBucketSetup.hpp"
UTickSequencerBucketSetup* UTickSequencerBucketSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerBucketSetup");
    return (UTickSequencerBucketSetup*)res;
}
