#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotify_StaticMeshProp.hpp"
#include "UStaticMesh.hpp"
UAnimNotify_StaticMeshProp* UAnimNotify_StaticMeshProp::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotify_StaticMeshProp");
    return (UAnimNotify_StaticMeshProp*)res;
}
