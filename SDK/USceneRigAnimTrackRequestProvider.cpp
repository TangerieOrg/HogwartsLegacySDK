#include "FAnimRequest.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
#include "USceneRigAnimTrackRequestProvider.hpp"
USceneRigAnimTrackRequestProvider* USceneRigAnimTrackRequestProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigAnimTrackRequestProvider");
    return (USceneRigAnimTrackRequestProvider*)res;
}
