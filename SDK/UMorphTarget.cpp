#include "UMorphTarget.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
UMorphTarget* UMorphTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MorphTarget");
    return (UMorphTarget*)res;
}
