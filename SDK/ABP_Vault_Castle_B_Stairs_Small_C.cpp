#include "AActor.hpp"
#include "ABP_Vault_Castle_B_Stairs_Small_C.hpp"
#include "UBoxComponent.hpp"
#include "UCameraStackVolumeComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Vault_Castle_B_Stairs_Small_C* ABP_Vault_Castle_B_Stairs_Small_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Vaults/Blueprints/BP_Vault_Castle_B_Stairs_Small.BP_Vault_Castle_B_Stairs_Small_C");
    return (ABP_Vault_Castle_B_Stairs_Small_C*)res;
}
