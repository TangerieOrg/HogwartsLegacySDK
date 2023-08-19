#include "USceneAction_TickSequencerDynamicBuckets.hpp"
#include "USceneAction_TickSequencerDynamicBucketsBase.hpp"
USceneAction_TickSequencerDynamicBuckets* USceneAction_TickSequencerDynamicBuckets::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TickSequencerDynamicBuckets");
    return (USceneAction_TickSequencerDynamicBuckets*)res;
}
