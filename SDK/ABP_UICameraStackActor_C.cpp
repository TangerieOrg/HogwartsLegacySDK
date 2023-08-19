#include "ABP_UICameraStackActor_C.hpp"
#include "ACameraStackActor.hpp"
ABP_UICameraStackActor_C* ABP_UICameraStackActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BP_UICameraStackActor.BP_UICameraStackActor_C");
    return (ABP_UICameraStackActor_C*)res;
}
