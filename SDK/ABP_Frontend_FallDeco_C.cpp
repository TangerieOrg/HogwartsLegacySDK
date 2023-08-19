#include "AActor.hpp"
#include "ABP_Frontend_FallDeco_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_FallDeco_C* ABP_Frontend_FallDeco_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_FallDeco.BP_Frontend_FallDeco_C");
    return (ABP_Frontend_FallDeco_C*)res;
}
