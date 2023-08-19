#include "AActor.hpp"
#include "ABP_Frontend_Table_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_Table_C* ABP_Frontend_Table_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_Table.BP_Frontend_Table_C");
    return (ABP_Frontend_Table_C*)res;
}
