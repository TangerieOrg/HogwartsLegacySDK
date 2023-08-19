#include "ABP_ResourceTree_01_C.hpp"
#include "ABP_ResourceTree_Base_C.hpp"
ABP_ResourceTree_01_C* ABP_ResourceTree_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_01.BP_ResourceTree_01_C");
    return (ABP_ResourceTree_01_C*)res;
}
