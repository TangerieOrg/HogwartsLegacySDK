#include "ABP_Forageable_Leaping_Toadstool_Mound_C.hpp"
#include "AForagable.hpp"
#include "UChildActorComponent.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Forageable_Leaping_Toadstool_Mound_C* ABP_Forageable_Leaping_Toadstool_Mound_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Foraging/Blueprints/BP_Forageable_Leaping_Toadstool_Mound.BP_Forageable_Leaping_Toadstool_Mound_C");
    return (ABP_Forageable_Leaping_Toadstool_Mound_C*)res;
}
