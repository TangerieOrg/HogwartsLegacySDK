#include "UAblPhysicalBodyManager.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
UAblPhysicalBodyManager* UAblPhysicalBodyManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPhysicalBodyManager");
    return (UAblPhysicalBodyManager*)res;
}
