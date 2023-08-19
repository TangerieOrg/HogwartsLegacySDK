#include "FAnimGroupInfo.hpp"
#include "UAnimBlueprint.hpp"
#include "UBlueprint.hpp"
#include "USkeleton.hpp"
UAnimBlueprint* UAnimBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimBlueprint");
    return (UAnimBlueprint*)res;
}
