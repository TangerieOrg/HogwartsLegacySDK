#include "USceneAction_TickSequencerDynamicBucketsBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_TickSequencerDynamicBucketsBase* USceneAction_TickSequencerDynamicBucketsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TickSequencerDynamicBucketsBase");
    return (USceneAction_TickSequencerDynamicBucketsBase*)res;
}
