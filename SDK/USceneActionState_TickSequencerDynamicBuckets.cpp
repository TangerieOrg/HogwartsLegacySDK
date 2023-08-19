#include "USceneActionState_TickSequencerDynamicBuckets.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_TickSequencerDynamicBuckets* USceneActionState_TickSequencerDynamicBuckets::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_TickSequencerDynamicBuckets");
    return (USceneActionState_TickSequencerDynamicBuckets*)res;
}
