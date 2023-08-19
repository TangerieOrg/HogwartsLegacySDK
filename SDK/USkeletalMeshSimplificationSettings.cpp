#include "UDeveloperSettings.hpp"
#include "USkeletalMeshSimplificationSettings.hpp"
USkeletalMeshSimplificationSettings* USkeletalMeshSimplificationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshSimplificationSettings");
    return (USkeletalMeshSimplificationSettings*)res;
}
