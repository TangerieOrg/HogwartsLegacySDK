#include "UObject.hpp"
#include "USkeletalMeshEditorData.hpp"
USkeletalMeshEditorData* USkeletalMeshEditorData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshEditorData");
    return (USkeletalMeshEditorData*)res;
}
