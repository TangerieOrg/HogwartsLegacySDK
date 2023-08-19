#include "FAnimSlotGroup.hpp"
#include "FBoneNode.hpp"
#include "FGuid.hpp"
#include "FSmartNameContainer.hpp"
#include "FTransform.hpp"
#include "FVirtualBone.hpp"
#include "UAssetUserData.hpp"
#include "UBlendProfile.hpp"
#include "UObject.hpp"
#include "USkeletalMeshSocket.hpp"
#include "USkeleton.hpp"
USkeleton* USkeleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Skeleton");
    return (USkeleton*)res;
}
