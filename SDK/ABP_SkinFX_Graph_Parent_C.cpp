#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ASkinFXDefinitionGraph.hpp"
#include "USceneComponent.hpp"
ABP_SkinFX_Graph_Parent_C* ABP_SkinFX_Graph_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /SkinFX/BP_SkinFX_Graph_Parent.BP_SkinFX_Graph_Parent_C");
    return (ABP_SkinFX_Graph_Parent_C*)res;
}
