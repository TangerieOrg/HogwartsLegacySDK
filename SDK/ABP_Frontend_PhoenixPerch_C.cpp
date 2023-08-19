#include "AActor.hpp"
#include "ABP_Frontend_PhoenixPerch_C.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_PhoenixPerch_C* ABP_Frontend_PhoenixPerch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_PhoenixPerch.BP_Frontend_PhoenixPerch_C");
    return (ABP_Frontend_PhoenixPerch_C*)res;
}
