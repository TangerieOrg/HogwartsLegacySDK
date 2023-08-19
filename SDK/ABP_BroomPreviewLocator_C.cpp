#include "ABP_BroomPreviewLocator_C.hpp"
#include "ABroomPreviewLocator.hpp"
#include "USceneComponent.hpp"
#include "USceneRigRegisteredActorComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_BroomPreviewLocator_C* ABP_BroomPreviewLocator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Vendor/BP_BroomPreviewLocator.BP_BroomPreviewLocator_C");
    return (ABP_BroomPreviewLocator_C*)res;
}
