#include "AActor.hpp"
#include "ABP_Frontend_DecoShelf_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_DecoShelf_C* ABP_Frontend_DecoShelf_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_DecoShelf.BP_Frontend_DecoShelf_C");
    return (ABP_Frontend_DecoShelf_C*)res;
}
