#include "ABP_NurturingCameraStackActor_C.hpp"
#include "ACameraStackActor.hpp"
ABP_NurturingCameraStackActor_C* ABP_NurturingCameraStackActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BP_NurturingCameraStackActor.BP_NurturingCameraStackActor_C");
    return (ABP_NurturingCameraStackActor_C*)res;
}
